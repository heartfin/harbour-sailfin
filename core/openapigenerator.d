#!/usr/bin/env dub
/+ dub.sdl:
	name "openapigenerator.d"
	dependency "dyaml" version="~>0.8.0"
    dependency "handlebars" version="~>0.2.2"
    stringImportPaths "codegen"
+/

// The following copyright string also applies to this file.
string COPYRIGHT = q"EOL
/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
EOL";
import std.algorithm;
import std.array;
import std.conv;
import std.exception;
import std.file : mkdirRecurse;
import std.functional;
import std.path : buildPath, dirSeparator;
import std.parallelism : parallel;
import std.range;
import std.string;
import std.stdio;
import std.uni;

import dyaml;
import handlebars.tpl;

/* 
 * Dear future (potential) employers, hereby I swear I will not brew up such unmaintainable code
 * if you would hire me and treat me well.
 */
 
/*
 * What should I use?
 * I cannot use GTAD.
 * I cannot use GTAD, because it does not support OpenAPI 3.
 *
 * What should I use?
 * I cannot use openapi-generator.
 * I cannot use openapi-generator, because it generates too much.
 *
 * …
 *
 * I was in doubt about writing my own script.
 * Since it sounds easy and fun to do.
 * I was in doubt about writing my own script.
 * Since using DLANG fills me with joy.
 *
 * |: I was even in two minds
 * But I took no risk
 * I've been thinking about writing my own script. :| [2×]
 *
 * My own script?
 * My own script?
 * My— own— script~?
 *
 * |: Is there life on Pluto?
 * Are we able to dance on the moon?
 * Is there some space between the stars I where I'm able to go to? :| [2×]
 *
 */

static this() {
	COPYRIGHT ~= q"EOS
/*
 * WARNING: THIS IS AN AUTOMATICALLY GENERATED FILE! PLEASE DO NOT EDIT THIS, AS YOUR EDITS WILL GET
 * OVERWRITTEN AT SOME POINT! 
 *
 * If there is a bug in this file, please fix the code generator used to generate this file found in
 * core/openapigenerator.d. 
 *
 * This file is generated based on Jellyfin's OpenAPI description, "openapi.json". Please update that
 * file with a newer file if needed instead of manually updating the files.
 */
EOS";
}

// CODE GENERATION SETTINGS

// File name of the CMake file this generated should generate.
string CMAKE_INCLUDE_FILE = "GeneratedSources.cmake";
string CMAKE_VAR_PREFIX = "openapi";


string INCLUDE_PREFIX = "JellyfinQt";
string SRC_PREFIX = "";

string MODEL_FOLDER = "dto";
string SUPPORT_FOLDER = "support";
string LOADER_FOLDER = "loader";
string HTTP_LOADER_FOLDER = buildPath("loader", "http");

string[string] compatAliases;
string[string] memberAliases;

static this() {
	memberAliases["id"] = "jellyfinId";
	memberAliases["static"] = "staticStreaming";
}

CasePolicy OPENAPI_CASING = CasePolicy.PASCAL;
static immutable string[1] CPP_NAMESPACE = ["Jellyfin"];
static immutable string[2] CPP_NAMESPACE_DTO = ["Jellyfin", "DTO"];
static immutable string[2] CPP_NAMESPACE_SUPPORT = ["Jellyfin", "Support"];
static immutable string[2] CPP_NAMESPACE_LOADER = ["Jellyfin", "Loader"];
static immutable string[3] CPP_NAMESPACE_LOADER_HTTP = ["Jellyfin", "Loader", "HTTP"];

CasePolicy CPP_FILENAME_CASING = CasePolicy.LOWER;
CasePolicy CPP_CLASS_CASING = CasePolicy.PASCAL;
CasePolicy CPP_CLASS_MEMBER_CASING = CasePolicy.CAMEL;
// Prefix for class members.
string CPP_CLASS_MEMBER_PREFIX = "m_";
CasePolicy CPP_CLASS_METHOD_CASING = CasePolicy.CAMEL;
bool GENERATE_PROPERTIES = true;

string outputDirectory = "generated";
// END CODE GENERATION SETTINGS.

// Implementation

enum CasePolicy {
	KEEP, // Do not modify
	PASCAL, // PascalCase
	CAMEL, // camelCase
	SNAKE, // snake_case
	SCREAMING_SNAKE, // SCREAMING_SNAKE_CASE
	LOWER, // lowercase
	UPPER // UPPERCASE
}

string USAGE = "USAGE: %s <openapi scheme>";

class CLIArgumentException : Exception {
	mixin basicExceptionCtors;
}

int main(string[] args) {
	try {
		realMain(args);
	} catch (CLIArgumentException e) {
		stderr.writeln(e.message);
		return -1;
	}
	return 0;
}

