#include<stdio.h>
void main()
{
	int arr[5] = {10,20,30,40,50};
	int n = 5;
	printf("Original Array: ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	for( int i = 0;i < n / 2;i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = temp;
	}
	printf("\nReversed array: ");
	for( int i = 0; i < n;i++)
	{
		printf("%d ",arr[i]);
	}
}