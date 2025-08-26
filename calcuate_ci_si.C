//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include <math.h> 
int main()
{
    float p,r,t,si,ci;
    printf("enter the principal ");
    scanf("%f",&p);
    printf("enter the rate");
    scanf("%f",&r);
    printf("enter the time");
    scanf("%f",&t);
    si=p*r*t/100;
    printf("\n%f",si );
    ci= p * pow((1 + r / 100), t) - p;
    printf("\n%f",ci);
}