//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int l,b,area_rectangle,perimeter_rectangle;
    l=20;
    b=30;
    area_rectangle=l*b;
    printf("%d",area_rectangle );
    perimeter_rectangle=2*l+2*b;
    printf("%d",perimeter_rectangle);


}