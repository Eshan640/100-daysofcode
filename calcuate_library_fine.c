//Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main() {
    int late_days;
    float fine_per_day = 2.0; // Fixed fine rate per day
    float total_fine;

    printf("Enter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days > 0) {
        total_fine = late_days * fine_per_day;
        printf("Total library fine is: %f\n", total_fine);
    } else {
        printf("No fine. The book is returned on time.\n");
    }

    return 0;
}
