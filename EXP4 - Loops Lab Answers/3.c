/******************************************************************************

Question 3.
Write a program that prints requested amount of asterisk characters to the screen.
This program should ask the amount again and again until user enters a value higher
than 0.
Note: This program is composed of two sections; each section requires a different
type of loop. Use the most appropriate loop type for these sections.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int asterisk = -1; // This variable will keep the amount of asterisks.
    
    // The most appropriate loop type for first section is while loop
    // and for the second section is for loop
    
    // At the beginning, we don't know the amount of asterisk.
    // So we have to skip the first cycle of the loop without printing any asterisk
    // If we give the asterisk value -1, the program will both enter the loop
    // and not print asterisk.

    while(asterisk != 0)
    {
        // This loop will print the requested amount of asterisk character
        for(int i= 0; i < asterisk; i++)
        {
            printf("*");
        }
        printf("\n");
        
        printf("Enter the number of asterisk: ");
        scanf("%d", &asterisk);
    }
    

}
