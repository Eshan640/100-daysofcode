//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory for 1 Student structure
    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input details
    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter name: ");
    scanf("%49s", s->name);   // avoid overflow

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Print details
    printf("\nStudent Details:\n");
    printf("Roll  : %d\n", s->roll);
    printf("Name  : %s\n", s->name);
    printf("Marks : %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
