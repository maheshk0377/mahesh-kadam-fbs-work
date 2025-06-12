#include<stdio.h>
void main()
{
	int i,j,count,n=4;
	for(i=1;i <= n;i++)
	{
		for(count=1;count <= n - i;count++)
		{
			printf(" ");
		}
		for(j=1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	for(i = n - 1;i >= 1; i--)
	{
		for( count = 1; count <= n - i;count++)
		{
			printf(" ");
		}
		for(j = 1;j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}