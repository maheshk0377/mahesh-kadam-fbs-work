#include<stdio.h>
void main()
{
	int base,exponent;
	long long int  result=1;
	
	printf("Enter base: ");
	scanf ("%d",&base);
	printf("Enter exponent: ");
	scanf("%d",&exponent);
	
	for(int i = 1;i <= exponent;i++)
	{
		result = result * base;
	
	}
		printf("%lld\n",result);
}