#include<stdio.h>
void findevenodd(int arr[],int size);
void main()
{
	int arr[10];
	printf("Enter Elements in array:");
	for(int i = 0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	findevenodd(arr,10);
}
void findevenodd(int arr[],int size)
{
	printf("Even Numbers in array: ");
	for(int i = 0;i < size;i++)
	{
		if(arr[i] % 2 == 0)
		{
			printf("%d ",arr[i]);
		}
	}
		printf("\nOdd numbers in array: ");
		for(int i = 0;i < size;i++)
	{
		if(arr[i] % 2 != 0)
			printf("%d ",arr[i]);
		
	}
}