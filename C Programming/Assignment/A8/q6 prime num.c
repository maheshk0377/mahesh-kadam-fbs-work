#include<stdio.h>
void primeinarray(int arr[],int size);
int isprime(int num);
void main()
{
	int arr[50], n;
	printf("Enter number of element in array:");
	scanf("%d",&n);
	printf("Enter %d elements in array\n",n);
	for(int i =0; i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	primeinarray(arr,n);
}
void primeinarray(int arr[],int size)
{
	printf("Prime numbers in Array are:\n");
	for(int i=0;i < size;i++)
	{
		if(isprime(arr[i]))
		{
			printf("%d ",arr[i]);
		}
	}
}
int isprime(int num)
{
	if(num <= 1)
	return 0;
	for(int i=2; i * i <= num;i++)
	{
		if(num % i ==0)
		return 0;
	}
	return 1;
}