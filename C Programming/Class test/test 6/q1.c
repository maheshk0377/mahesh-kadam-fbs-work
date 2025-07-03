#include<stdio.h>

void main()
{
	int arr1[5];
	int arr2[5];
	int i,j;
	printf("Enter Element element in first array:");
	for(int i = 0; i < 5; i++ )
	{
	scanf("\n%d",&arr1[i]);
	}
		printf("Enter Element element in second array:");
	for(int i = 0; i < 5; i++ )
	{
	scanf("\n%d",&arr2[i]);
	}
	
	printf("Common Element ");
	for(i=0;i < 5;i++)
	{
		for(j=0;j < 5; j++)
		{
			if(arr1[i] == arr2[j])
			{
			printf("%d ",arr1[i]);
			break;
		}
	}
}
}