#include<stdio.h>
void main()
{
	int i,j,num=5,count;
	for(i =1;i <= num;i++)
	{
		for(count=1;count <= num - i;count++)
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