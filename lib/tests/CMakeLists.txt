project(soap_tests VERSION 1.0.0 LANGUAGES CXX)

add_executable(
  main_tests

    main_tests.cc
    type_traits.test.cc
)

target_link_libraries(
  main_tests

    PUBLIC
      deps::catch2
      soap
)



add_test(NAME tests::main COMMAND main_tests)
