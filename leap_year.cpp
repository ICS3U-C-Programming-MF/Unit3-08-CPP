// copyright Maximiliano Fairman
// Created on June 12th, 2024
// all rights reserved
// this program asks user to enter a year
// and then states whether or not it is a leap year

#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string year_input;
    std::cout << "Enter a year: ";
    std::getline(std::cin, year_input);

    std::istringstream iss(year_input);
    int year;
    if (!(iss >> year)) {
        std::cout << "Invalid entry. Please enter a valid year." << std::endl;
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}