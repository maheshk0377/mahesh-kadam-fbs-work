#include<stdio.h>
#include<stdlib.h>
int searchnumber(int *arr,int size,int num);
void main()
{
	int *arr,n,search,index;
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
	printf("Enter the number to search:");
	scanf("%d",&search);
	index = searchnumber(arr,n,search);
	if(index != -1)
	{
		printf("Number %d found at position %d (index %d\n",search,index + 1,index);
		
	}
	else
	{
		printf("Number %d not fond in array",search);
	}
}
int searchnumber(int *arr,int size,int num)
{
	for(int i=0;i < size;i++)
	{
		if(arr[i] == num)
		{
			return i;
		}
	}
	return -1;
}