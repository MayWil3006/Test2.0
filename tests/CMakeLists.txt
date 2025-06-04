# Enable testing for the project
enable_testing()

# Find the GTest package, which is required for testing
find_package(GTest REQUIRED)

# Include the GoogleTest module to provide helper functions
include(GoogleTest)

# Create an executable target named 'test_developer' from the specified source file
add_executable(test_developer test_developer.cpp)

# Link the 'developers' library and GTest libraries to the 'test_developer' executable target
target_link_libraries(test_developer developers GTest::GTest GTest::Main)

# Automatically discover and register tests in the 'test_developer' executable
gtest_discover_tests(test_developer)