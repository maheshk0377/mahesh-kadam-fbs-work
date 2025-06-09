#include<stdio.h>
void main()
{
	int no=28;
	int i = 1;
	int sum = 0;
	
	while(i < no/2)
	{
		if (no % i == 0)
		{
			sum=sum+i;
		}
			i++;
	}
		
		if(no == no){
		printf("number is perfect");
		}
		else {
		printf("number is not perfect");
	
	}
}
