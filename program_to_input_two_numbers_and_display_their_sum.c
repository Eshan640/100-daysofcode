  //Q1: Write a program to input two numbers and display their sum.
  

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include<stdio.h> 
int main()
{
    int x,y,z;
    printf("enter the value of x : ");
    scanf("%d",&x);
    printf("enter the value of y :");
    scanf("%d",&y);
    z=x+y;
    printf("%d",z);
}