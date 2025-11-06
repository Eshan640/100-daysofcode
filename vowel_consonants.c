//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile;
    int ch;
    int vowels = 0, consonants = 0;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    // Read each character from the file
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert to lowercase for uniformity
        ch = tolower(ch);

        // Check if character is an alphabet letter
        if (ch >= 'a' && ch <= 'z') {
            // Check if it is a vowel or consonant
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Close the file
    fclose(inputFile);

    // Print the counts
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