void realMain(string[] args) {
	enforce!CLIArgumentException(args.length >= 2, USAGE.format(args[0]));
	string schemeFile = args[1];
	
	if (args.length >= 3) outputDirectory = args[2];
	mkdirRecurse(buildPath(outputDirectory, "include", INCLUDE_PREFIX, MODEL_FOLDER));
	mkdirRecurse(buildPath(outputDirectory, "include", INCLUDE_PREFIX, HTTP_LOADER_FOLDER));
	mkdirRecurse(buildPath(outputDirectory, "src", SRC_PREFIX, MODEL_FOLDER));
	mkdirRecurse(buildPath(outputDirectory, "src", SRC_PREFIX, HTTP_LOADER_FOLDER));
	
	Node root = Loader.fromFile(schemeFile).load();
	Appender!(string[]) headerFiles, implementationFiles;
	
	foreach(string key, ref const Node scheme; root["components"]["schemas"]) {
		string fileBase = key.applyCasePolicy(OPENAPI_CASING, CPP_FILENAME_CASING);
		string headerFileName = buildPath(outputDirectory, "include", INCLUDE_PREFIX, MODEL_FOLDER, fileBase ~ ".h");
		string implementationFileName = buildPath(outputDirectory, "src", SRC_PREFIX, MODEL_FOLDER, fileBase ~ ".cpp");
		
		headerFiles ~= [headerFileName];
		implementationFiles ~= [implementationFileName];
		
		File headerFile = File(headerFileName, "w+");
		File implementationFile = File(implementationFileName, "w+");
		
		generateFileForSchema(key, scheme, root["components"]["schemas"], headerFile, implementationFile);
	}
	
	Appender!(Endpoint[]) endpoints;
	foreach(string path, ref const Node operations; root["paths"]) {
		foreach (string operation, ref const Node endpoint; operations) {
			string fileBase = endpoint["operationId"].as!string.applyCasePolicy(OPENAPI_CASING, CPP_FILENAME_CASING);
			string headerFileName = buildPath(outputDirectory, "include", INCLUDE_PREFIX, HTTP_LOADER_FOLDER, fileBase ~ ".h");
			string implementationFileName = buildPath(outputDirectory, "src", SRC_PREFIX, HTTP_LOADER_FOLDER, fileBase ~ ".cpp");
			
			headerFiles ~= [headerFileName];
			implementationFiles ~= [implementationFileName];
			
			File headerFile = File(headerFileName, "w+");
			File implementationFile = File(implementationFileName, "w+");
			generateFileForEndpoint(path, operation, endpoint, root["components"]["schemas"], headerFile, 
					implementationFile, endpoints);
		}
	}
	string typesHeaderPath = buildPath(outputDirectory, "include", INCLUDE_PREFIX, LOADER_FOLDER, "requesttypes.h");
	string typesImplementationPath = buildPath(outputDirectory, "src", SRC_PREFIX, LOADER_FOLDER, "requesttypes.cpp");
	File typesHeader = File(typesHeaderPath, "w+");
	File typesImplementation = File(typesImplementationPath, "w+");
	headerFiles ~= [typesHeaderPath];
	implementationFiles ~= [typesImplementationPath];
	
	writeRequestTypesFile(typesHeader, typesImplementation, endpoints[].sort!((a, b) => a.name < b.name));
	
	writeCMakeFile(headerFiles[], implementationFiles[]);
}

/**
 * Writes a CMake file that includes the specified files.
 */
void writeCMakeFile(string[] headerFiles, string[] implementationFiles) {
	File output = File(buildPath(outputDirectory, CMAKE_INCLUDE_FILE), "w+");
	output.writeln("cmake_minimum_required(VERSION 3.0)");
	// Peek laziness: wrapping a C++ comment inside a CMake block comment because I couldn't be
	// donkey'd to do otherwise.
	output.writeln("#[[");
	output.writeln(COPYRIGHT);
	output.writeln("]]");
	
	output.writef("set(%s_HEADERS", CMAKE_VAR_PREFIX);
	foreach (headerFile; headerFiles) {
		output.writeln();
		output.writef("\t%s", headerFile);
	}
	output.writeln(")");
	output.writeln();
	
	output.writef("set(%s_SOURCES", CMAKE_VAR_PREFIX);
	foreach (implementationFile; implementationFiles) {
		output.writeln();
		output.writef("\t%s", implementationFile);
	}
	output.writeln(")");
}

/**
 * Writes the file with all the types that are just used for making requests to the API endpoint
 *
 * Params:
 *     headerFile = The file to write the header to
 *     implementationFile = The file to write the implememntation to
 *     endpoints = A list of endpoints to extract request type information from.
 */
