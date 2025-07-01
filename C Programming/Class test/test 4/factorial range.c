#include<stdio.h>
void main()
{
	
	int  start,end;
	for(start=10;start<=15;start++)
	{
		printf("Factors of %d;",start);
		for(end = 1;end<=start;end++)
		{
			if(start % end==0)
			{
				printf("%d ",end);
			}
		}
		printf("\n");
	}
}