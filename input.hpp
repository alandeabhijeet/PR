// input.hpp
#ifndef INPUT_HPP
#define INPUT_HPP

#include <vector>

/**
 * @file input.hpp
 * @brief This file contains functions for handling user input.  Specifically, it provides a function to retrieve a list of integers from the user.
 */

/**
 * Gets a list of numbers from the user.  Handles potential errors in user input.
 *
 * @return A std::vector<int> containing the numbers entered by the user. Returns an empty vector if no valid numbers are entered.
 * @throws std::runtime_error If there's a critical error during input processing (e.g., memory allocation failure).
 */
std::vector<int> get_numbers();

#endif // INPUT_HPP