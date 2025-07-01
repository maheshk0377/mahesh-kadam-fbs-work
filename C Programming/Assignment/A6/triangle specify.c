#include<stdio.h>
int triangle(int*,int*,int*);
void main()
{
	int  side1,side2,side3;
	printf("enter side 1: ");
	scanf("%d", &side1);
	printf("enter side 2: ");
	scanf("%d", &side2);
	printf("enter side 3: ");
	scanf("%d", &side3);
	triangle(&side1,&side2,&side3);
}
int triangle(int *s1,int *s2,int *s3)
{
	if(*s1 == *s2 && *s2 == *s3)
	printf("Triangle is equilateral triangle");
	else if(*s1 == *s2 || *s2 == *s3 || *s1 == *s3)
	printf("Triangle is an isosceles triangle");
	else 
	printf("Triangle is an scalene triangle");
}