#include<stdio.h>
int add(int* ,int*);
void main()
{
	int no1,no2,sum;
	printf("enter first number:");
	scanf("%d",&no1);
	printf("enter  second number:");
	scanf("%d",&no2);
	 sum = add(&no1,&no2);
	printf("sum = %d",sum);
}
int add(int* n1,int* n2)
{
	return *n1 + *n2;
}