//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter the value of n :");
    scanf("%d",&n);
    sum=(n*n-n)/2;
    printf("%d",sum);
}
