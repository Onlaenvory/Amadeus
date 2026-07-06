cmake_minimum_required(VERSION 3.25)

project(amadeus LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
  client/src/main.cpp
  client/src/core/utils.cpp
  client/src/core/user.cpp
  client/helper/pharser.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE
    client/src
    vendor
)
