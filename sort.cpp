```cpp
// sort.cpp
#include "sort.hpp"
#include <utility> // For std::swap

/**
 * @brief Sorts a vector of integers in ascending order using the Bubble Sort algorithm.
 * 
 * This function implements the Bubble Sort algorithm to sort a given vector of integers in place.  It optimizes by checking if a swap occurred in each pass; if not, the vector is already sorted.
 *
 * @param data The vector of integers to be sorted.  The vector is modified in place.
 */
void bubble_sort(std::vector<int>& data) {
    int n = data.size();
    bool swapped; // Flag to optimize: check if any swaps occurred in a pass
    for (int i = 0; i < n - 1; i++) { // Outer loop iterates through the unsorted portion
        swapped = false; 
        for (int j = 0; j < n - i - 1; j++) { // Inner loop compares adjacent elements
            if (data[j] > data[j + 1]) { // If elements are out of order
                std::swap(data[j], data[j + 1]); // Swap them
                swapped = true; // Indicate a swap occurred
            }
        }
        // If no two elements were swapped by inner loop, then break; the array is sorted
        if (swapped == false)
            break; 
    }
}
```