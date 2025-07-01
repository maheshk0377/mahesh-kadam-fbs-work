#include<stdio.h>
void swap(int*,int*);
void main()
{
	int no1=10,no2=20;
	printf("Before swap no1=%d,no2=%d\n",no1,no2);
	swap(&no1,&no2);
	printf("After swap no1=%d,no2=%d\n",no1,no2);
}
void swap(int* a,int* b)
{
	int temp;
	temp= *a;
	*a = *b;
	*b=temp;
}