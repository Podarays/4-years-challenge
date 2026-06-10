//===============================================================
//  TODAY, I DECIDED TO TRY OUT DATA TYPE EXPLORATION AND TESTING
//===============================================================

#include <iostream>
/*
  We use the <climit> header just so we can use the INT_MAX constant in our code
  The INT_MAX is the maximum possible value assigned to an integer
*/
#include <climits>
using namespace std;
int main () {
    // Declaring variables for different data types
    int playerLevel = 25;
    float itemPrice = 19.99f;
    double preciseCalculation = 3.14159265359;
    char playerRank = 'A';
    bool gameActive = true;

    // Displaying the memory usage of each datatype
    cout << "Memory Usage Analysis: " << endl;
    cout << "int uses " << sizeof(int) << " bytes" << endl;
    cout << "float uses " << sizeof(float) << " bytes" << endl;
    cout << "char uses " << sizeof(char) << " byte" << endl;
    cout << "double uses " << sizeof(double) << " bytes" << endl;
    cout << "bool uses " << sizeof(bool) << " byte" << endl;
    return 0; 

}