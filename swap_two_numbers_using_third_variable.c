//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter two numbers :\n");
    scanf("%d %d", &a,&b);
    printf("before swappinmg: a=%d,b=%d \n ",a,b);
    t=a;
    a=b;
    b=t;
    printf("after swapping: a=%d,b=%d",a,b);

}