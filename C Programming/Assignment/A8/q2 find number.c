#include<stdio.h>
int searchnumber(int arr[],int n,int findn);
void main()
{
	int arr[50],n,findn;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements:",n);
	for(int i =0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number to search ");
	scanf("%d",&findn);
	int searchn = searchnumber(arr,n,findn);
	if(searchn != -1)
	{
		printf("Number %d is found at  position %d (index %d)\n",findn,searchn + 1,searchn);
	}
	else
	{
		printf("Number %d not found in array: ",findn);
	}
	
}
int searchnumber(int arr[],int n,int findn)
{
	for(int i = 0;i < n;i++)
	{
		if(arr[i] == findn)
		{
			return i;
		}
	}
	return -1;
}