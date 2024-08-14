# Bubble Sort

## Project Overview

This project implements the Bubble Sort algorithm in C++ using templates, allowing sorting of various data types. It includes a set of unit tests using Google Test to ensure the correctness of the implementation.

## Bubble Sort Algorithm

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

- Best For: Small datasets, educational purposes.
- Time Complexity: Average and Worst O(n²)
- Description: Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

### Time Complexity

- **Worst Case**: O(n^2)
  - Occurs when the list is sorted in reverse order, requiring the maximum number of swaps and comparisons.

- **Average Case**: O(n^2)
  - For a random list, Bubble Sort typically performs in O(n^2) time due to its nested loops.

- **Best Case**: O(n)
  - If the list is already sorted, only a single pass is needed, assuming an optimization to break early if no swaps occur.

### Space Complexity

- **Space Complexity**: O(1)
  - Bubble Sort sorts the list in place and requires only a constant amount of additional space.

## Project Structure

- `include/`: Contains the header files.
- `src/`: Contains the source files, including the implementation of Bubble Sort and the main application.
- `tests/`: Contains unit tests for the Bubble Sort implementation using Google Test.
- `CMakeLists.txt`: CMake build configuration file.

## Getting Started

### Prerequisites

- CMake (3.10 or higher)
- Google Test library (gtest)
- A C++ compiler (e.g

., g++, clang++)

### Setting Up Google Test

1. **Download Google Test**: Clone the Google Test repository into the `lib/googletest` directory.
   
   ```sh
   mkdir -p lib
   cd lib
   git clone https://github.com/google/googletest.git
   ```

2. **Google Test Directory Structure**: Ensure that the `lib/googletest` directory contains the Google Test source code.

### Building the Project

1. **Navigate to the Project Directory**:

   ```sh
   cd bubblesort
   ```

2. **Create and Navigate to the Build Directory**:

   ```sh
   mkdir build
   cd build
   ```

3. **Run CMake to Configure the Project**:

   ```sh
   cmake ..
   ```

4. **Build the Project**:

   ```sh
   make
   ```

5. **Run the Tests**:

   ```sh
   ./bubblesort_test
   ```

   This will execute the unit tests for the Bubble Sort implementation.

## Running the Application

The main executable `bubblesort` is built alongside the tests. To run the application, use the following command after building:

```sh
./bubblesort
```

This will run the Bubble Sort algorithm on predefined datasets and display the results.

## Contributing

Feel free to contribute to this project by submitting pull requests or reporting issues. For any questions or suggestions, please contact the project maintainer.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Acknowledgements

- Google Test for the testing framework.
- CMake for build configuration.
```

This setup will give you a complete project for implementing and testing Bubble Sort using C++17 and Google Test.