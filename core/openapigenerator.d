#!/usr/bin/env dub
/+ dub.sdl:
	name "openapigenerator.d"
	dependency "dyaml" version="~>0.8.0"
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
import std.file : mkdirRecurse;
import std.exception;
import std.path : buildPath, dirSeparator;
import std.range;
import std.string;
import std.stdio;
import std.uni;

import dyaml;

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

string INCLUDE_PREFIX = "JellyfinQt/DTO";
string SRC_PREFIX = "DTO";

string[string] compatAliases;

static this() {
	compatAliases["BaseItemDto"] = "Item";
	compatAliases["UserDto"] = "User";
	compatAliases["UserItemDataDto"] = "UserData";
}

CasePolicy OPENAPI_CASING = CasePolicy.PASCAL;
string[] CPP_NAMESPACE = ["Jellyfin", "DTO"];
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
	mkdirRecurse(buildPath(outputDirectory, "include", INCLUDE_PREFIX));
	mkdirRecurse(buildPath(outputDirectory, "src", SRC_PREFIX));
	
	Node root = Loader.fromFile(schemeFile).load();
	Appender!(string[]) headerFiles, implementationFiles;
	foreach(string key, ref const Node scheme; root["components"]["schemas"]) {
		generateFileForSchema(key, scheme, root["components"]["schemas"]);
		
		string fileBase = key.applyCasePolicy(OPENAPI_CASING, CPP_FILENAME_CASING);
		headerFiles ~= [buildPath(outputDirectory, "include", INCLUDE_PREFIX, fileBase ~ ".h")];
		implementationFiles ~= [buildPath(outputDirectory, "src", SRC_PREFIX, fileBase ~ ".cpp")];
	}
	foreach(string original, string compatAlias; compatAliases) {
		writeCompatAliasFile(original, compatAlias);
	}
	writeCMakeFile(headerFiles[], implementationFiles[]);
}

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

void writeCompatAliasFile(ref const string original, ref const string compatAlias) {
	string fileBase = compatAlias.applyCasePolicy(OPENAPI_CASING, CPP_FILENAME_CASING);
	File headerFile = File(buildPath(outputDirectory, "include", INCLUDE_PREFIX, fileBase ~ ".h"), "w+");
	File implementationFile = File(buildPath(outputDirectory, "src", SRC_PREFIX, fileBase ~ ".cpp"), "w+");
	
	writeHeaderPreamble(headerFile, compatAlias, [], [original]);
	headerFile.writefln("using %s = %s;", compatAlias, original);
	writeHeaderPostamble(headerFile, compatAlias);
}

void generateFileForSchema(ref string name, ref const Node scheme, Node allSchemas) {
	string fileBase = name.applyCasePolicy(OPENAPI_CASING, CPP_FILENAME_CASING);
	File headerFile = File(buildPath(outputDirectory, "include", INCLUDE_PREFIX, fileBase ~ ".h"), "w+");
	File implementationFile = File(buildPath(outputDirectory, "src", SRC_PREFIX, fileBase ~ ".cpp"), "w+");
	
	if ("enum" in scheme) {
		string[1] imports = ["QObject"];
		writeHeaderPreamble(headerFile, name, imports);
		
		Appender!(string[]) values;
		foreach (string value; scheme["enum"]) {
			values ~= value;
		}
		writeEnumHeader(headerFile, name, values[]);
		writeHeaderPostamble(headerFile, name);
		
		writeImplementationPreamble(implementationFile, name);
		writeEnumImplementation(implementationFile, name);
		writeImplementationPostamble(implementationFile, name);
	}
	if (scheme["type"].as!string == "object" && "properties" in scheme) {
		// Determine all imports
		Appender!(string[]) systemImports, userImports;
		Appender!(string[]) forwardDeclarations;
		systemImports ~= ["QObject", "QJsonObject"];
		
		MetaTypeInfo[] usedTypes = collectTypeInfo(scheme["properties"], allSchemas);
		bool importedContainers = false;
		void collectImports(MetaTypeInfo type) {
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
			} else if (type.needsLocalImport && !userImports[].canFind(type.typeName)) {
				if (type.needsPointer) {
					forwardDeclarations ~= type.typeName;
				} else {
					userImports ~= type.typeName;
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
		writeHeaderPreamble(headerFile, name, sortedSystemImports, sortedUserImports);
		writeObjectHeader(headerFile, name, usedTypes, sortedForwardDeclarations);
		writeHeaderPostamble(headerFile, name);
		
		writeImplementationPreamble(implementationFile, name, sortedUserImports);
		writeObjectImplementation(implementationFile, name, usedTypes);
		writeImplementationPostamble(implementationFile, name);
	}
}

// Object
MetaTypeInfo[] collectTypeInfo(Node properties, Node allSchemas) {

	// We need to recurse (sometimes)
	MetaTypeInfo getType(string name, Node node) {
		MetaTypeInfo info = new MetaTypeInfo();
		info.name = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_MEMBER_CASING);
		if ("description" in node) {
			info.description = node["description"].as!string;
		}
		
		// Special case for QML
		if (info.name.toLower() == "id") info.name = "jellyfinId";
		
		if ("$ref" in node) {
			string type = node["$ref"].as!string()["#/components/schemas/".length..$];
			if (type in allSchemas&& "type" in allSchemas[type] 
					&& allSchemas[type]["type"].as!string == "object") {
				info.needsPointer = true;
			} 
			info.needsLocalImport = true;
			info.typeName = type; 
			return info;
		}
		if (!("type" in node)) {
			info.typeName = "QVariant";
			info.needsSystemImport = true;
			return info;
		}
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
					return info;
				default:
					break;
				}
			}
			info.typeName= "QString";
			info.needsSystemImport = true;
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
			return info;
		case "array":
			MetaTypeInfo containedType = getType("arrayItem", node["items"]);
			info.needsLocalImport = containedType.needsLocalImport;
			info.needsSystemImport = true;
			info.isContainer = true;
			info.containerType = containedType;
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
	
	Appender!(MetaTypeInfo[]) result;
	
	foreach(const ref string name, const ref Node node; properties) {
		result ~= getType(name, node);
	}
	return result[];
}

