/* File: ProgrammizTest.c
   Purpose: This program is aimed at computing the difference between three complex numbers
   using then struct method in c programming8 language
   INPUT: The program would require 2 types of input variables for all three numbers (double data type for both variables)
   METHOD: The computing would be done by adding or subtracting the variables of similar classes (real and imagine)
   OUTPUT: The program, after computing the numbers would return the result as the output
*/
#include<stdio.h>
typedef struct complex
{
    double real;
    double imagine;
} complex;

int main(void)
{
    complex complex1 = {.real = 27.50, .imagine = 75.40};
    complex complex2 = {.real = 15.60, .imagine = 42.75};
    complex complex3 = {.real = 30.50, .imagine = 33.49};

    complex difference;
    difference.real = complex1.real - complex2.real - complex3.real;
    difference.imagine = complex1.imagine - complex2.imagine - complex3.imagine;

    // smart formatting checkfor the imaginary sign
    if (difference.imagine >= 0){
    printf("The Result is: %.2f + %.2fi", difference.real, difference.imagine);
    }
    else
    //// If it's negative, we use '-' and flip the variable to positive for clean printing
    {
        printf("The Result is: %.2f - %.2fi", difference.real, -difference.imagine);
    }
    return 0;
}
