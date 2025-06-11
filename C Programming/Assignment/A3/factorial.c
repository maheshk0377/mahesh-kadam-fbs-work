#include<stdio.h>
void main()
{
	int number = 5;
	int factorial = 1;
	int i = 1;
	while ( i <= number)
	{
		factorial =factorial * i;
		i++;
	}
	printf("The factorial of %d is %d\n",number,factorial);
}