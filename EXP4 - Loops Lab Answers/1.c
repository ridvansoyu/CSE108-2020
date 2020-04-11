/******************************************************************************

Question 1.
Write a program to calculate sum of the numbers between 10 and 100 using all types
of loop we have learned so far (for, while and do ... while). The equation is given
in the question.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int start = 11; // This variable keeps the start of the loop
    int end = 99;   // This variable keeps the end of the loop
    int sum = 0;    // This variable will keep the sum of numbers
    int i = 0;      // This variable will used as counter
   
    // This loop will calculate the sum of the numbers between 10 and 100
    // (the word "between" means excluding 10 and 100)
    for(i = start; i <= end; i++)
    {
        sum+=i;
    }
    
    printf("The sum of numbers using for loop is: %d\n", sum);
    
    /*---------------------------------------------------------------------*/
    
    // The value of i and sum variables are changed after for loop
    printf("i = %d, sum = %d\n", i, sum);
    
    // To use this variables again, we must reassign their initial values
    i = start;
    sum = 0;
    
    while(i <= end)
    {
        sum+=i;
        i++;
    }

    printf("The sum of numbers using while loop is: %d\n", sum);
    
    /*---------------------------------------------------------------------*/
    
    // The value of i and sum variables are changed after for loop so reassign 
    i = start;
    sum = 0;
    
    do
    {
        sum+=i;
        i++;
    }
    while(i <= end);
    
    printf("The sum of numbers using do...while loop is: %d\n", sum);
    return 0;
}
