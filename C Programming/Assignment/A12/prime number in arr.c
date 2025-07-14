#include<stdio.h>
#include<stdlib.h>
void printprime(int *arr,int size);
int isprime(int num);
void main()
{
	int *arr,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	arr = (int*)malloc(n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memory not allocate:");
	}
	
	printf("Enter %d elements:\n",n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printprime(arr,n);
}
void printprime(int *arr,int size)
{
	printf("Primes number in the array are:\n");
	for(int i=0;i < size;i++)
	{
		if(isprime(arr[i]))
		{
			printf("%d\n",arr[i]);
		}
	}
}
int isprime(int num)
{
	if(num <=1)
	return 0;
	for(int i =2;i * i <= num;i++)
	{
		if(num % i == 0)
		return 0;
	}
	return 1;
}