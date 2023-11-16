// Created by : Finn Kitor
// Created on : November 16th, 2023
// this program asks the user for the number of numbers to add together.
// It then uses a while loop to repeatedly ask the user for a number to add.
// it will not accept invalid inputs.
#include <iostream>
#include <sstream>
#include <string>

void addNumbers() {
    int numCount;
    int currentSum = 0;
    std::string input;

    // Prompt the user for the number of numbers to add together
    std::cout << "Enter the number of numbers to add: ";
    std::getline(std::cin, input);

    // Convert the input to an integer
    std::istringstream iss(input);
    if (!(iss >> numCount)) {
        std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
        return;
    }

    // Use a WHILE loop to repeatedly ask the user for a number to add
    int count = 0;
    while (count < numCount) {
        std::cout << "Enter number " << (count + 1) << ": ";
        std::getline(std::cin, input);

        // Convert the input to an integer
        std::istringstream iss(input);
        int number;
        if (!(iss >> number)) {
            std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
            continue;
        }

        // Check if the number is a whole number
        if (number % 1 == 0) {
            // Add the number to the current sum
            currentSum += number;
            count++;
        }
    }

    // Display the numbers added and the final sum
    std::cout << "Numbers added: " << numCount << std::endl;
    std::cout << "Final sum: " << currentSum << std::endl;
}

int main() {
    addNumbers();
    return 0;
}