void writeRequestTypesFile(R)(File headerFile, File implementationFile, R endpoints) if(is(ElementType!R : Endpoint)) {
	
	string[] collectImports(R range, bool function(MetaTypeInfo) predicate) {
		return endpoints
				// Create a list of all parameter types used
				.map!(e => e.parameters)
				.joiner
				.map!(e => e.type)
				// Weed out container types
				.map!((MetaTypeInfo e) {
					if (e.isContainer) {
						MetaTypeInfo c = e.containerType;
						while (c.isContainer) {
							c = c.containerType;
						}
						return c;
					} else {
						return e;
					}
				})
				// Filter out the ones we need according to the predicate
				.filter!predicate
				// Map MetaTypeInfo -> typename: string
				.map!(e => e.typeName)
				// Filter out qint32 etc
				.filter!(e => !e.startsWith("qint"))
				// Sort and filter out duplicates
				.array
				.sort
				.uniq
				.array;
	}
	
	RequestParameter[] getParameters(RequestParameter[] params, bool function(RequestParameter) pred) {
		return params
				.filter!pred
				.array
				.sort!((a, b) => a.name < b.name)
				.array
				.array;
	}
	
	string[] systemImports = collectImports(endpoints, e => e.needsSystemImport) 
		~ ["QList", "QStringList", "optional"];
	string[] userImports = collectImports(endpoints, e => e.needsLocalImport)
		.map!(e => buildPath(MODEL_FOLDER, e.applyCasePolicy(CasePolicy.PASCAL, CasePolicy.LOWER) ~ ".h"))
		.array;
	
	
	
	struct EndpointController {
		string name;
		RequestParameter[] requiredPathParameters = [];
		RequestParameter[] requiredQueryParameters = [];
		RequestParameter[] optionalQueryParameters = [];
		RequestParameter[] requiredParameters = [];
		RequestParameter[] optionalParameters = [];
		RequestParameter[] parameters = [];
	}
	
	struct Controller {
		EndpointController[] endpoints;
		string dtoNamespace = namespaceString!CPP_NAMESPACE_DTO;
	}
	
	Controller controller;
	
	foreach(endpoint; endpoints) {
		EndpointController endpointController;
		endpointController.name = endpoint.parameterType;
		endpointController.requiredPathParameters = 
				getParameters(endpoint.parameters, (e => e.required && e.location == ParameterLocation.PATH));
		endpointController.requiredQueryParameters =
				getParameters(endpoint.parameters, (e => e.required && e.location == ParameterLocation.QUERY));
		endpointController.optionalQueryParameters =
				getParameters(endpoint.parameters, (e => !e.required && e.location == ParameterLocation.QUERY));
		with (endpointController) {
			parameters = requiredPathParameters ~ requiredQueryParameters ~ optionalQueryParameters;
			
			requiredParameters = requiredPathParameters ~ requiredQueryParameters;
			optionalParameters = optionalQueryParameters;
		}
		controller.endpoints ~= [endpointController];
	}
	headerFile.writeHeaderPreamble(CPP_NAMESPACE_LOADER, "RequestTypes", systemImports, userImports);
	headerFile.writeln(render!(import("loader_types_header.hbs"), Controller)(controller));
	headerFile.writeHeaderPostamble(CPP_NAMESPACE_LOADER, "RequestTypes");
	
	implementationFile.writeImplementationPreamble(CPP_NAMESPACE_LOADER, LOADER_FOLDER, "RequestTypes");
	implementationFile.writeln(render!(import("loader_types_implementation.hbs"), Controller)(controller));
	implementationFile.writeImplementationPostamble(CPP_NAMESPACE_LOADER, "RequestTypes");
}

/**
 * Generates files for endpoins
 * Params:
 *     path = Path of the endpoint, for example "/foo/{barId}/baz";
 *     operation = HTTP method, like "get", "post", ...
 *     endpointNode = YAML node representing the endpoint.
 *     allSchemas = YAML node containing the schemas that values in the endpointNOde could reference.
 *     headerFile = File to write the header (.h) file to
 *     implementationFile = File to write the implementation (.cpp) file to.
 *     endpoints = Appender to add any requestParameters encountered to.
 */
