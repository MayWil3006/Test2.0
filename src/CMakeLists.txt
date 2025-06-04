# Create a library target named 'developers' from the specified source files
add_library(developers
    developer.cpp
    junior_developer.cpp
    senior_developer.cpp
)

# Set the include directories for the 'developers' library target
target_include_directories(developers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Create an executable target named 'main' from the specified source file
add_executable(main main.cpp)

# Link the 'developers' library to the 'main' executable target
target_link_libraries(main developers)