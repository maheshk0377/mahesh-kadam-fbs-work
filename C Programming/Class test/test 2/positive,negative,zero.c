#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num > 0)
	{
		printf("Number is positive %d",num);
		
	}
	else if(num < 0)
	{
		printf("Number is negtive %d",num);
	}
	else 
		printf("Number is neutral %d",num);
	

}