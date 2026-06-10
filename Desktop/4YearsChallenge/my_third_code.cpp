/*
  File: my_third_code.cpp
  Purpose: A simple program to determine the maximum and minimum among the six numbers input by a user
  Author: Edwin
  Date; June 9, 2026
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int number1, number2, number3, number4, number5, number6;
    cout << "Enter your numbers : " << endl;
    cin >> number1 >> number2 >> number3 >> number4 >> number5 >> number6;

    // Using the max and min functions from the <algorithm> header to sort out the maximum and munimum nubers among the user's input
    int maximum = max({number1, number2, number3, number4, number5, number6});
    int minimum = min({number1, number2, number3, number4, number5, number6});

    // Displaying the maximum and minimum numbers 
    cout << "The maximum number is: " << maximum << endl;
    cout << "The minimum number is: " << minimum << endl;
    return 0;
    
}