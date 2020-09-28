##cmake_minimum_required(VERSION 3.18.2)
#
##set(SOURCES ThreadPool.cpp)
#set(SOURCES
#        mainwindow.ui mainwindow.cpp mainwindow.h)
#
##include_directories(../../3dparty/curlpp-0.8.1/include/)
##include_directories(../../3dparty/nano/include/)
##include_directories(${EIGEN3_INCLUDE_DIR})
##include_directories(${GLFW3_INCLUDE_DIRS})
##include_directories(../3dparty/nano/ext/nanovg/src)
#
#add_library(src ${SOURCES})
#target_link_libraries(src PRIVATE Qt${QT_VERSION_MAJOR}::Core
#        Qt${QT_VERSION_MAJOR}::Widgets
#        Qt${QT_VERSION_MAJOR}::Gui
#        libtag.a
#        )
#
#find_package(Qt5 REQUIRED COMPONENTS Widgets)
#
## Tell CMake to create the helloworld executable
#add_executable(helloworld main.cpp mainwindow.cpp mainwindow.ui resources.qrc)
#
## Add the Qt5 Widgets for linking
#target_link_libraries(helloworld Qt5::Widgets)

set(SOURCES
        mainwindow.ui mainwindow.cpp mainwindow.h
        dialog.ui dialog.cpp dialog.h
        )

#link_directories(../../taglib/build/lib)


add_library(src ${SOURCES})
target_link_libraries(src PRIVATE Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Widgets
        Qt${QT_VERSION_MAJOR}::Gui
        tag
        )
