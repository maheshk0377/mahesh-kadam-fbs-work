#include<stdio.h>
void main()
{
	int arr[5] = { 30, 10 ,50, 20, 40};
	int n = 5;
	printf("Orignal array: ");
	for( int i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(int i = 0; i < n - 1;i++)
	{
		for(int j = 0; j < n - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
printf("\nSorted Array (Ascending): ");
for(int i = 0;i < n;i++)
{
	printf("%d ",arr[i]);
}
}