void generateFileForEndpoint(ref const string path, ref const string operation, ref const Node endpointNode, 
		ref const Node allSchemas, ref scope File headerFile, ref scope File implementationFile, 
		ref scope Appender!(Endpoint[]) endpoints) {
	
	string name = endpointNode["operationId"].as!string;
	
	Endpoint endpoint = new Endpoint();
	endpoint.name = name;
	endpoint.parameterType = name ~ "Params";
	endpoint.description = endpointNode.getOr!string("summary", "");
	endpoint.path = path;
	
	string[] systemImports = ["optional"];
	string[] userImports = [
			buildPath(SUPPORT_FOLDER, "jsonconv.h"),
			buildPath(SUPPORT_FOLDER, "loader.h"), 
			buildPath(LOADER_FOLDER, "requesttypes.h")
	];
	
	// Find the most likely result response.
	foreach(string code, const Node response; endpointNode["responses"]) {
		int codeNo = to!int(code);
		if ([200, 201].canFind(codeNo)) {
			foreach(string contentType, const Node content; response["content"]) {
				if (contentType == "application/json") {
					endpoint.hasSuccessResponse = true;
					if ("$ref" in content["schema"]) {
						string reference = content["schema"]["$ref"].as!string.chompPrefix("#/components/schemas/");
						endpoint.resultIsReference = true;
						endpoint.resultType = reference;
						userImports ~= [buildPath(MODEL_FOLDER, reference.applyCasePolicy(CasePolicy.PASCAL, CasePolicy.LOWER) ~ ".h")];
					} else if ("schema" in content){
						endpoint.resultIsReference = false;
						string typeName = endpoint.name ~ "Response";
						MetaTypeInfo responseType = getType(typeName, content["schema"], allSchemas);
						endpoint.resultType = responseType.typeName;
						if (responseType.needsLocalImport && !responseType.isContainer) {
							userImports ~= [buildPath(MODEL_FOLDER, endpoint.resultType)];
						}
						
						MetaTypeInfo t = responseType;
						while(t.isContainer) {
							t = t.containerType;
							if (t.needsLocalImport) {
								userImports ~= [buildPath(MODEL_FOLDER, t.fileName)];
							} else if (t.needsSystemImport && !t.isContainer){
								systemImports ~= [t.typeName];
							}
						} 
					}
				}
			}
			}
	}
	
	// Build the parameter structure.
	if ("parameters" in endpointNode && endpointNode["parameters"].length > 0) {
		foreach (ref const Node yamlParameter; endpointNode["parameters"]) {
			RequestParameter param = new RequestParameter();
			param.name = yamlParameter["name"].as!string;
			param.required = yamlParameter.getOr!bool("required", false);
			param.description = yamlParameter.getOr!string("description", "");
			
			param.type = getType(param.name, yamlParameter["schema"], allSchemas);
			if (!param.type.isNullable && !param.required && !param.type.hasDefaultValue) {
				param.type.isNullable = true;
			}
			switch(yamlParameter["in"].as!string.toLower) {
			case "path":
				param.location = ParameterLocation.PATH;
				endpoint.requiredPathParameters ~= [param];
				break;
			case "query":
				param.location = ParameterLocation.QUERY;
				if (param.required) {
					endpoint.requiredQueryParameters ~= [param];
				} else {
					endpoint.optionalQueryParameters ~= [param];
				}
				break;
			default:
				assert(false);
			}
			endpoint.parameters ~= [param];
		}
	}
	
	endpoints ~= [endpoint];
	
	// Render templates
	class Controller {
		string className;
		//MetaTypeInfo[] properties;
		string supportNamespace = namespaceString!CPP_NAMESPACE_SUPPORT;
		string dtoNamespace = namespaceString!CPP_NAMESPACE_DTO;
		string responseType = "void";
		string parameterType = "void";
		Endpoint endpoint;
		
		string pathStringInterpolation() {
			string result = "QStringLiteral(\"" ~ endpoint.path ~ "\")";
			foreach(p; endpoint.parameters.filter!(p => p.location == ParameterLocation.PATH)) {
				result = result.replace("{" ~ p.name ~ "}", "\") + Support::toString< " 
					~ p.type.typeNameWithQualifiers ~">(params." ~ p.type.name 
					~ "()) + QStringLiteral(\"");
			}
			result = result.replace(`+ QStringLiteral("")`, "");
			return result;
		}
	}
	Controller controller = new Controller();
	controller.className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	controller.endpoint = endpoint;
	
	writeHeaderPreamble(headerFile, CPP_NAMESPACE_LOADER_HTTP, name, systemImports, userImports);
	headerFile.writeln(render!(import("loader_header.hbs"), Controller)(controller));
	writeHeaderPostamble(headerFile, CPP_NAMESPACE_LOADER_HTTP, name);
	
	writeImplementationPreamble(implementationFile, CPP_NAMESPACE_LOADER_HTTP, HTTP_LOADER_FOLDER, name);
	implementationFile.writeln(render!(import("loader_implementation.hbs"), Controller)(controller));
	writeImplementationPostamble(implementationFile, CPP_NAMESPACE_LOADER_HTTP, name);
}

/**
 * Generates a file containing a class generated based on the given JSON Schema.
 */
