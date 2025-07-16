#include<stdio.h>
void swapposition(int arr[],int po1,int po2);
void main()
{
	int arr[10];
	int x=3,y=5;
	printf("Enter elements in array:\n");
	for(int i =0;i < 10;i++)
	{
			scanf("%d",&arr[i]);
	}
	
	
	printf("Orignal array before swap: ");
	for(int i=0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	swapposition(arr,x,y);
	printf("\narray after swapping position 3 and 5: ");
	for(int i=0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}

}
void swapposition(int arr[],int no1,int no2)
{
		
		int temp;	
			temp = arr[no1];
			arr[no1] = arr[no2];
			arr[no2] = temp;

		
}