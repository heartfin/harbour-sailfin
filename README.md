# Sailfin
[!["Chat via Matrix"](https://img.shields.io/matrix/sailfin:netsoj.nl?label=Chat%20via%20Matrix&logo=matrix&server_fqdn=meetriks.netsoj.nl&style=for-the-badge)](https://matrix.to/#/#sailfin:netsoj.nl)  
Sailfin is a [Sailfish OS](https://sailfishos.org) client for [Jellyfin](https://jellyfin.org), a media server, written in C++ and qml.

## Download
This application can be found on [OpenRepos.net](https://openrepos.net/content/ahappyhuman/sailfin)

## Screenshots (running on Sailfish OS)
<img alt="Screenshot showing the library root" src="graphics/screenshot-sailfish-1.png" width="33%" /> <img alt="Screenshot showing TV show page" src="graphics/screenshot-sailfish-2.png" width="33%" />

## Contributing
Please [see this page for how the Jellyfin Qt library works](https://heartfin.github.io/harbour-sailfin/guides.html).
and [see this page for contribution guidelines](https://heartfin.github.io/harbour-sailfin/contributing.html).

## Code layout
```
├── 3rdparty               3rd-party libraries
├── cmake                  Additional CMake modules
│
├── core                   The core Qt library named Jellyfin-Qt
│   ├── codegen            Template files for code generation based on the OpenAPI spec
│   ├── dbus               DBus interface description files
│   ├── doc                Extra documentation files for the generated documentation
│   ├── include            Publically includable files
│   ├── qrc                Resources for the library
│   └── src                C++ source code
│
├── graphics               Source graphics files, meant to be edited
│   └── qtquick-theme      Custom graphics for the QtQuick theme 
│
├── qtquick                QtQuick application for testing, based on the core library
│   ├── assets             Custom assets
│   ├── qml                QML UI files
│   ├── SailfinStyle       QtQuick theme files
│   └── src                C++ code
│
├── rpm                    Files for packaging the application
│
└── sailfish               The Sailfish OS app based on the core library
    ├── icons              Launcher icons
    ├── qml                QML UI files
    │   ├── components     Reusable QML components
    │   ├── cover          Cover pages
    │   ├── licenses       Licence texts for libraries
    │   └── pages          Application pages
    ├── src                C++ source code
    └── translations       UI translation files
```

## License
This application is licensed under the LGPLv2.1 license, although you may opt to choose a newer version of the LGPL if you want so.
