//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;
    struct Student s[100];
    FILE *fp;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Write to file
    fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    for(i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    // Read from file and display
    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nStudent Records from file:\n");
    while(fscanf(fp, "%s %d %f", s[0].name, &s[0].roll, &s[0].marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s[0].name, s[0].roll, s[0].marks);
    }
    fclose(fp);

    return 0;
}
