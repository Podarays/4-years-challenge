/* File: WhileLoopTest.c
   Purpose: This is a bouncer's program aimed at checking if a bouncer is tired,
   while checking the number of people
   Author: Edwin
   Date: May 12, 2026. 
*/
#include<stdio.h>
/* main- Execution of the program begins here
   Based on the bouncer's input, the system will decide if the bouncer is tired,
   while letting us know the number of people who have been checked
*/
int main(void)
{
    int peopleChecked = 0, bouncerIsTired = 0;
    // while we haven't hit 5 people AND bouncer isn't tired
    while(peopleChecked < 5 && bouncerIsTired == 0)
    {
        printf("Person %d", peopleChecked + 1);
        peopleChecked++;
        // Increment the count peopleChecked++;

        // Ask the bouncer a question to update "bouncerIsTired" variable
        if (peopleChecked < 5);
        {
            printf("\nAre you tired?\n Yes(1) \n No(0)\n");
            scanf("%d", &bouncerIsTired);
        }
    }
        printf("\n Go take a break! yYou checked %d people.\n", peopleChecked);
        return 0;
}