#include<stdio.h>
#include<stdlib.h>
void addarray(int *arr1,int *arr2,int *sumarr,int size);
void displayarray(int *arr,int size,const char *name);
void main()
{
	int *arr1,*arr2,*sumarr,n;
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	arr1=(int*)malloc(n * sizeof(int));
	arr2=(int*)malloc(n * sizeof(int));
	sumarr=(int*)malloc( n* sizeof(int));
	if(arr1 == NULL || arr2 == NULL || sumarr == NULL)
	{
		printf("Memory not allocated");
	}
	printf("Enter %d elements for first array:\n",n);
	for(int i=0;i < n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter %d elements gor second array:\n",n);
	for(int i =0;i < n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	addarray(arr1,arr2,sumarr,n);
	displayarray(arr1,n,"First Array");
	displayarray(arr2,n,"Second Array");
	displayarray(sumarr,n,"Sum Array");
}
void addarray(int *arr1,int *arr2,int *sumarr,int size)
{
	for (int i =0;i < size;i++)
	{
		sumarr[i] = arr1[i] + arr2[i];
	}
}
void displayarray(int *arr,int size,const char *name)
{
	printf("%s: ",name);
	for(int i=0;i < size;i++)
	{
		printf("%d\n",arr[i]);
	}
}