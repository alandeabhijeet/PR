// input.hpp
#ifndef INPUT_HPP
#define INPUT_HPP

#include <vector>

/**
 * @file input.hpp
 * @brief This file contains the function to get a list of numbers from the user.
 */

/**
 * Gets a list of numbers from the user as input.  The function continues to prompt the user until a non-numeric input is detected.
 *
 * @return A standard vector containing the numbers entered by the user. Returns an empty vector if no valid numbers are entered.
 */
std::vector<int> get_numbers();

#endif // INPUT_HPP