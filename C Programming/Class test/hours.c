#include<stdio.h>
void main()
{
	int minute,hours,sec;
	int tsec;
	printf("enter hours : ");
	scanf("%d",&hours);
		printf("enter minute : ");
	scanf("%d",&minute);
		printf("enter sec : ");
	scanf("%d",&sec);
	
	tsec=(hours*3600)+(minute*60)+sec;
	
	
	printf("%d seconds in hours minute tsec",tsec);
}