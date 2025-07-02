#include<stdio.h>
void main()
{
	int amount = 10000, choice,money;
	char y;
do{	
printf("\nEnter a choice\n1. check you bank balance\n2. withdraw amount\n3. deposit amount\n");
	scanf("%d",&choice);
	if(choice == 1)
	{
		printf("Your Account Balance is %d",amount);
	}
	else if(choice == 2)
	{
		printf("Enter Withdraw Amount: ");
		scanf("%d",&money);
		if(money < 800 && money <= amount)
		{
		amount = amount  - money;
		printf("\nYour Successfully Withdraw Amount\n");
		printf("Your Account Balance After Withdraw = %d\n",amount);
		}else
		{
			printf("Please first check Balance In Account  Saving Min Balance is 500");
		}
	}
	else if(choice == 3)
	{
		printf("Enter Amount You Will Deposit In Your Account : ");
		scanf("%d",&money);
		amount = amount + money;
		printf("\nYour Amount Deposited Successfully:\n");
		printf("Your Account Balance After Deposit: %d\n",amount);
	}
	else
	{ 
	  printf("Invalid choice\n");
	}
	printf("\nDo you want to continue?(y/n): ");
	scanf("%s",&y);


}while( y == 'y' || y == 'Y');
printf("final Balance: %d\n",amount);
		
}