#include<stdio.h>
void main()
{	
	int arr[100],n,i;
	printf("Enter the umber of elements in the array");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for(i = 0; i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternate array of the array are: \n");
	for(i = 0;i < n;i= i + 2)
	{
		printf("%d\n",arr[i]);
	}
}