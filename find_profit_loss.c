//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main() {
    float cost_price, selling_price, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cost_price);

    printf("Enter Selling Price: ");
    scanf("%f", &selling_price);

    if(selling_price == cost_price) {
        printf("No Profit, No Loss.\n");
    } else if(selling_price > cost_price) {
        percent = ((selling_price - cost_price) / cost_price) * 100;
        printf("Profit Percentage = %f%%\n", percent);
    } else {
        percent = ((cost_price - selling_price) / cost_price) * 100;
        printf("Loss Percentage = %f%%\n", percent);
    }

    return 0;
}
