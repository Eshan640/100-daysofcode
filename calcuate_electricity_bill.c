//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include <stdio.h>
int main() {
    int units;
    float bill = 0.0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.0;
    } else {
        bill = 100 * 1.5 + 100 * 2.0 + (units - 200) * 3.0;
    }

    printf("Total Electricity Bill: ₹%f\n", bill);

    return 0;
}
