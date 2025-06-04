#include<stdio.h>
void main()
{
	int year=2003,leap;
	if (leap=year%4==0 && year%100!=0 || year%400==0)
	printf("%d=Year is leap year ",year);
	else
	printf("%d=Year is not leap year ",year);
	
}