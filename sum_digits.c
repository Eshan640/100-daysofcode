//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() 
{
    int number, sum = 0, digit;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Make sure to handle negative numbers by taking absolute value
    if (number < 0) {
        number = -number;
    }

    // Calculate sum of digits
    while (number > 0) {
        digit = number % 10;  // get last digit
        sum += digit;         // add digit to sum
        number = number / 10; // remove last digit
    }

    // Output the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
