//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1:
            printf("Month: January\nNumber of days: 31\n");
            break;
        case 2:
            printf("Month: February\nNumber of days: 28 or 29\n");
            break;
        case 3:
            printf("Month: March\nNumber of days: 31\n");
            break;
        case 4:
            printf("Month: April\nNumber of days: 30\n");
            break;
        case 5:
            printf("Month: May\nNumber of days: 31\n");
            break;
        case 6:
            printf("Month: June\nNumber of days: 30\n");
            break;
        case 7:
            printf("Month: July\nNumber of days: 31\n");
            break;
        case 8:
            printf("Month: August\nNumber of days: 31\n");
            break;
        case 9:
            printf("Month: September\nNumber of days: 30\n");
            break;
        case 10:
            printf("Month: October\nNumber of days: 31\n");
            break;
        case 11:
            printf("Month: November\nNumber of days: 30\n");
            break;
        case 12:
            printf("Month: December\nNumber of days: 31\n");
            break;
        default:
            printf("Invalid month number!\n");
    }
    return 0;
}
