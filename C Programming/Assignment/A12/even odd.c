#include<stdio.h>
#include<stdlib.h>
void printeven(int *arr,int size);
void printodd(int *arr,int size);
void main()
{
	int *arr,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	arr = (int*) malloc(n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memory allocation failed!\n");
	}
	printf("Enter %d elements:\n",n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printeven(arr,n);
	printodd(arr,n);
}
void printeven(int *arr,int size)
{
	printf("Even numbers:");
	for(int i = 0;i < size;i++)
	{
		if(arr[i] % 2 ==0)
		{
			printf("\n%d ",arr[i]);
		}
	}
}
void printodd(int *arr,int size)
{
	printf("\nOdd numbers:");
	for(int i=0;i < size;i++)
	{
		if(arr[i] % 2 != 0)
		{
			printf("\n%d ",arr[i]);
		}
	}
}