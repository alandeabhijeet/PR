


// main.cpp
#include <iostream>
#include "input.hpp"
#include "sort.hpp"

// The main entry point of the program.
int main() {
    std::vector<int> my_numbers = get_numbers();

    bubble_sort(my_numbers);

    std::cout << "Sorted numbers: ";
    for (int num : my_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}