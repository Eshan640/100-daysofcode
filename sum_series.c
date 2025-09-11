//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main(void)
{
    int n, i;
    float sum = 0.0, numerator, denominator, term;

    // Input the number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        numerator = 2 * i - 1;
        denominator = 2 * i;
        term = numerator / denominator;
        sum += term;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);
    return 0;
}
