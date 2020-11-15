include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

add_executable(Tests
  test_sqrt.cc
  test_log.cc
  test_log2.cc
  test_ln.cc
)
target_include_directories(Tests PUBLIC 
  ${CMAKE_SOURCE_DIR}/include
)
target_link_libraries(Tests gmock gmock_main CalcOps)

gtest_discover_tests(Tests)

