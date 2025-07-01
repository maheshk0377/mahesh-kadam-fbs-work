#include<stdio.h>
void main()
{
	int arr[100],num,sum = 0,i;
	printf("Enter number of Element in Array");
	scanf("%d",&num);
	printf("Enter %d elements: \n",num);
	for(i = 0;i < num;i++)
	{
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	printf("Sum of all elements = %d\n",sum);
	
}