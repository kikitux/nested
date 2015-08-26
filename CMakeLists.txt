cmake_minimum_required(VERSION 3.2)
project(nested)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/build")
set(SOURCE_FILES main.cpp)

set(MY_URL "https://raw.githubusercontent.com/philsquared/Catch/master/single_include/catch.hpp")
set(MY_DOWNLOAD_PATH "${CMAKE_CURRENT_SOURCE_DIR}/test/catch.hpp")

if (NOT EXISTS "${MY_DOWNLOAD_PATH}")
    message(FATAL_ERROR "DOWNLOAD catch.hpp from " ${MY_URL})
endif()

add_executable(nested ${SOURCE_FILES} nodejs/main.hpp)
add_executable(nestedt test/main.cpp test/catch.hpp nodejs/main.hpp)