void writeObjectHeader(File output, string name, MetaTypeInfo[] properties, string[] userImports) {
	string className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	foreach (userClass; userImports) {
		if (userClass != className) output.writefln("class %s;", userClass);
	}
	if (userImports.length > 0) output.writeln();
	output.writefln("class %s : public QObject {", className);
	output.writefln("\tQ_OBJECT");
	output.writefln("public:");
	output.writefln("\texplicit %s(QObject *parent = nullptr);", className);
	output.writefln("\tstatic %s *fromJSON(QJsonObject source, QObject *parent = nullptr);", className);
	output.writefln("\tvoid updateFromJSON(QJsonObject source);");
	output.writefln("\tQJsonObject toJSON();");
	output.writeln();
	
	// Generate Q_PROPERTIES
	foreach (property; properties) {
		// Avoid clashes with QML
		if (property.description.length > 0) {
			output.writefln("\t/**");
			output.writefln("\t * @brief %s", property.description);
			output.writefln("\t */");
		}
		output.writefln("\tQ_PROPERTY(%s %s READ %s WRITE set%s NOTIFY %sChanged)", 
			property.typeNameWithQualifiers, property.name, property.name, property.writeName, property.name);
	}
	
	output.writeln();
	// Write getters
	foreach (property; properties) {
		// Avoid clashes with QML
		output.writefln("\t%s %s() const;", 
			property.typeNameWithQualifiers, property.name);
		output.writefln("\tvoid set%s(%s new%s);",
			property.writeName, property.typeNameWithQualifiers, property.writeName);
		output.writefln("\t");
	}
	
	// Signals
	output.writefln("signals:");
	foreach (property; properties) {
		output.writefln("\tvoid %sChanged(%s new%s);",
			property.name, property.typeNameWithQualifiers, property.writeName);
	}
	output.writefln("protected:");
	
	// Write member variables
	foreach (property; properties) {
		if (property.defaultInitializer.length > 0) {
			output.writefln("\t%s %s = %s;",
				property.typeNameWithQualifiers, property.memberName, property.defaultInitializer);
		} else {
			output.writefln("\t%s %s;",
				property.typeNameWithQualifiers, property.memberName);
		}
	}
	
	output.writefln("};");
}

void writeObjectImplementation(File output, string name, MetaTypeInfo[] properties) {
	string className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	
	output.writefln("%s::%s(QObject *parent) : QObject(parent) {}", className, className);
	output.writeln();
	
	output.writefln("%s *%s::fromJSON(QJsonObject source, QObject *parent) {", className, className);
	output.writefln("\t%s *instance = new %s(parent);", className, className);
	output.writefln("\tinstance->updateFromJSON(source);", className);
	output.writefln("\treturn instance;");
	output.writefln("}");
	output.writeln();
	
	output.writefln("void %s::updateFromJSON(QJsonObject source) {", className, className);
	output.writefln("\tQ_UNIMPLEMENTED();");
	output.writefln("}");
	
	output.writefln("QJsonObject %s::toJSON() {", className);
	output.writefln("\tQ_UNIMPLEMENTED();");
	output.writefln("\tQJsonObject result;");
	output.writefln("\treturn result;");
	output.writefln("}");
	
	foreach(property; properties) {
		output.writefln("%s %s::%s() const { return %s; }", property.typeNameWithQualifiers, 
			className, property.name, property.memberName);
			
		output.writefln("void %s::set%s(%s new%s) {", className, property.writeName, 
			property.typeNameWithQualifiers, property.writeName);
		output.writefln("\t%s = new%s;", property.memberName, property.writeName);
		output.writefln("\temit %sChanged(new%s);", property.name, property.writeName);
		output.writefln("}");
		output.writeln();
	}
}

