/******************************************************************************
Question 2.
Write a program that calculates the formula in the question.,
Read the value of n from the keyboard.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;
    
    // Read the "n" value from the keyboard.
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // This for loop will run as "summation operator".
    for(int i = 1; i <= n; i++)
    {
        // Write the statement in the sum operator
        sum += i*i + 5;
    }
    
    // Show the result
    printf("The result is: %d", sum);
    
    return 0;
}
