cmake_minimum_required(VERSION 3.5 FATAL_ERROR)


add_library(
  soap

    src/blank.cc
)

target_include_directories(
  soap

  PUBLIC
    include
)

target_compile_features(
  soap

  PUBLIC
    cxx_std_17
)

if( BUILD_TESTS )
  add_subdirectory(tests)
endif()
