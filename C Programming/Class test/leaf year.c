#include<stdio.h>
void main()
{
	int year,leap;
	printf("Enter a year");
	scanf("%d",&year);
	
	if (leap=year%4==0 && year%100!=0 || year%400==0)
	printf("%d=Year is leap year ",year);
	else
	printf("%d=Year is not leap year ",year);
	
}