//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main() {
    int num, temp, remainder, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count digits
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate sum of each digit raised to number of digits
    while (temp != 0) {
        int power = 1;
        remainder = temp % 10;

        // Multiply remainder 'digits' times (instead of using pow())
        for(int i = 0; i < digits; i++) {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    // Print result
    if(sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
