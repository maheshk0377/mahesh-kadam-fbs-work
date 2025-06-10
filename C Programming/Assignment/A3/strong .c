#include<stdio.h>
int main() 
{
	int no = 100;
	int temp = no, digit, sum = 0,i, fact;

	while(temp > 0) 
	{
		digit = temp % 10;
		fact = 1;
		for(i = 1; i <= digit; i++) 
		{
			fact *= i;
		}
		sum += fact;
		temp /= 10;
	}
	if(sum == no)
		printf("%d is a strong number.\n",no);
	else
		printf("%d is not a strong number.\n",no);


}