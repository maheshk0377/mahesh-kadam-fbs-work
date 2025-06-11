#include<stdio.h>
void main()
{
	int sum=0;
	int start=1;
	int end=5;
	while(start<=end){
	printf("%d\n",start);
	sum=sum+start;
	start++;
	}
	printf("sum==%d\n",sum);
}
