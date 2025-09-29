//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

// Function to perform diagonal traversal of matrix
void diagonalTraversal(int mat[][20], int rows, int cols) {
    for (int line = 1; line <= (rows + cols - 1); line++) {
        int startCol = (line > rows) ? (line - rows) : 0;
        int count = (line > cols) ? (rows + cols - line) : ((line < rows) ? line : rows);
        for (int j = 0; j < count; j++) {
            int row = (line > rows) ? (rows - j - 1) : (line - j - 1);
            int col = startCol + j;
            printf("%d ", mat[row][col]);
        }
    }
    printf("\n");
}

int main() {
    int mat[20][20];
    int rows, cols;

    printf("Enter number of rows (max 20): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 20): ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    diagonalTraversal(mat, rows, cols);

    return 0;
}
