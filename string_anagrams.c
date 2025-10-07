//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
#define CHAR_SET_SIZE 256 // Assuming ASCII

int areAnagrams(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not anagrams if lengths are different
    }

    int count1[CHAR_SET_SIZE] = {0};
    int count2[CHAR_SET_SIZE] = {0};

    for (int i = 0; str1[i] && str2[i]; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    for (int i = 0; i < CHAR_SET_SIZE; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
