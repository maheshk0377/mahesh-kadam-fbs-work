#include<stdio.h>
#include<stdlib.h>
int* mergearray(int* arr1,int size1,int* arr2,int size2,int* mergedsize);
void main()
{
	int size1,size2;
	printf("Enter size of first array:");
	scanf("%d",&size1);
	int *arr1 =(int*)malloc(size1 * sizeof(int));
	printf("Enter elements of first array:\n");
	for(int i=0;i < size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter size of second array:");
	scanf("%d",&size2);
	int *arr2 = (int*)malloc(size2 * sizeof(int));
	printf("Enter elements of second array:\n");
	for(int i = 0;i < size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int mergedsize;
	int *mergedarray = mergearray(arr1,size1,arr2,size2,&mergedsize);
	printf("Merged array");
	for(int i=0;i < mergedsize;i++)
	{
		printf("%d",mergedarray[i]);
	}
}
int* mergearray(int* arr1,int size1,int* arr2,int size2,int* mergedsize)
{
	*mergedsize = size1 + size2;
	int* mergedarray = (int*)malloc((*mergedsize) + sizeof(int));
	for(int i=0;i < size1;i++)
	{
		mergedarray[i] = arr1[i];
	}
	for(int i=0;i < size2;i++)
	{
		mergedarray[size1 + i] = arr2[i];
	}
	return mergedarray;
}