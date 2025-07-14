#include<stdio.h>
void alternate(int arr[],int size);
void main()
{
	int arr[10];
	printf("Enter Elements:");
	for(int i=0;i < 10;i++)
	{
		scanf("%d",&arr[i]);
	}
	alternate(arr,10);
}
void alternate(int arr[],int size)
{
	printf("Alternate Elements:");
	for(int i = 0;i < size;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}