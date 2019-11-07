// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This takes a number
//  and prints which its multiplication table

#include <iostream>

int main() {
    int counter;

    counter = 0;

    for (int numbers = 1000; numbers <= 2000; numbers++) {
        counter = counter + 1;
        std::cout << (numbers) << " ";
        if (counter < 5) {
            // do nothing
        } else {
            std::cout << std::endl;
            if (counter == 5) {
                counter = 0;
            }
        }
    }
}
