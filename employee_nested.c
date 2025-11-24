//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joining_date;   // nested structure
};

int main() {
    struct Employee e;

    printf("Enter employee id: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%49s", e.name);   // reads single-word name

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d",
          &e.joining_date.day,
          &e.joining_date.month,
          &e.joining_date.year);

    printf("\nEmployee Details:\n");
    printf("ID           : %d\n", e.id);
    printf("Name         : %s\n", e.name);
    printf("Salary       : %.2f\n", e.salary);
    printf("Joining Date : %02d-%02d-%04d\n",
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);

    return 0;
}

