#include<stdio.h>
void main()
{
	int n, i, sum,j;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Perfect numbers between 1 and %d are: \n",n);
	for(i = 1; i<= n;i++)
	{
		sum = 0;
		for(j = 1; j < i; j++)
		{
			if(i %j == 0)
			{
				sum =sum + j;
			}
		}
		if (sum == i)
		{
			printf("%d\n",i);
		}
		}	
}