//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 1024

int main() {
    char str[MAX_STRING_LEN];
    char longest[MAX_STRING_LEN];
    int maxLen = 0, currLen = 0, start = 0, longestStart = 0;
    int i;

    printf("Enter a sentence: ");
    fgets(str, MAX_STRING_LEN, stdin);

    int len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            if (currLen == 0)
                start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                longestStart = start;
            }
            currLen = 0;
        }
    }

    // Copy the longest word into 'longest' array
    strncpy(longest, str + longestStart, maxLen);
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