void generateFileForSchema(ref const string name, ref const Node scheme, Node allSchemas, 
		ref scope File headerFile, ref scope File implementationFile) {
	
	// Check if this JSON "thing" is an enum
	if ("enum" in scheme) {
		string[3] imports = ["QJsonValue", "QObject", "QString"];
		string[1] userImports = [buildPath(SUPPORT_FOLDER, "jsonconv.h")];
		
		Appender!(string[]) values;
		foreach (string value; scheme["enum"]) {
			values ~= value;
		}
		
		writeHeaderPreamble(headerFile, CPP_NAMESPACE_DTO, name, imports, userImports);
		writeEnumHeader(headerFile, name, values[]);
		writeHeaderPostamble(headerFile, CPP_NAMESPACE_DTO, name);
		
		writeImplementationPreamble(implementationFile, CPP_NAMESPACE_DTO, MODEL_FOLDER, name);
		writeEnumImplementation(implementationFile, name, values[]);
		writeImplementationPostamble(implementationFile, CPP_NAMESPACE_DTO, name);
	}
	
	// Check if this is an object
	if (scheme["type"].as!string == "object" && "properties" in scheme) {
		// Determine all imports
		Appender!(string[]) systemImports, userImports;
		Appender!(string[]) forwardDeclarations;
		systemImports ~= ["optional", "QJsonObject", "QJsonValue"];
		userImports ~= [buildPath(SUPPORT_FOLDER, "jsonconv.h")];
		
		MetaTypeInfo[] usedTypes = collectTypeInfo(scheme["properties"], allSchemas);
		usedTypes[$-1].isLast = true;
		bool importedContainers = false;
		void collectImports(MetaTypeInfo type) {
			if (type.needsPointer && !systemImports[].canFind("QSharedPointer")) {
				systemImports ~= ["QSharedPointer"];
			}
			
			if (type.needsSystemImport && !systemImports[].canFind(type.typeName)) {
				if (type.isContainer) {
					if (!importedContainers) {
						systemImports ~= ["QList", "QStringList"];
						importedContainers = true;
					}
					if (type.containerType !is null) {
						collectImports(type.containerType);
					}
				} else {
					systemImports ~= [type.typeName];
				}
			} else {
				string userImport = buildPath(MODEL_FOLDER, type.typeName.applyCasePolicy(OPENAPI_CASING, CasePolicy.LOWER) ~ ".h");
				if (type.needsLocalImport && !userImports[].canFind(userImport) && type.typeName != name) {
					userImports ~= userImport;
				}
			}
		}
		foreach (type; usedTypes) {
			collectImports(type);
		}
		
		// Sort them for nicer reading
		string[] sortedSystemImports = sort(systemImports[]).array;
		string[] sortedUserImports = sort(userImports[]).array;
		string[] sortedForwardDeclarations = sort(forwardDeclarations[]).array;
		
		// Write implementation files
		writeHeaderPreamble(headerFile, CPP_NAMESPACE_DTO, name, sortedSystemImports, sortedUserImports);
		writeObjectHeader(headerFile, name, usedTypes, sortedForwardDeclarations);
		writeHeaderPostamble(headerFile, CPP_NAMESPACE_DTO, name);
		
		writeImplementationPreamble(implementationFile, CPP_NAMESPACE_DTO, MODEL_FOLDER, name);
		writeObjectImplementation(implementationFile, name, usedTypes);
		writeImplementationPostamble(implementationFile, CPP_NAMESPACE_DTO, name);
	} else if (scheme["type"] == "object") {
		// Write implementation files
		writeHeaderPreamble(headerFile, CPP_NAMESPACE_DTO, name, ["QJsonObject"]);
		headerFile.writefln("using %s = QJsonObject;", name);
		writeHeaderPostamble(headerFile, CPP_NAMESPACE_DTO, name);
		
		writeImplementationPreamble(implementationFile, CPP_NAMESPACE_DTO, MODEL_FOLDER, name);
		headerFile.writeln("// No implementation needed");
		writeImplementationPostamble(implementationFile, CPP_NAMESPACE_DTO, name);
	}
}

// Object

// We need to recurse (sometimes)
/**
 * Create a MetaTypeInfo object based on a JSON schema
 *
 * In the future, this implementation should use some form of configuration file
 * which contains data about the built-in types, since hard-coding doesn't seem like a
 * good idea.
 *
 * Params:
 *     name = The name of this object
 *     node = The node containing the JSON Schema of this object
 *     allSchemas = The node containing the a map of names to JSON Schemas, which the node
 *                  parameter could refrence.
 */
