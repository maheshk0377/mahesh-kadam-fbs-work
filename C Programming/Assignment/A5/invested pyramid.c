#include<stdio.h>
void main()
{
	int i,j,num =5,count;
	for(i = num;i >= 1;i--)
	{
		for(count = 0;count <= num - i;count++)
		{
				printf(" ");
		}
	for(j = 1;j <= i;j++)
	{
	printf("* ");
	}
		printf("\n");
	}
}