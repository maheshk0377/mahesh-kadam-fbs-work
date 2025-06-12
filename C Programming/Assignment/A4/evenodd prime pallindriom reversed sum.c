#include<stdio.h>
void main()
{	
	int n;
	int num,reversed = 0,remainder,sum = 0,digit,orgno = num,revno = 0,flag = 0;
		printf("Enter a  number : ");
		scanf("%d",&num);
			printf("enter 1 to give prime number \n");
			printf("enter 2 to give pallindriom \n");
			printf("enter 3 to give sum of digits \n");
			printf("enter 4 to give reversed no \n");
			printf("enter 5 to give even or odd \n");
			printf("enter a choice 1. ,2 ,3 ,4 ,5 \n");
			scanf(" %d", &n);
		if(n == 1)
		{
			for(int i=2; i < num;i++)
			{
				if(num % i ==0)
				{
					flag = i;
					break;
				}
			}
			if (flag == 0)
			{
			printf("number is  prime");
			}
			else 
			{
				printf(" number is not prime");
			}
			
		}
		else if( n == 2)
		{
			while( num != 0)
			{
				remainder = num % 10;
				revno = revno * 10 + remainder;
				num = num / 10;
			}
			if(orgno == revno)
			{
				printf("number is pallindriom");
			}
			else
			{
				printf("number is not pallindriom");
			}
		}
		else if( n == 3)
		{
			while(num != 0)
			{
				digit = num % 10;
				sum = sum + digit;
				num = num / 10;
			}
			printf(" Sum of digits = %d\n",sum);
		}
		else if( n == 4)
		{
			while( num != 0)
			{
				remainder = num % 10;
				reversed = reversed * 10 + remainder;
				num = num / 10;
			}
			printf("Reversed num = %d\n",reversed);
		}
		else if( n == 5)
		if( num % 2 == 0 )
		{
			printf("number is even");
		}
		else
		{
			printf("number is odd");
		}
}