MetaTypeInfo getType(ref const string name, const ref Node node, const ref Node allSchemas) {
	MetaTypeInfo info = new MetaTypeInfo();
	info.originalName = name;
	info.name = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_MEMBER_CASING);
	info.defaultValue = node.getOr!string("default", "");
	
	if ("description" in node) {
		info.description = node["description"].as!string;
	}
	
	// Special case for QML
	info.name = memberAliases.get(info.name.toLower(), info.name);
	
	// Check if this schema is a reference to another schema
	if ("$ref" in node) {
		string type = node["$ref"].as!string()["#/components/schemas/".length..$];
		info.needsLocalImport = true;
		info.typeName = type;
		if (type in allSchemas) {
			if ("type" in allSchemas[type] 
				&& allSchemas[type]["type"].as!string == "object") {
				info.needsPointer = true;
				info.isTypeNullable = true;
				info.typeNullableCheck = ".isNull()";
				info.typeNullableSetter = ".clear()";
			} else if ("enum" in allSchemas[type]) {
				info.isTypeNullable = true;
				info.typeNullableCheck = "== " ~ info.typeName ~ "::EnumNotSet";
				info.typeNullableSetter = "= " ~ info.typeName ~ "::EnumNotSet";
			}
		}
		return info;
	}
	
	// No type information specified. As a fallback, use a QVariant.
	if (!("type" in node)) {
		info.typeName = "QVariant";
		info.isTypeNullable = true;
		info.needsSystemImport = true;
		info.typeNullableCheck = ".isNull()";
		info.typeNullableSetter = ".clear()";
		return info;
	}
	
	info.isNullable = node.getOr!bool("nullable", false);
	switch(node["type"].as!string) {
	case "boolean":
		info.typeName = "bool";
		return info;
	case "string":
		if ("format" in node) {
			switch(node["format"].as!string) {
			case "date-time":
				info.typeName= "QDateTime";
				info.needsSystemImport = true;
				info.isTypeNullable = true;
				info.typeNullableCheck = ".isNull()";
				info.typeNullableSetter = "= QDateTime()";
				return info;
			/+case "uuid":
				info.typeName = "QUuid";
				info.needsSystemImport = true;
				info.isTypeNullable = true;
				info.typeNullableCheck = ".isNull()";
				info.typeNullableSetter = "= QGuid()";
				return info;+/
			default:
				break;
			}
		}
		info.isTypeNullable = true;
		info.typeName = "QString";
		info.needsSystemImport = true;
		info.typeNullableCheck = ".isNull()";
		info.typeNullableSetter = ".clear()";
		return info;
	case "integer":
		if ("format" in node) {
			info.typeName= "q" ~ node["format"].as!string;
			return info;
		}
		goto default;
	case "number":
		if ("format" in node) {
			switch(node["format"].as!string) {
			case "float":
			case "double":
				info.typeName = node["format"].as!string;
				return info;
			default:
				break;
			}
		}
		goto default;
	case "object":
		info.typeName = "QJsonObject"; // This'll do for now
		info.isTypeNullable = true;
		info.typeNullableCheck = ".isEmpty()";
		info.typeNullableSetter = "= QJsonObject()";
		return info;
	case "array":
		string containedTypeName = "arrayItem";
		MetaTypeInfo containedType = getType(containedTypeName, node["items"], allSchemas);
		containedType.needsPointer = false;
		info.needsLocalImport = containedType.needsLocalImport;
		info.needsSystemImport = true;
		info.isContainer = true;
		info.containerType = containedType;
		info.isTypeNullable = true;
		info.typeNullableCheck = ".size() == 0";
		info.typeNullableSetter = ".clear()";
		if (containedType.typeName == "QString") {
			info.typeName = "QStringList";
		} else {
			info.typeName = "QList<" ~ containedType.typeNameWithQualifiers ~ ">";
		}
		return info;
	default:
		info.typeName = "UNIMPLEMENTED";
		return info;
	}
}

/**
 * Given a list of JSON schemes, this will generate a list of MetaTypeInfo[]
 */
MetaTypeInfo[] collectTypeInfo(const ref Node properties, const ref Node allSchemas) {
	Appender!(MetaTypeInfo[]) result;
	
	foreach(ref string name, const ref Node node; properties) {
		result ~= getType(name, node, allSchemas);
	}
	return result[];
}

void writeObjectHeader(File output, string name, MetaTypeInfo[] properties, string[] userImports) {
	class Controller {
		string className;
		MetaTypeInfo[] properties;
		string[] userImports;
		string supportNamespace = namespaceString!CPP_NAMESPACE_SUPPORT;
	}
	Controller controller = new Controller();
	controller.className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	controller.properties = properties;
	controller.userImports = userImports;
	
	output.writeln(render!(import("object_header.hbs"), Controller)(controller));
	
	
}

void writeObjectImplementation(File output, string name, MetaTypeInfo[] properties) {
	class Controller {
		string className;
		MetaTypeInfo[] properties;
		string supportNamespace = namespaceString!CPP_NAMESPACE_SUPPORT;
	}
	Controller controller = new Controller();
	controller.className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	controller.properties = properties;
	output.writeln(render!(import("object_implementation.hbs"), Controller)(controller));
}

