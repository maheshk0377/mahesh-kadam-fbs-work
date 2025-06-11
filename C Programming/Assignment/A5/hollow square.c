#include<stdio.h>
void main()
{
	int row =4;
	int colm =4;
	for(int i=1;i <=row;i++)
	{
		for(int j=1;j<= colm;j++)
		{
			if(i == 1 || j ==1 || i ==colm || j==colm)
			printf("* ");
			else 
			printf("  ");
		}
		printf("\n");
	}
}