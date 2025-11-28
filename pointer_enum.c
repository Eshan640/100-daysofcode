//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

void update(struct Student *s) {
    // modify using -> operator
    s->roll = 101;
    s->marks = 92.5f;
}

void display(const struct Student *s) {
    // display using -> operator
    printf("Roll  : %d\n", s->roll);
    printf("Name  : %s\n", s->name);
    printf("Marks : %.2f\n", s->marks);
}

int main(void) {
    struct Student st = { 0, "Rahul", 0.0f };
    struct Student *ptr = &st;   // pointer to struct

    update(ptr);                 // modify via pointer
    display(ptr);                // display via pointer

    return 0;
}
