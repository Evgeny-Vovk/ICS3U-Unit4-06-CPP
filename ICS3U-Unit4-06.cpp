// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit4-06.cpp File, learning nested while statements in C++.

#include <iostream>


int main() {
    // creating variables
    int greenCounter;
    int blueCounter;
    int redCounter = -1;

    // process and output
    std::cout << "\n";
    while (redCounter < 255) {
        redCounter++;
        greenCounter = -1;
        while (greenCounter < 255) {
            greenCounter++;
            blueCounter = -1;
            while (blueCounter < 255) {
                blueCounter++;
                std::cout << "\nRGB(" << redCounter << "," << greenCounter
                          << "," << blueCounter << ")";
            }
        }
    }

    std::cout << "\n\n\nDone.\n";
}
