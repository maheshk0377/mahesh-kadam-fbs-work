#include<stdio.h>
void main()
{
	int no = 145;
	int rem, sum = 0;
	int org = no;
	while(no > 0)
	    {
		rem = no % 10;
		int fact = 1;
		while( rem > 1)
		{
		fact = fact * no;
		rem-- ;
		}
		sum = sum + fact;
		no = no / 10;
		
		if (sum = org) {
		printf("Number is strong");
	}
		else 
		printf("Number is not a strong");
		}
		
}