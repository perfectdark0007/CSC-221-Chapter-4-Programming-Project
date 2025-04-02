// William Woodard's CSC-221 Chapter 4 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Project 3: Geometry Calculator
// Write a program to calculate the area of a circle, rectangle, or triangle along with an option to quit.
// cmath and iomanip libraries are used for pow() and setprecision() functions, respectively.
// Setup display menu with options 1-4 for circle, rectangle, triangle, and quit.
// Use a do-while loop to keep the program running unless the user chooses to quit.
// Establish circle area formula as pi * radius^2 according to pi = 3.14159 per requirements.
// Establish rectangle area formula as length * width.
// Establish triangle area formula as 0.5 * base * height.
// Include error handling for negative values.
// setprecision can be set for each area calculation, 5 was chosen to match pi's precision.
// Establish a return 0; for each area calculation to prevent the program from continuing to the next area calculation.
// Exit the program when the user chooses to quit.
// Return 0 at the end of the program to indicate successful completion.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int choice;

    do {
        // Display menu
        cout << "\nGeometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) { // Circle
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            while (radius <= 0) {
                cout << "Error: Radius must be positive. Please enter again: ";
                cin >> radius;
            }
            double area = 3.14159 * pow(radius, 2);
            cout << fixed << setprecision(5) << "The area of the circle is " << area << "\n";
            return 0;
        }
        else if (choice == 2) { // Rectangle
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            while (length <= 0) {
                cout << "Error: Length must be positive. Please enter again: ";
                cin >> length;
            }
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            while (width <= 0) {
                cout << "Error: Width must be positive. Please enter again: ";
                cin >> width;
            }
            double area = length * width;
            cout << fixed << setprecision(5) << "The area of the rectangle is " << area << "\n";
            return 0;
        }
        else if (choice == 3) { // Triangle
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            while (base <= 0) {
                cout << "Error: Base must be positive. Please enter again: ";
                cin >> base;
            }
            cout << "Enter the height of the triangle: ";
            cin >> height;
            while (height <= 0) {
                cout << "Error: Height must be positive. Please enter again: ";
                cin >> height;
            }
            double area = 0.5 * base * height;
            cout << fixed << setprecision(5) << "The area of the triangle is " << area << "\n";
            return 0;
        }
        else if (choice == 4) {
            cout << "Exiting the program. Goodbye!\n";
            return 0;
        }
        else {
            cout << "Error: Please enter a valid choice (1-4).\n";
        }
    } while (true);

    return 0;
}



