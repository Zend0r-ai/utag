set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(./src/)
include_directories(../cmake-build-debug/app/src/src_autogen/include)
include_directories(../taglib/build/include)


include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/../taglib/taglib
        ${CMAKE_CURRENT_SOURCE_DIR}/../taglib/taglib/toolkit
        ${CMAKE_CURRENT_SOURCE_DIR}/../taglib/taglib/ape
        ${CMAKE_CURRENT_SOURCE_DIR}/../taglib/taglib/mpeg
        ${CMAKE_CURRENT_SOURCE_DIR}/../taglib/taglib/mpeg/id3v1
        ${CMAKE_CURRENT_SOURCE_DIR}/../taglib/taglib/mpeg/id3v2
        ${CMAKE_CURRENT_SOURCE_DIR}/../taglib/taglib/mpeg/id3v2/frames
        ${CMAKE_CURRENT_SOURCE_DIR}/../bindings/c/
        ${CMAKE_CURRENT_SOURCE_DIR}/../build/taglib/
)

if(NOT BUILD_SHARED_LIBS)
    add_definitions(-DTAGLIB_STATIC)
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

#if(WIN32)
    set(CMAKE_WIN32_EXECUTABLE ON)
#endif()

find_package(QT NAMES Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Core Gui REQUIRED)

add_subdirectory(src)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
        Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Widgets
        Qt${QT_VERSION_MAJOR}::Gui
        src tag)