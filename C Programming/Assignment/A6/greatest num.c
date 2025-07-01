#include<stdio.h>
int greatestn(int*,int*,int*);
void main()
{
	int n1,n2,n3;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	printf("Enter third number: ");
	scanf("%d", &n3);
	greatestn(&n1,&n2,&n3);
}
int greatestn(int *no1,int *no2,int *no3)
{
	
	if( *no1 > *no2 && *no2 > *no3)
	printf("number first is greter %d",*no1);
	else if(*no1 < *no2 > *no3)
	printf("number second is greater %d",*no2);
	else
	printf("number third is greater %d",*no3);
}