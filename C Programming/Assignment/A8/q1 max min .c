#include<stdio.h>
int findmax(int arr[],int n);
int findmin(int arr[],int n);
void main()
{
	int arr[100],n;
	
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter Elements: ");
	for(int i=0;i< n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max = findmax(arr,n);
	int min = findmin(arr,n);
	printf("Maximun Element = %d\n",max);
	printf("Minimun Element = %d\n",min);
}
int findmax(int arr[],int n)
{
	int max = arr[0];
	for(int i =1; i < n;i++)
	{
		if(arr[i] > max)
		max = arr[i];
	}
	return max;
	
}
int findmin(int arr[],int n)
{
	int min = arr[0];
	for(int i = 1; i < n; i++)
	{
		if(arr[i] < min)
		min = arr[i];
	}
	return min;
}