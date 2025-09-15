```cpp
// sort.cpp
#include "sort.hpp"
#include <utility> // For std::swap

/**
 * @brief Sorts a vector of integers in ascending order using bubble sort.
 * 
 * This function implements the Bubble Sort algorithm to sort a given vector of integers in place.
 * It iterates through the vector multiple times, comparing adjacent elements and swapping them if they are in the wrong order.
 * The algorithm optimizes by breaking the outer loop if no swaps are made in an inner iteration, indicating that the vector is already sorted.
 *
 * @param data The vector of integers to be sorted.  The vector is modified in place.
 */
void bubble_sort(std::vector<int>& data) {
    int n = data.size();
    bool swapped; // Flag to track if any swaps were made in an inner iteration
    for (int i = 0; i < n - 1; i++) { 
        swapped = false; // Reset the swap flag for each pass
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) { // Compare adjacent elements
                std::swap(data[j], data[j + 1]); // Swap if they are in the wrong order
                swapped = true; // Set the swap flag
            }
        }
        // If no two elements were swapped by inner loop, then break; the array is sorted
        if (swapped == false)
            break;
    }
}
```