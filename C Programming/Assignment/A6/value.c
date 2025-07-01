#include<stdio.h>
void main()
{
	int x = 10;
	int* ptr =&x;
	printf(" %d \n%u",x,&x);
	printf("\n%u", ptr + 1);
	printf("\n%u", ptr + 2);
	printf("\n%u", ptr + 3);
	
}