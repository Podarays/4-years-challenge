/* File: SineGenerator.c
   Purpose: This is a sine table generator aimed at calculating the sine of 5 numbers
   while using the for loop
   Author: Edwin
   Date: May 13, 2026.
*/
#include<stdio.h>
#include<math.h>
// main- Execution of the program begins here
// the sine of 5 values, 0.1 - 0.5 will be calculated without having to enter each number everytime
int main(void)
{
    double radiant, result;
    for ( double radiant = 0.1; radiant <= 0.5; radiant += 0.1)
    {
        result = sin(radiant);
    printf("\nThe sine of %f is %f", radiant, result);
    }
    return 0;
}