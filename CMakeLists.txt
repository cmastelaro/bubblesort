cmake_minimum_required(VERSION 3.10)

project(bubblesort)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add the main executable
add_executable(bubblesort src/main.cpp)

# Add Google Test
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_subdirectory(lib/googletest) # Assuming you have gtest in a `lib/googletest` directory

# Add tests
add_executable(bubblesort_test tests/bubblesort_test.cpp)
target_link_libraries(bubblesort_test gtest gtest_main)