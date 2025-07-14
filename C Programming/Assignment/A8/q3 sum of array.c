#include<stdio.h>
int totalsum(int arr[],int size);
void main()
{
	int arr[5];
	printf("Enter Elements in array:");
	for(int i =0; i < 5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int result =totalsum(arr,5); 
	printf("Total Sum of Element = %d",result);
}
int totalsum(int arr[],int size)
{
	int s = 0;
	for(int i = 0; i < size;i++)
	{
		s = s + arr[i];
	}
	return s;
	
}