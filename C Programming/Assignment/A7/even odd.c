#include<stdio.h>
void main()
{
	int arr[100],n,i;
	printf("Enter number of elements in Array:");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Even number in the array are: \n");
	for(i = 0;i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\n Odd numbers in the array are: \n");
	for(i = 0;i < n;i++)
	{
		if(arr[i] % 2 !=0)
		{
			printf("%d ",arr[i]);
		}
	}
}