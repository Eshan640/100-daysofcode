 //Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int x,y,sum,difference,product,quotient;
    printf(" enter the value of x :");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);
    sum=x+y;
    printf("%d",sum);
    difference=x-y;
    printf("%d",difference);
    product=x*y;
    printf("%d",product);
    quotient=x/y;
    printf("%d",quotient);
    

}