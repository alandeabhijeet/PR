```cpp
// main.cpp
#include <iostream>
#include "input.hpp"
#include "sort.hpp"

/**
 * @brief The main function of the program. This program demonstrates a simple sorting algorithm.
 * 
 * The program first obtains a vector of integers from the user using the `get_numbers()` function.
 * Then, it sorts the vector using the `bubble_sort()` function. Finally, it prints the sorted vector to the console.
 * @return 0 if the program executes successfully.
 */
int main() {
    // Get a vector of numbers from the user.
    std::vector<int> my_numbers = get_numbers();

    // Sort the numbers using bubble sort.
    bubble_sort(my_numbers);

    // Print the sorted numbers.
    std::cout << "Sorted numbers: ";
    for (int num : my_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```