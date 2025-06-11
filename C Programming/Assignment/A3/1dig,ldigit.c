#include<stdio.h>
void main()
{
	int rem,sum;
	int no = 12345;
	int ldigit=no % 10;
	while( no > 0){
		rem = no % 10;
		no = no / 10;
	}
	sum = ldigit + rem;
	printf("%d = %d + %d",sum, ldigit,rem);
}