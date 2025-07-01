#include<stdio.h>
void main()
{
	int arr[100],n,i,num,found = 0;
	printf("Enter a number of element in the array:");
	scanf("%d",&n);
	printf("Enter %d elemets\n",n);
	for(i = 0; i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to search:");
	scanf("%d",&num);
	for(i = 0;i < n;i++)
	{
		if(arr[i] == num)
		{
			found = 1;
			printf("Number %d found at posion %d (index % d)\n",num,i + 1,i);
			break;
		}
	}
	if(!found)
	{
		printf("Number %d Not found in Array,\n",num);
	}
}