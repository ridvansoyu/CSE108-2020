/******************************************************************************

Question 4.
Write a program that prints the digits of the given number starting from the least
significant digit. Print digits in seperate lines. If user enters a value less than 0,
print a message that the number is invalid.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number;
    int number_of_digit = 0;

    // Get the number from keyboard
    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        
        // Control if the number is equal to zero.
        if(number == 0)
        {
            printf("This number is invalid.");
        }
        
        // If number is not equal to zero, then find least significant digit
        else
        {
          // We will find the least significant digit using mod operator.
          printf("Digit: %d\n", number % 10);

          // Then delete least significant digit from number
          // To calculating next digit
          number = number / 10;
        }
    }
    return 0;
}
