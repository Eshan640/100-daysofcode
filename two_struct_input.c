//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
    char name[20];
};

int areEqual(struct Point a, struct Point b) {
    if (a.x != b.x) return 0;
    if (a.y != b.y) return 0;
    /* for arrays/strings, use strcmp */
    if (strcmp(a.name, b.name) != 0) return 0;
    return 1;
}

int main() {
    struct Point p1, p2;

    printf("Enter first point (x y name): ");
    scanf("%d %d %19s", &p1.x, &p1.y, p1.name);

    printf("Enter second point (x y name): ");
    scanf("%d %d %19s", &p2.x, &p2.y, p2.name);

    if (areEqual(p1, p2))
        printf("Both structs are identical.\n");
    else
        printf("Structs are different.\n");

    return 0;
}
