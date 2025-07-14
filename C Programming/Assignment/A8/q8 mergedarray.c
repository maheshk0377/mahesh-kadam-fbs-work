#include<stdio.h>
void mergearray(int a[],int b[],int merged[],int ar1,int ar2);
void displayarray(int arr[],int si);
void main()
{
		int a[100],b[100],merged[100],a1,a2;
	printf("Enter Number of Element in array 1:");
	scanf("%d",&a1);
	printf("Enter %d Elements in array:",a1);
	for(int i=0;i < a1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Number of Element in array 2:");
	scanf("%d",&a2);
	printf("Enter %d Elements in array:",a2);
	for(int i=0;i < a2;i++)
	{
		scanf("%d",&b[i]);
	}
	mergearray(a,b,merged,a1,a2);
	printf("Merged Array is:");
	displayarray(merged , a1 + a2);
}
void mergearray(int a[],int b[],int merged[],int ar1,int ar2)
{
	int i;
	for(i= 0;i < ar1;i++)
	{
		merged[i] = a[i];
	}
	for(int j = 0;j < ar2;j++)
	{
		merged[i++] = b[j];
	}
}
void displayarray(int arr[],int si)
{
	for(int i = 0;i < si;i++)
	{
		printf("%d ",arr[i]);
	}
}