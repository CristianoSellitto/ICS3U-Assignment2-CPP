// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds volume and surface area of a cylinder

#include <cmath>
#include <iostream>

double radiusOfCylinder;
double heightOfCylinder;
double volume;
double surfaceArea;

int main() {
    // Finds volume and surface area of a cylinder

    std::cout << "Enter the radius of a cylinder (cm): ";
    std::cin >> radiusOfCylinder;
    std::cout << "Enter the height of a cylinder (cm): ";
    std::cin >> heightOfCylinder;
    std::cout << std::endl;
    volume = M_PI * pow(radiusOfCylinder, 2) * heightOfCylinder;
    surfaceArea = (
        2 * M_PI * radiusOfCylinder * heightOfCylinder
        + 2 * M_PI * pow(radiusOfCylinder, 2));
    std::cout << std::endl;
    std::cout << "The volume of this cylinder is ";
    std::cout << volume << "cm³" << std::endl;
    std::cout << "The surface area of this cylinder is ";
    std::cout << surfaceArea << "cm²" << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
