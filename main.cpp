```cpp
// main.cpp
#include <iostream>
#include "input.hpp"
#include "sort.hpp"

/**
 * @brief This program demonstrates a simple sorting algorithm.
 * 
 * It takes numerical input from the user, sorts it using bubble sort, and then prints the sorted numbers.
 */
int main() {
    // Get numbers from user input.
    std::vector<int> my_numbers = get_numbers();

    // Sort the numbers using bubble sort.
    bubble_sort(my_numbers);

    // Print the sorted numbers to the console.
    std::cout << "Sorted numbers: ";
    for (int num : my_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```