// Copyright 2023 Marli Peters
// Created By: Marli Peters
// Date: Sep. 20, 2023
// This program calculate the area and circumference of a circle.
#include <cmath>
#include <iostream>

int main() {
    // Define the radius.
    float radius1 = 8;

    // Text for context
    std::cout << " If the radius of a circle is 8" << std::endl;

    // Calculate the circumference.
    float circ = 2 * M_PI * radius1;
    // Results of calculations.
    std::cout << " The circumference of the circle is : " << circ << std::endl;
    std::cout << "" << std::endl;

    // Define the radius.
    float radius2 = 2.4;

    // Text for context
    std::cout << " If the radius of a circle is 2.4" << std::endl;

    // Calculate the area.
    float area = M_PI * radius2 * radius2;
    // Results of calculations.
    std::cout << " The area of the circle is : " << area << std::endl;
}
