//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    int ch;

    // Open input.txt for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    // Open output.txt for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output.txt");
        fclose(inputFile);
        return 1;
    }

    // Read each character from input.txt
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert lowercase to uppercase
        if (islower(ch)) {
            ch = toupper(ch);
        }
        // Write the character to output.txt
        fputc(ch, outputFile);
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion completed. Check output.txt.\n");

    return 0;
}
