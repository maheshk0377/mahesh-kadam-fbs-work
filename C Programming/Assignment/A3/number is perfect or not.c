#include<stdio.h>
void main()
{
	int no=12,sum = 0;
	
	for(int i=1;i<no;i++)
	{
		if(no % i==0)
		{
			sum += i;
		}
	}
	if(sum == no)
	{
		printf("%d is a perfect number. \n",no);
	}
	else
	{
		printf("%d is not a perfect number. \n",no);
	}
}
