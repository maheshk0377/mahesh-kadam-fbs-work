#include<stdio.h>
void reversearray(int arr[],int size);
void printarray(int arr[],int size);
void main()
{
	int arr[100],size;
	printf("Enter Size Of Array:");
	scanf("%d",&size);
	printf("Enter %d elements:",size);
	for(int i = 0;i < size;i++)
	{
		scanf("%d",&arr[i]);
	}
	reversearray(arr,size);
	printf("Reversed Array: ");
	printarray(arr,size);
}
void reversearray(int arr[],int size)
{
	int start = 0,end = size - 1,temp;
	while(start < end )
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void printarray(int arr[],int size)
{
	for(int i = 0;i < size;i++)
	{
		printf("%d ",arr[i]);
	}
}