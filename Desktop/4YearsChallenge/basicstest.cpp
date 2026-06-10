#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    // compnonent 3: setting up table structure
    cout <<"------------ COMPONENT 3: TABLE DATA ------------"<< endl;

    // Set up table header
    // setw sets the field width for the next output
    cout << "|" << left << setw(15) << "Data Type" << "|" << setw(20) << "Size (bytes)" << "|" << setw(20) << "Value Range" << "|" << endl;
    cout << string(59, '_') << endl;

    // Table rows
    cout << "|" << left << setw(15) << "int" << "|" << left << setw(20) << "sizeof(int)" << "|" << left << setw(20) << " -2^31 to 2^31-1" << "|" << endl;
    cout << "|" << left << setw(15) << "double" << "|" << left << setw(20) << "sizeof(double)" << "|" << left << setw(20) << " ~1.7e^308" << "|" << endl; 
    cout << "|" <<left << setw(15) << "char" << "|" << left << setw(20) << "sizeof(char)" << "|" << left << setw(20) << " -128 to 127" << "|" << endl; 
    cout << "|" << left << setw(15) << "bool" << "|" << left << setw(20) << "sizeof(bool)" << "|" << left << setw(20) << " true or false" << "|" << endl;  
return 0;
}