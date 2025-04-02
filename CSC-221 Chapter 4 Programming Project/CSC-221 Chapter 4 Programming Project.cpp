// William Woodard's CSC-221 Chapter 4 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Project 2: Shipping Charges
// Write a program that calculates the shipping charges for a package. The program should ask the user to enter the weight of the package and the distance it is to be shipped.
// Ensure that the weight of the package is not less than 0.01 kg and not more than 20 kg. Ensure that the distance to be shipped is not less than 10 miles and not more than 3000 miles.
// iomanip and cmath libraries are used for input/output and math functions, respectively.
// Establish weight validation loop to ensure weight is between 0.01 and 20 kg.
// Establish distance validation loop to ensure distance is between 10 and 3000 miles.
// Determine rate per 500 miles based on package weight.
// Calculate the number of 500-mile segments for distance and total shipping charges.
// Display the total charges.
// Return 0 to end program.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double weight, distance, rate_per_500;

    // Get package weight with validation
    do {
        cout << "Enter the weight of the package (kg): ";
        cin >> weight;
        if (weight <= 0 || weight > 20) {
            cout << "Invalid weight. The package must be between 0.01 and 20 kg." << endl;
        }
    } while (weight <= 0 || weight > 20);

    // Get shipping distance with validation
    do {
        cout << "Enter the distance to ship (miles): ";
        cin >> distance;
        if (distance < 10 || distance > 3000) {
            cout << "Invalid distance. The distance must be between 10 and 3000 miles." << endl;
        }
    } while (distance < 10 || distance > 3000);

    // Determine the rate per 500 miles
    if (weight <= 2)
        rate_per_500 = 1.10;
    else if (weight <= 6)
        rate_per_500 = 2.20;
    else if (weight <= 10)
        rate_per_500 = 3.70;
    else
        rate_per_500 = 4.80;

    // Calculate the number of 500-mile segments
    int num_segments = ceil(distance / 500);

    // Calculate total shipping charges
    double charges = num_segments * rate_per_500;

    // Display the breakdown of charges
    cout << fixed << setprecision(2);
    cout << "-----------------------------------" << endl;
    cout << "Total Shipping Charges: $" << charges << endl;

    return 0;
}