// Enum
void writeEnumHeader(File output, string name, string[] values, string doc = "") {
	class Controller {
		string className;
		string[] values;
		string supportNamespace = namespaceString!CPP_NAMESPACE_SUPPORT;
	}
	Controller controller = new Controller();
	controller.className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	controller.values = values;
	output.writeln(render!(import("enum_header.hbs"), Controller)(controller));
}

void writeEnumImplementation(File output, string name, string[] values) {
	class Controller {
		string className;
		string[] values;
		string supportNamespace = namespaceString!CPP_NAMESPACE_SUPPORT;
	}
	Controller controller = new Controller();
	controller.className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	controller.values = values;
	output.writeln(render!(import("enum_implementation.hbs"), Controller)(controller));
}

// Common
void writeHeaderPreamble(File output, immutable string[] fileNamespace, string className, string[] imports = [], string[] userImports = []) {
	output.writeln(COPYRIGHT);
	string guard = guardName(fileNamespace, className);
	output.writefln("#ifndef %s", guard);
	output.writefln("#define %s", guard);
	output.writeln();
	
	foreach(file; imports) {
		output.writefln("#include <%s>", file);
	}
	
	if (imports.length > 0) output.writeln();
	
	foreach(file; userImports) {
		output.writefln("#include \"%s\"", buildPath(INCLUDE_PREFIX, file));
	}
	if (userImports.length > 0) output.writeln();
	
	// FIXME: Should be configurable
	output.writefln("namespace Jellyfin {");
	output.writefln("// Forward declaration");
	output.writefln("class ApiClient;");
	output.writefln("}");
	
	foreach (namespace; fileNamespace) {
		output.writefln("namespace %s {", namespace);
	}
	output.writeln();
}

void writeHeaderPostamble(File output, immutable string[] fileNamespace, string className) {
	output.writeln();
	foreach_reverse(namespace; fileNamespace) {
		output.writefln("} // NS %s", namespace);
	}
	output.writeln();
	output.writefln("#endif // %s", guardName(fileNamespace, className));
}

void writeImplementationPreamble(File output, immutable string[] fileNamespace, string folder, string className, string[] imports = []) {
	output.writeln(COPYRIGHT);
	output.writefln("#include <%s>", buildPath(INCLUDE_PREFIX, folder, className.applyCasePolicy(OPENAPI_CASING, CasePolicy.LOWER) ~ ".h"));
	output.writeln();
	
	foreach(file; imports) {
		output.writefln("#include <%s>", buildPath(INCLUDE_PREFIX, file));
	}
	if (imports.length > 0) output.writeln();
	
	foreach (namespace; fileNamespace) {
		output.writefln("namespace %s {", namespace);
	}
	output.writeln();
}

void writeImplementationPostamble(File output, immutable string[] fileNamespace, string className) {
	output.writeln();
	foreach_reverse(namespace; fileNamespace) {
		output.writefln("} // NS %s", namespace);
	}
}


// Helper functions

/**
 * Transforsm the given string from the input casing system to the ouptut casing system.
 *
 * Params:
 *     source = The string to transform
 *     
 */
string applyCasePolicy(string source, CasePolicy input, CasePolicy output) {
	if (input == output)  return source;
	switch(output) {
	case CasePolicy.KEEP:
		return source;
	case CasePolicy.PASCAL:
		if (input == CasePolicy.CAMEL) {
			char[] result = source.dup;
			result[0] = cast(char) toUpper(result[0]);
			return cast(string) result;
		} else {
			throw new Exception("Not implemented");
		}
	case CasePolicy.CAMEL:
		if (input == CasePolicy.PASCAL) {
			char[] result = source.dup;
			result[0] = cast(char) toLower(result[0]);
			return cast(string) result;
		} else {
			throw new Exception("Not implemented");
		}
	case CasePolicy.LOWER:
		if (input == CasePolicy.CAMEL || input == CasePolicy.PASCAL) {
			return source.toLower();
		}
		throw new Exception("Not implemented");
	case CasePolicy.UPPER:
		if (input == CasePolicy.CAMEL || input == CasePolicy.PASCAL) {
			return source.toUpper();
		}
		throw new Exception("Not implemented");
	case CasePolicy.SCREAMING_SNAKE:
		if (input == CasePolicy.CAMEL || input == CasePolicy.PASCAL) {
			Appender!(char[]) result;
			foreach(window; source.slide!(Yes.withPartial)(2)) {
				dchar c = window.front;
				window.popFront();
				dchar n = window.front;
				if (isLower(c) && !isLower(n)) {
					result ~= toUpper(c);
					result ~= '_';
				} else {
					result ~= toUpper(c);
				} 
			}
			result ~= toUpper(source[$ - 1]);
			return cast(string) result[];
		}
		throw new Exception("Not implemented");
	default:
		throw new Exception("Not implemented");
	}
}

