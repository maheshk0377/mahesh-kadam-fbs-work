#include<stdio.h>
#include<stdlib.h>
int sumofarray(int *arr,int size);
void main()
{
	int *arr,n,total;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memory allocation failed!\n");
	}
	printf("Enter %d elements:\n",n);
	for(int i=0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	total = sumofarray(arr,n);
	printf("Sum of all elements: %d\n",total);
	
}
int sumofarray(int *arr,int size)
{
	int sum = 0;
	for(int i = 0;i < size;i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}