cmake_minimum_required(VERSION 3.25)

project(amadeus LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
  src/main.cpp
  src/core/app.cpp
  src/core/user.cpp
  src/utils/parser.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE
  src
  vendor
)

target_precompile_headers(${PROJECT_NAME} PRIVATE
  <vector>
  <string>
  <chrono>
  <cstdint>
  <fstream>
  <iostream>
  <string_view>
)
