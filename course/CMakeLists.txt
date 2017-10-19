cmake_minimum_required (VERSION 2.8.8)
project(cpp_course)

# The version number.
set (app_VERSION_MAJOR 1)
set (app_VERSION_MINOR 0)

# GCC flags.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

# Include paths.
include_directories(
	include
)

# Library sources.
set(LIBRARY_SOURCES
	src/foo.cc
)

# Library creation.
add_library(foo ${LIBRARY_SOURCES})

# Application sources.
set (APP_SOURCES
	src/main.cc
)

# Application creation and linkeage to libraries.
add_executable(cpp_course ${APP_SOURCES})
target_link_libraries (cpp_course foo)

# Includes GTest.
enable_testing()
add_subdirectory(test)