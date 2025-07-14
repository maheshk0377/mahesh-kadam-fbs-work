#include<stdio.h>
#include<stdlib.h>
void sortarray(int* arr,int size);
void printarray(int*arr,int size);
void main()
{
	int *arr,i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	arr = (int*)malloc(n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memory not alocate");
	}
	printf("Enter %d  elements:\n",n);
	for(i=0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sortarray(arr,n);
	printf("Sorted array:");
	printarray(arr,n);
}
void sortarray(int* arr,int size)
{

	int temp;
	for(int i = 0;i < size - 1;i++)
	{
		for(int j=i + 1;j < size;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void printarray(int*arr,int size)
{
	for(int i = 0;i < size;i++)
	{
		printf("%d ",arr[i]);
	}
}