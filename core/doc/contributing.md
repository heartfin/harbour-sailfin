\page contributing Contributing
\brief All resources for (potential) contributors

This page should contain all resources for people who'd like to contribute to the project. 
If that happens to be you, thank you for considering to contribute to this project! 
This page will describe how the process goes, what code style this project uses and more useful information.

# Development process
Development happens at [GitHub](https://github.com/heartfin/harbour-sailfin). 
Currently, both the library Jellyfin-Qt and the [Sailfish OS](https://sailfishos.org) app named Sailfin are developed in the same repository.

## Create or find an issue to work on
If you want to contribute code, please check if an issue exists. 
Otherwise, create an issue describing what feature you'd like to develop before creating a merge request.

## Start working on your code
Clone the git repo and create a new branch. 
If you have commit access to the repository, please create a branch in the form of `<issue-number>-<issue-title>`. 
For example, `36-control-remote-jellyfin-sessions`.

Now you can start writing your code and create commits. 
Please create focussed commits, that is, do not commit anything not related to the issue you are working on.
Also state what you're changing in the commit message and add an entry in the file `rpm/harbour-sailfin.changes`.

If this is your first time contributing to the project, don't be shy and feel free to add your name to the contributors list in `sailfish/qml/pages/AboutPage.qml`!

## Submit a merge request
Now that you have finalised your commit, you can create a merge request on the repository.
Make sure that you have followed the contribution guidelines on this page.
Someone will review it and if all is good, they will merge it in.

Congratulations on your contribution!

# Code style guidelines
The code should follow the [Sailfish OS Code Conventions](https://docs.sailfishos.org/Develop/Apps/Coding_Conventions/) with the following exceptions:

## Exceptions for C++
- Put curly braces on the same line as the declaration, example:
  ```cpp
  int foo() {
      // implementation
  }
  ```
  instead of
  ```cpp
  int foo()
  {
     // implementation
  }
  ```
  Rationale: I hate pressing enter and am used to the former. Moreover, it is already all over the place. Bad rationale, I know.

- Close namespace brackets with a comment in the form `// NS Jellyfin`, example:
  ```cpp
  namespace Jellyfin {
  namespace Nested {
      // Content
  } // NS Nested
  } // NS Jellyfin
  ```
  Rationale: Easy to know what namespace the bracket closes, since namespaces tend to span over large portions of a file.

- Use include guards in the form of `NAMESPACE_CLASSNAME_H`. Example:
  ```cpp
  #ifndef JELLYFIN_MODEL_USER_H
  #define JELLYFIN_MODEL_USER_H
  namespace Jellyfin {
  namespace Model {

  class User {
      // Methods etc
  };

  } // NS Model
  } // NS Jellyfin
  ```

