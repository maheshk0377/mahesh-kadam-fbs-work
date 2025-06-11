#include<stdio.h>
void main()
{
	int num,i,status = 1;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num <= 1)
	{
		status = 0;
	}
	else 
	{
		for (i = 2; i * i <= num; i++) {
			if(num % i == 0) {
				status = 0;
				break;
			}
		}
	}
	if(status)
	printf(" %d is a prime number: \n",num);
	else 
	printf("%d is a not prime number: \n",num);
}

