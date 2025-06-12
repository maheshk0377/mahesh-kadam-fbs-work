#include<stdio.h>
void main()
{
	int number = 121;
	int orgno = number;
	int remainder;
	int revno = 0;
	while ( number != 0) {
		remainder = number % 10;
		revno = revno * 10 + remainder;
		number =number / 10;
	}
	if( orgno == revno)
	{
		printf("Number is pallindrome \n");
	}
	else
	{
		printf("Number is not pallindrome\n");
	}
}