// William Woodard's CSC-221 Chapter 4 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Project 1: Days in a Month
// Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year.  Then display the number of days in that month and account for leap years.
// Establish integer variables for month and year.
// Get user input for month and year by using loop to ensure valid input.
// Determine if it's a leap year by using a boolean variable.
// Determine the number of days in the month by using a switch statement.
// Display the number of days in the month.
// Return 0 to end the program.

#include <iostream>

using namespace std;

int main() {
    int month, year;

    // Get user input for valid month input and year.
    do {
        cout << "Input a month (use a number from 1 to 12): ";
        cin >> month;
        if (month < 1 || month > 12) {
            cout << "Month NOT Valid. Please enter a number from 1 to 12." << endl;
        }
    } while (month < 1 || month > 12);

    cout << "Input a year: ";
    cin >> year;

    int days;

    // Determine if it's a leap year.
    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Determine the number of days in the month.
    switch (month) {
    case 2:
        days = isLeap ? 29 : 28;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    default:
        days = 31;
    }

	// Display the number of days in the month.
    cout << days << " days" << endl;

    return 0;
}

