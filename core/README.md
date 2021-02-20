# Jellyfin-Qt
This folder contains the core library containing most of the non-interface UI logic and platform-independent parts.

## Code generation.
Parts of the code (notably the data models) are generated from the OpenApi description provided by the 
Jellyfin server.  The code generator uses [the D programming language](https://dlang.org/) 
and expects to be run through [DMD](https://github.com/dlang/dub). Make sure both a D compiler and DMD are installed.
Afterwards, on Unix-like systems, marking the "script" as executable and running it should be enough. On Windows,
one probably needs to run `dub.exe openapigenerator.d`, but I haven't verified it myself.
