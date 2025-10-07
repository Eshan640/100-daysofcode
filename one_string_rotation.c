//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Returns 1 if str2 is a rotation of str1, otherwise 0
int isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Lengths must be equal and non-zero
    if (len1 != len2 || len1 == 0)
        return 0;

    // Allocate memory for concatenated string
    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    temp[0] = '\0';
    strcat(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring
    int result = strstr(temp, str2) != NULL;

    free(temp);
    return result;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);

    if (isRotation(str1, str2))
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}
