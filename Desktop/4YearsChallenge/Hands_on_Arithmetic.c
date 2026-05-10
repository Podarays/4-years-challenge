/*Calculating the sum, difference, and average of the ages of Ray and Sly
  Edwin
  May 1o, 2026
*/
#include<stdio.h>
int main(void)
{
    double Ray = 22.0, Sly = 17.0, sum = 0, difference = 0, average = 0; // initialize
    sum = Ray + Sly;
    printf("sum = %f\n", sum);
    difference = Ray - Sly;
    printf("difference = %f\n", difference);
    average = sum / 2.0;
    printf("average = %f", average);
}