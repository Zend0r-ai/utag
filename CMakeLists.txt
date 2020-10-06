cmake_minimum_required(VERSION 3.17.3)

set(CMAKE_CXX_STANDARD 17)

project(utag LANGUAGES CXX)
set(CMAKE_CXX_EXTENSIONS OFF)

#include_directories(
#        taglib/taglib
#        taglib/taglib/toolkit
#        taglib/taglib/ape
#        taglib/taglib/mpeg
#        taglib/taglib/mpeg/id3v1
#        taglib/taglib/mpeg/id3v2
#        taglib/taglib/mpeg/id3v2/frames
#        taglib/taglib/bindings/c/
#        taglib/cmake-build-debug/
#)
#
#if(NOT BUILD_SHARED_LIBS)
#    add_definitions(-DTAGLIB_STATIC)
#endif()

add_subdirectory(3dparty)
add_subdirectory(app)
