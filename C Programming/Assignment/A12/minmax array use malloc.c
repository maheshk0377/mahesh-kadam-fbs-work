#include<stdio.h>
#include <stdlib.h>
void findminmax(int *arr,int size,int *min,int *max);
void main()
{
	int *arr;
	int min,n,max;
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	arr = (int *)malloc(n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memmory not allocated.\n");
		
	}
	printf("Enter %d elements:\n",n);
	for(int i=0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	findminmax(arr,n,&min,&max);
	printf("Minimun element:%d ",min);
	printf("Maximun element:%d ",max);
	free(arr);
}
void findminmax(int *arr,int size,int *min,int *max)
{
	*min = arr[0];
	*max = arr[0];
	for(int i = 1;i < size;i++)
	{
		if(arr[i] < *min)
		{
			*min = arr[i];
		}
		if(arr[i] > *max)
		{
			*max = arr[i];
		}
	}
}