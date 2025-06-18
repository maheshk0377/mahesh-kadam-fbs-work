#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Armstrong numbers from 1 to %d are:\n",n);
	for(int i = 1;i <= n;i++)
	{
		int num = i, sum = 0,digits = 0,temp;
		temp = num;
		while(temp > 0)
		{
			digits++;
			temp= temp / 10;
		}
		temp = num;
		while(temp > 0)
		{
			int digit = temp % 10;
			sum = sum + digit * digit * digit;
			temp = temp / 10;
		}
		if (sum == num)
		{
			printf("%d",num);
		}
	}
}
