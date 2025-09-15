```cpp
// sort.cpp
#include "sort.hpp"
#include <utility> // For std::swap

/**
 * @brief Sorts a vector of integers in ascending order using the Bubble Sort algorithm.
 * 
 * This function implements the Bubble Sort algorithm to sort a given vector of integers in place.
 * It optimizes the algorithm by checking if any swaps were made in a pass. If no swaps occur,
 * it means the vector is already sorted, and the algorithm terminates early.
 *
 * @param data The vector of integers to be sorted.  The vector is modified in place.
 * @return void
 */
void bubble_sort(std::vector<int>& data) {
    int n = data.size();
    bool swapped; // Flag to optimize: check if any swaps were made in a pass
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break. The array is sorted.
        if (swapped == false)
            break;
    }
}
```