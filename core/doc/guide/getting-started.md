\page guide-getting-started Getting Started
\brief Installation procedure and first application using this library

This is a tutorial on how to use Jellyfin Qt library.

## Project setup

The library works as [a QML plugin](https://doc.qt.io/archives/qt-5.6/qqmlextensionplugin.html). 
Compile the library, install it in the QML plugin path and add a qmldir file like this:

```
module nl.netsoj.chris.Jellyfin
plugin JellyfinQt
```

You should then be able to import it in your QML files.


```qml
import nl.netsoj.chris.Jellyfin
```

\note
In the documentation, the URI nl.netsoj.chris.Jellyfin will be used. 
If you deviate from this, make sure to put the plugin in the correct location,
as well as using the correct import statements in QML.

## Hello Jellyfin!

The first step for interacting with the library is setting up an \ref Jellyfin::ApiClient. 
This object handles authentication. 



\warning
The way authentication works using ApiClient will change before the next major release to support multiple accounts! See \issue{4}

Lets create an instance of ApiClient that is reachable from everywhere, by putting it in the ApplicationWindow:

```qml
import nl.netsoj.chris.Jellyfin as JF
import QtQuick 2.0 as QQ

QQ.ApplicationWindow {
    readonly property JF.ApiClient apiClient: _apiClient

    JF.ApiClient {
        id: _apiClient
        appName: "The name of your client"
    }
}
```

\note
As an alternative, you could create a QML file only containing the ApiClient and [declaring it as a Singleton](https://doc.qt.io/archives/qt-5.6/qtqml-modules-qmldir.html#contents-of-a-module-definition-qmldir-file)

## Authentication
If the user already has logged in and the credentials are stored, this is quite easy: 
the \ref Jellyfin::ApiClient::authenticated "authenticated" property will change to true and the corresponding signal will fire.
You don't have to do anything else!

When the user never has logged in, the signal \ref Jellyfin::ApiClient::setupRequired "setupRequired()" will be fired.
When this happens, you should let the user enter a server URL and set it as the \ref Jellyfin::ApiClient::baseUrl "baseUrl" property.
You can get a list model of servers in the local network using the \ref Jellyfin::ServerDiscoveryModel.

After the \ref Jellyfin::ApiClient::baseUrl "baseUrl" property has been set, the slot \ref Jellyfin::ApiClient::authenticate "authenticate" should be called with an username and password.
When authentication was successful, the property \ref Jellyfin::ApiClient::authenticated "authenticated" will be changed to true. 
Otherwise, the signal \ref Jellyfin::ApiClient::authenticationError "authenticationError" will be fired.

\note
To show a list of available users, one can use the \ref Jellyfin::ViewModel::UserModel "UserModel" and \ref Jellyfin::ViewModel::PublicUsersLoader "PublicUsersLoader".
However, this requires knowledge of the Loader and Model system, which will be explained in the next chapter \ref guide-apimodel-loader

