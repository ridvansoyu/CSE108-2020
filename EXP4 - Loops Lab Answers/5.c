/******************************************************************************

Question 5.
Read a number from user. Then ask user to enter number amount of values and
calculate sum, minimum and maximum of these numbers.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int counter = 0;        // Amount of number
    int sum = 0;            // Summation of numbers
    int max = 0;            // Maximum of numbers
    int min = 9999999;      // Minimimum of numbers
    int current_number = 0; // Current entered number
    
    // Get the amount of number from keyboard
    printf("Enter the amount of number: ");
    scanf("%d", &counter);
    
    for(int i = 0; i < counter; i ++)
    {
        // Get the subsequent number
        printf("Enter %d. number: ", i + 1);
        scanf("%d", &current_number);
        
        // Calculate the sum
        sum += current_number;
        
        // Find the minimum
        // Compare the current entered number with previous one
        // If the current entered number is smaller than previous
        // Change the minimum with current entered number
        if(current_number < min)
        {
            min = current_number;
        }
        
        // Find the maximum
        // Compare the current entered number with previous one
        // If the current entered number is bigger than previous
        // Change the maximum with current entered number
        if(current_number > max)
        {
            max = current_number;
        }
    }
    
    // Print the summation, minimum and maximum
    printf("Summation: %d\n", sum);
    printf("Minimum: %d\n", min);
    printf("maximum: %d\n", max);
    return 0;
}
