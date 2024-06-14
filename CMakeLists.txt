cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME mlfsr)
project(${PROJECT_NAME} LANGUAGES C)

option(BUILD_SHARED "BUILD_SHARED" ON)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-pointer-to-int-cast")

if(BUILD_SHARED)
  add_library(${PROJECT_NAME} SHARED "src/mlfsr.c")
else()
  add_library(${PROJECT_NAME} STATIC "src/mlfsr.c")
endif()

target_include_directories(${PROJECT_NAME} PRIVATE "include/")
