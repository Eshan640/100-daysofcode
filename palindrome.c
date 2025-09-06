//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    int number, original, remainder, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    // Check if palindrome
    if (original == reverse) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }
    return 0;
}
