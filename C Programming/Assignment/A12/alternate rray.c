#include<stdio.h>
#include<stdlib.h>
void printalternate(int *arr,int size);
void main()
{
	int *arr,n,i;
	printf("Enter the number of element:");
	scanf("%d",&n);
	arr=(int*)malloc(n * sizeof(int));
	if(arr == NULL)
	{
		printf("Memory allocation failed:\n");
	}
	printf("Enter %d elemets:\n",n);
	for(i=0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printalternate(arr,n);
	
}
void printalternate(int *arr,int size)
{
	printf("Alternate elements in the array are:\n");
	for(int i=0;i < size;i=i+2)
	{
		printf("%d\n",arr[i]);
	}
}