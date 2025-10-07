//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1024

void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[MAX_LEN];
    printf("Enter a sentence: ");
    fgets(str, MAX_LEN, stdin);

    int len = strlen(str);
    int word_start = 0;

    for (int i = 0; i <= len; i++) {
        // Detect end of word using space, newline or end of string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            reverse(str, word_start, i - 1);
            word_start = i + 1;
        }
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
