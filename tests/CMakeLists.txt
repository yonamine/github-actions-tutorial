
enable_testing()

find_package(GTest REQUIRED)

add_executable(gmain_tests "gmain_tests.cpp" "hello_test.cpp")

target_link_libraries(gmain_tests GTest::gtest GTest::gmock)

include(GoogleTest)

gtest_discover_tests(gmain_tests)

add_test(AllTestsInGMainTests gmain_tests)
