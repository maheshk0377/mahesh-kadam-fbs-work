#include<stdio.h>
void sortedarray(int arr[],int size);
void printarray(int arr[],int size);
void main()
{
	int arr[100],n;
	
	printf("Enter Numbers Of Element:");
	scanf("%d",&n);
	printf("Enter %d Elements:\n",n);
	for(int i =0;i < n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	sortedarray(arr,n);
	printf("Sorted Array: ");
	printarray(arr,n);
}
void sortedarray(int arr[],int size)
{
	int i,j,temp;
	for(i = 0;i < size - 1;i++)
	{
		for(j = 0;j < size -1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printarray(int arr[],int size)
{
	int i;
	for(i = 0;i < size;i++)
	{
		printf("%d\n",arr[i]);
	}
}