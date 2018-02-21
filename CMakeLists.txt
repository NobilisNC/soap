cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(soap VERSION 0.1.0 LANGUAGES CXX)

option(BUILD_TESTS "Build Tests" ON)

add_subdirectory(lib)

if( BUILD_TESTS )
  include(deps/Catch2.cmake)
  enable_testing()
endif()
