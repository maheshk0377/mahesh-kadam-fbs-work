#include<stdio.h>
void main()
{
int no=123;
	int r1,r2,r3;
	int q1,reverse;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	reverse=r1*100+r2*10+r3;
	if(reverse==no)
	printf("number is pallindriome=%d",reverse);
	else
	printf("number is not  pallindriome=%d",reverse);
}