/* File: Module3FinalAssignment
   Purpose: This program is aimed at calculating the sine and cosine of numbers between 0 and 1
   Author: Edwin
   Date: May 13, 2026.
*/
#include<stdio.h>
#include<math.h>
// main- Execution of the program begins here
// we're going to use functions from the math.h library to find the sine and cosine of the numbers
int main(void)
{
    double radian;
// Header for the table to improve elegance and readability

   printf("%-10s | %-10s | %-10s\n", "Radian", "Sine", "Cosine");
   printf("-----------|------------|-----------\n");

/* Loop from 0.0 to 1.0
   Note: radian <= 1.01 helps account for small floating point
   precision error to ensure 1.0 is actually printed.
*/
    for(radian =0.0; radian <= 1.01; radian += 0.1)
    {
        // using fabs() for absolute values if negative results were possible
        double s_val = sin(radian), c_val = cos(radian);

        //%.4f provides consistent decimal alignment for the table
        printf("%-10.1f | %-10.4f | %10.4f\n", radian, s_val, c_val);
    }
    return 0;
}