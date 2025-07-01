#include<stdio.h>
void main()
{
	int arr[100],n,i ,j,isprime;
	printf(" Enter number of elements in array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("prime number in the array are:\n");
	for(int i = 0;i < n;i++)
	{
	if( arr[i] <= 1)
		continue;
		isprime = 1;
		for(j = 2;j <= arr[i] / 2;j++)
		{
			if(arr[i] % j ==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime)
		{
			printf("%d ",arr[i]);
		}
	}
}
	
