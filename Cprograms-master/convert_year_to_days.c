#include <stdio.h>
int main()
{
    int days, month, year, x, y;
    printf("\nEnter total number of days : ");
    scanf("%d", &days);
    year = days / 365;
    x = days % 365;
    month = x / 30;
    y = x % 30;
    printf("Years = %d \n Months = %d \n and Remeining days = %d", year, month, y);
    return 0;
}