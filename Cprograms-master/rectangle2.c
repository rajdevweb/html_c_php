#include<stdio.h>
int main()
{
    int lenght, breadth;
    printf("What is the lenght of the rectangle :");
    scanf("%d", &lenght);

    printf("\nWhat is the breadth of the rectangle :");
    scanf("%d",&breadth);

    printf("The area of your rectangle is %d", lenght*breadth);
    return 0;
}