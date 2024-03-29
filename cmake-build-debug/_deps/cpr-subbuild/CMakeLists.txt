# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.24.2)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(cpr-populate NONE)


# Pass through things we've already detected in the main project to avoid
# paying the cost of redetecting them again in ExternalProject_Add()
set(GIT_EXECUTABLE [==[C:/Program Files/Git/cmd/git.exe]==])
set(GIT_VERSION_STRING [==[2.31.1.windows.1]==])
set_property(GLOBAL PROPERTY _CMAKE_FindGit_GIT_EXECUTABLE_VERSION
  [==[C:/Program Files/Git/cmd/git.exe;2.31.1.windows.1]==]
)


include(ExternalProject)
ExternalProject_Add(cpr-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "https://github.com/libcpr/cpr.git" "GIT_TAG" "871ed52d350214a034f6ef8a3b8f51c5ce1bd400"
                    SOURCE_DIR          "F:/__C++/Skillbox/30 Connecting the CPR Library/30.4.2 Capturing the Title of a Web Page/cmake-build-debug/_deps/cpr-src"
                    BINARY_DIR          "F:/__C++/Skillbox/30 Connecting the CPR Library/30.4.2 Capturing the Title of a Web Page/cmake-build-debug/_deps/cpr-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)


