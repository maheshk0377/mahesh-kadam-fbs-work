#include<stdio.h>
void addarray(int a[],int b[],int sum[],int size);
void displayarray(int arr[],int size);
void main()
{
	int a[50],b[50],sum[50],n;
	printf("Enter Number of Element in array:");
	scanf("%d",&n);
	printf("Enter %d Elements in array:",n);
	for(int i=0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter %d Elements in array:",n);
	for(int i=0;i < n;i++)
	{
		scanf("%d",&b[i]);
	}
	addarray(a,b,sum,n);
	printf("Sum of two Arrays:");
	displayarray(sum,n);
	
}
void addarray(int a[],int b[],int sum[],int size)
{
	for(int i=0;i < size;i++)
	{
		sum[i]= a[i] + b[i];
	}
}
void displayarray(int arr[],int size)
{
	for(int i=0;i < size;i++)
	{
		printf("%d\n",arr[i]);
	}
}