unittest {
	assert("fooBar".applyCasePolicy(CasePolicy.CAMEL, CasePolicy.SNAKE) == "foo_bar");
}

class MetaTypeInfo {
public:
	string originalName = "";
	string name = "";
	string typeName = "";
	/// Description of this property.
	string description = "";
	/// If this property is nullable according to the OpenAPI spec.
	bool isNullable = false;
	bool needsPointer = false;
	/// If the type needs a system import (Such as Qt types)
	bool needsSystemImport = false;
	/// If the type needs a local import (such as types elsewhere in this project).
	bool needsLocalImport = false;
	/// If the type is a container type
	bool isContainer = false;
	/// If this type has a non-ambigious null state.
	bool isTypeNullable = false;
	/// If `isContainer` is true, the type of the container.
	MetaTypeInfo containerType = null;
	
	/// For use in templating
	bool isLast = false;
	string defaultValue = "";
	
	bool hasDefaultValue() {
		return defaultValue.length > 0;
	}
	
	string writeName() {
		return name.applyCasePolicy(CPP_CLASS_MEMBER_CASING, CasePolicy.PASCAL);
	}
	
	string memberName() {
		return CPP_CLASS_MEMBER_PREFIX ~ name;
	}
	
	string typeNameWithQualifiers() {
		if (needsPointer) {
			return "QSharedPointer<" ~ typeName~ ">";
		}
		if (needsOptional) {
			return "std::optional<" ~ typeName ~ ">";
		} else {
			return typeName;
		}
	}
	
	bool needsOptional() {
		return (isNullable || hasDefaultValue) && !isTypeNullable;
	}
	
	string typeNullableCheck;
	string nullableCheck() {
		if (needsOptional) {
			return "!" ~ memberName ~ ".has_value()";
		} else if (typeNullableCheck.length > 0) {
			return memberName  ~ typeNullableCheck;
		}
		
		return "Q_ASSERT(false)";
	}
	
	string typeNullableSetter = "";
	string nullableSetter() {
		if (needsOptional) {
			return " = std::nullopt";
		}
		return typeNullableSetter;
	}
	
	string defaultInitializer() {
		if (needsPointer) return "nullptr";
		if (needsOptional) return "std::nullopt";
		return "";
	}
	
	string fileName (){
		return typeName.applyCasePolicy(CasePolicy.PASCAL, CasePolicy.LOWER) ~ ".h";
	}
}

/**
 * Represents an API endpoint.
 */
class Endpoint {
	bool resultIsReference = false;
	bool hasSuccessResponse = false;
	string name;
	
	/// The type of the 
	string resultType;
	
	/// The name of the structure containing the parameters for this endpoint.
	string parameterType = "void";
	
	/// HTTP path for this endpoint.
	string path;
	
	/// Description/documentation for this endpoint
	string description;
	
	/// HTTP method for this endpoint
	string method;
	
	/// List of all parameters for this request
	RequestParameter[] parameters = [];
	
	RequestParameter[] requiredPathParameters;
	RequestParameter[] requiredQueryParameters;
	RequestParameter[] optionalQueryParameters;
}

enum ParameterLocation {
	PATH,
	QUERY,
	COOKIE,
	HEADER
}

class RequestParameter {
	string name;
	ParameterLocation location;
	bool required;
	string description;
	MetaTypeInfo type;
}

/**
 * Generates a guard name based on a namespace and class name.
 *
 * Params:
 *     namespace =  Array of namespaces this class is in.
 *     className =  The name of this class (or enum or whatever).
 */
string guardName(immutable string[] namespace, string className) {
	return namespace.map!toUpper().join("_") ~ "_"
		~ className.applyCasePolicy(OPENAPI_CASING, CasePolicy.UPPER)
		~ "_H";
}

unittest {
	assert(guardName(["foo", "bar", "Baz"] == "FOO_BAR_BAZ_H")
}

/**
 * Converts a string array of namespaces into a C++ namespace string.
 */
string namespaceString(string[] name)() {
	string result;
	static foreach(idx, part; name) {
		static if (idx != 0) {
			result ~= "::";
		}
		result ~= part;
	}
	return result;
}

/// Ditto
string namespaceString(immutable string[] name) {
	string result;
	foreach(idx, part; name) {
		if (idx != 0) {
			result ~= "::";
		}
		result ~= part;
	}
	return result;
}

unittest {
	assert(namespaceString!["foo", "bar"] == "foo::bar");
}

/**
 * Retrieves the given key from the node, if it does not exists, returns the or parameter.
 */
T getOr(T)(const ref Node node, string key, T or) {
	if (key in node) {
		try {
			return node[key].get!T;
		} catch (Exception e) {
			return or;
		}
	} else {
		//stdout.writefln("Could not find %s", key); 
		return or;
	}
}
