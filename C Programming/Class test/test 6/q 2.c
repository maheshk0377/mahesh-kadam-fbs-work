#include<stdio.h>

void main()
{
	int arr[5];
	int first,second,i;
	printf("Enter Element element in  array:");
	for(i = 0;i < 5;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	if(arr[0] > arr[1])
	{
		first = arr[0];
		second = arr[1];
	}
	else 
	{
		first = arr[1];
		second = arr[0];
	}
	for(i =2;i < 5;i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] != first)
		{
			second = arr[i];
		}
	}
		printf("Greatest elememt in arr is  %d and %d\n",first,second);
	
	
}