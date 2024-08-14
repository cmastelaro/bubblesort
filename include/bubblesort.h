#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>

template<typename T>
void bubbleSort(std::vector<T>& arr) {
    // Check for empty vector
    if (arr.size() <= 1) {
        return;
    }

    bool swapped;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Optimization: stop if no elements were swapped
    }
}

#endif // BUBBLESORT_H