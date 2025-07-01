#include<stdio.h>
void main()
{
	int arr[100],n,i;
	int max,min;
	printf("Enter number of Element in Array:");
	scanf("%d",&n);
	printf("Enter %d Elements: \n",n);
	for(i = 1;i < n; i++)
	{
		scanf("%d",&arr[i]);
		max = min = arr[i];
	}
	for( i = 1; i < n; i++)
	{
		if(arr[i] > max)
		max = arr[i];
		if(arr[i] < min)
		min = arr[i];
	}
	printf("Maximum Element =  %d\n",max);
	printf("Minimun Element = %d\n",min);
}