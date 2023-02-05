#include<stdio.h>
int main()
{
    int a , b, div;
    printf("\nEnter tow number :");
    printf("\n-----------------");

    printf("\nEnter Fist Number : ");
    scanf("%d",&a);

    printf("\nEnter Second Number : ");
    scanf("%d", &b);

    div= a / b;
    printf("\nDivision of %d & %d is : %d", a , b, div);
    return 0; 

}