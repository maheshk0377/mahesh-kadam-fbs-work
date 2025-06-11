#include<stdio.h>
void main()
{
	int row =5;
	int colm =5;
	for(int i=1;i <=row;i++)
	{
		for(int j=1;j<= colm;j++)
		{
			if(i == 1 || j ==1 || i ==colm || j==colm)
			printf("* ");
			else if (i==j || i+j==colm+1)
			printf("* ");
			else 
			printf("  ");
		}
		printf("\n");
	}
}