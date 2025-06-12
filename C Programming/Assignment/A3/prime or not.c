#include<stdio.h>
void main()
{
	int no=7;
	int flag=0;
	for(int i=2; i<no;i++)
	{
		if(no % i ==0)
		{
			flag = i;
			break;
		}
	}
	if(flag == 0)
	printf("Number is   prime number");
	else 
	printf("Number is not prime number");
}
