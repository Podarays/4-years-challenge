/* File: PersonalTest
   Purpose: This program is aimed at verifying the ages of individuals,
   checking if they have tickets, or whether they're with a parent before they'll be allowed entry
   Author: Edwin
   Date: May 12, 2026.
*/
#include<stdio.h>
/* main- Execution of the program begins here
   Users will be prompted to enter their age, ticket, or whether they're with a parent
   Based on the information they'll provide, verification will be done
   and then a decision will be made whether to allow them entry or not
*/
int main(void)
{
    int age, hasTicket, withParent;
    printf("Enter your age\n Did you come with your parent? (1 = Yes, 0 = No)\n Do you have a ticket? (1 = Yes, 0 = No)\n");
    scanf("%d %d %d", &age, &withParent, &hasTicket);
     if (hasTicket == 1 && (withParent == 1 || age >= 18))
       printf("You can go in. Have fun!");
     else if (hasTicket == 0 && (withParent == 1 || age >= 18))
       printf("Access Denied");
     else if (hasTicket == 1 && withParent == 0 && age >= 18)
       printf("You can go in. Have fun!");
     else printf("Access Denied");
    return 0;
}