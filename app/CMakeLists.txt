# Sets the minimum version of CMake required to build your native library.
# This ensures that a certain set of CMake features is available to
# your build.

cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fno-rtti -fno-exceptions -Wall")

# Specifies a library name, specifies whether the library is STATIC or
# SHARED, and provides relative paths to the source code. You can
# define multiple libraries by adding multiple add.library() commands,
# and CMake builds them for you. When you build your app, Gradle
# automatically packages shared libraries with your APK.
add_library( # Specifies the name of the library.
             secret_lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/secret-wrapper.cpp
             src/main/cpp/secret.cpp )

# Specifies a path to native header files.
include_directories(src/main/cpp/include/)

# Include libraries needed for secret_lib lib
target_link_libraries( # Specifies the target library.
                       secret_lib

                       # Links the Android JNI library to the target library.
                       android

                       # Links the log library to the target library.
                       log)