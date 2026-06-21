//========================================================================================================================
//File: BMI.cpp
//Purpose: A simple program to help calculate the body mass index of a user based on their iputs and track calory intakes
//Author: Edwin
//Date: June 21, 2026.
//=========================================================================================================================

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    
    double weight, height; // declaring variables
    cout << "Enter your weight in kg: " << endl;
    cin >> weight;
    // implementing cin.fail() function to ensure only valid inputs are accepted
    if (cin.fail()) {
        cout << "Error: Invalid input!" << endl;
        cin.clear(); // clears the error state to allow re entry of data from the user
        cin.ignore(10000, '\n'); // Ignores the current input up to the next line
        return 1;
        }

    cout << "Enter your height in meters: " << endl;
    cin >> height;
    if (cin.fail()) {
        cout << "Error: Invalid input!" << endl;
        cin.clear(); // clears the error state to allow re entry of data from the user
        cin.ignore(10000, '\n'); // Ignores the current input up to the next line
        return 1;
    }

    double BMI = weight / pow((height), 2); // calculating the BMI of the user
    cout<< "Your BMI is: " << BMI << endl;

    // structuring an if-else logic to categorize the BMI results
    if (BMI < 18.5) {
        cout << "You are underweight" << endl;
    }
    else if (BMI > 24.9) {
        cout << "You are overweight" << endl;
    }
    else {
        cout << "Your weight is normal" << endl;
    }
    
    // Asking the user to input their  daily calorie intake target and their calorie intake for 3 different days
    double calorieTarget;
    cout << "Enter your calorie intake target: " << endl;
    cin >> calorieTarget;
    if (cin.fail()){
        cout << "Error: Invalid input!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return 1;
    }

    double day1, day2, day3;
    cout << "Enter your calorie intake for the past 3 days" << endl;
    cin >> day1 >> day2 >> day3;
    if (cin.fail()) {
        cout << "Error: Invalid input!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return 1;
    }

    // Sorting out the maximum and minimum amount of calorie taken in by the user based on their inputs
    double maximum = max({day1, day2, day3});
    double minimum = min({day1, day2, day3});

    //structuring if statements to help the user track how high or low they exceeded their target
    if (maximum > calorieTarget + 300) {
        cout << "Warning: Your highest day was a massive surplus! Watch out for overeating" << endl;
    }
    if (minimum < calorieTarget - 500) {
        cout << "Warning: Your lowest day was too low. Ensure you are are getting enough nutrition" << endl;
    }
    if (maximum <= calorieTarget + 300 && minimum >= calorieTarget - 500) {
        cout << "Great job! Even on your highest and lowest days, you stayed within safe range" << endl;
    }
    return 0;
}