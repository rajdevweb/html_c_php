#include<stdio.h>  
int main()    
{    
 int i,fact=1,facts;    
 printf("Enter a number: ");    
  scanf("%d",&facts);    
    for(i=1;i<=facts;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",facts,fact);    
return 0;  
}   