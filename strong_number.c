//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main(void)
{
    int num, temp, digit, sum = 0, fact, i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store original number

    while (temp > 0)
    {
        digit = temp % 10; // Get last digit
        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i; // Compute factorial
        }
        sum += fact; // Add factorial to sum
        temp /= 10;  // Remove last digit
    }

    if (sum == num)
        printf("%d is a strong number\n", num);
    else
        printf("%d is not a strong number\n", num);

    return 0;
}
