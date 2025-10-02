//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h> // Only for strlen, not for reversal

int main() {
    char str[100];
    int i, len, temp;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    for(i = 0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
