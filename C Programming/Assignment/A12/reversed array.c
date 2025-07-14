#include<stdio.h>
#include<stdlib.h>
void reversearray(int*arr,int size);
void printarray(int*arr,int size);
void main()
{
	int *arr,i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	arr = (int*)malloc(n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memory not allocate");
	}
	printf("Enter %d elements:\n",n);
	for(i = 0; i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	reversearray(arr,n);
	printf("Reversed array:");
	printarray(arr,n);
}
void reversearray(int*arr,int size)
{
	int temp;
	for(int i=0;i < size / 2;i++)
	{
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i]= temp;
	}
}
void printarray(int*arr,int size)
{
	for(int i=0;i < size;i++)
	{
		printf("%d ",arr[i]);
	}
}