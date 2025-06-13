#include<stdio.h>
void main()
{
	int unit,totalpay;
	printf("Enter a bill unit: ");
	scanf(" %d", &unit);
	if(unit > 1 && unit <= 50)
	{	
		int perunit = 30;
		totalpay= unit * 30;
		printf("Total pay = %d your per unit =  %d",totalpay,perunit);
	}
	else if(unit > 51 && unit <= 150)
	{	
	int perunit = 40;
		totalpay= unit * 40;
		printf("Total pay = %d per unit = %d",totalpay,perunit);
	}
	else if(unit >= 151 )
	{	
		int perunit = 50;
		totalpay= unit * 50;
		printf("Total pay = %d per unit = %d",totalpay,perunit);
	}
	else
	{
		printf("Enter a valid unit");
	}
}
