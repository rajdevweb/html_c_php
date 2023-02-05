#include<stdio.h>
main()
{
	int num,max=0,rem;
	
	printf("Enter a Number : ");
	scanf("%d", &num);
	
	while(num !=0 )       
	{
		rem = num%10;
		
		if (rem > min)
		{
			max = rem;
		}
		num = num/10;   
		                
}

printf("\n\n Maximum digit from number :%d",max);	
}
   
   