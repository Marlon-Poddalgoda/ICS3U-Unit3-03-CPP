// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on November 2020
// This program is a guessing game

#include <iostream>
#include <random>

int main() {
    // this function compares a user input to a random number

    std::cout << "Today we will play a guessing game." << std::endl;

    // variable declarations
    int randomNumber;
    int user_guess;

    // random number generation
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> user_guess;
    std::cout << "" << std::endl;

    // process
    if (user_guess == randomNumber) {
        // output
        std::cout << "Correct! " << randomNumber
                  << " was the right answer.";
    } else {
        // output
        std::cout << "Incorrect, try again!";
    }
}
