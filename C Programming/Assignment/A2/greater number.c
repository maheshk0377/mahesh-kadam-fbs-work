#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("Enter first number: ");
	scanf("%d", &no1);
	printf("Enter second number: ");
	scanf("%d", &no2);
	printf("Enter third number: ");
	scanf("%d", &no3);
	if(no1>no2&&no2>no3)
	printf("number first is greter %d",no1);
	else if(no1<no2>no3)
	printf("number second is greater %d",no2);
	else
	printf("number third is greater %d",no3);
}