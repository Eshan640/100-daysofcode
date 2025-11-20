//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details for 5 students
    printf("Enter information of students:\n");
    for(i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor student %d,\n", s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Print all student details
    printf("\nDisplaying Information of Students:\n\n");
    for(i = 0; i < 5; ++i) {
        printf("Roll number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}