// Enum
void writeEnumHeader(File output, string name, string[] values, string doc = "") {
	string className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	output.writefln("class %sClass {", className);
	output.writefln("\tQ_GADGET");
	output.writefln("public:");
	output.writefln("\tenum Value {");
	foreach (value; values) {
		output.writefln("\t\t%s,", value);
	}
	output.writefln("\t};");
	output.writefln("\tQ_ENUM(Value)");
	output.writefln("private:");
	output.writefln("\texplicit %sClass();", className);
	output.writefln("};");
	output.writefln("typedef %sClass::Value %s;", className, className);
}

void writeEnumImplementation(File output, string name) {
	string className = name.applyCasePolicy(OPENAPI_CASING, CPP_CLASS_CASING);
	string importName = name.applyCasePolicy(OPENAPI_CASING, CPP_FILENAME_CASING);
	output.writefln("%sClass::%sClass() {}", name, name);
}

// Common
void writeHeaderPreamble(File output, string className, string[] imports = [], string[] userImports = []) {
	output.writeln(COPYRIGHT);
	string guard = guardName(CPP_NAMESPACE, className);
	output.writefln("#ifndef %s", guard);
	output.writefln("#define %s", guard);
	output.writeln();
	
	foreach(file; imports) {
		output.writefln("#include <%s>", file);
	}
	
	if (imports.length > 0) output.writeln();
	
	foreach(file; userImports) {
		output.writefln("#include \"%s\"", buildPath(INCLUDE_PREFIX, file.applyCasePolicy(OPENAPI_CASING, CasePolicy.LOWER) ~ ".h"));
	}
	if (userImports.length > 0) output.writeln();
	
	foreach (namespace; CPP_NAMESPACE) {
		output.writefln("namespace %s {", namespace);
	}
	output.writeln();
}

void writeHeaderPostamble(File output, string className) {
	output.writeln();
	foreach(namespace; CPP_NAMESPACE) {
		output.writefln("} // NS %s", namespace);
	}
	output.writeln();
	output.writefln("#endif // %s", guardName(CPP_NAMESPACE, className));
}

void writeImplementationPreamble(File output, string className, string[] imports = []) {
	output.writeln(COPYRIGHT);
	output.writefln("#include <%s>", buildPath(INCLUDE_PREFIX, className.applyCasePolicy(OPENAPI_CASING, CasePolicy.LOWER) ~ ".h"));
	output.writeln();
	
	foreach(file; imports) {
		output.writefln("#include <%s>", buildPath(INCLUDE_PREFIX, file.applyCasePolicy(OPENAPI_CASING, CasePolicy.LOWER) ~ ".h"));
	}
	if (imports.length > 0) output.writeln();
	
	foreach (namespace; CPP_NAMESPACE) {
		output.writefln("namespace %s {", namespace);
	}
	output.writeln();
}

void writeImplementationPostamble(File output, string className) {
	output.writeln();
	foreach(namespace; CPP_NAMESPACE) {
		output.writefln("} // NS %s", namespace);
	}
}


// Helper functions
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
			char[] mutableSource = source.dup;
			Appender!(char[]) result;
			foreach(window; source.slide!(Yes.withPartial)(2)) {
				dchar c = window.front;
				window.popFront();
				dchar n = window.front;
				if (isLower(c) && !isLower(n)) {
					result ~= toUpper(c);
					result ~= '_';
				} else if (!isLower(c) && !isLower(n)) {
					result ~= toUpper(c);
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

class MetaTypeInfo {
public:
	string name = "";
	string typeName = "";
	string description = "";
	bool needsPointer = false;
	bool needsSystemImport = false;
	bool needsLocalImport = false;
	bool isContainer = false;
	MetaTypeInfo containerType = null;
	
	string writeName() {
		return name.applyCasePolicy(CPP_CLASS_MEMBER_CASING, CasePolicy.PASCAL);
	}
	
	string memberName() {
		return CPP_CLASS_MEMBER_PREFIX ~ name;
	}
	
	string typeNameWithQualifiers() {
		if (needsPointer) {
			return typeName~ " *";
		} else {
			return typeName;
		}
	}
	
	string defaultInitializer() {
		if (needsPointer) return "nullptr";
		return "";
	}
}

string guardName(string[] namespace, string className) {
	return namespace.map!toUpper().join("_") ~ "_"
		~ className.applyCasePolicy(OPENAPI_CASING, CasePolicy.UPPER)
		~ "_H";
}
