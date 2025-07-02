#include<stdio.h>
int discount(int,int,int);
int main()
{
	int price,ds,sellingprice;
	printf("Enter a price of book: ");
	scanf("%d",&price);
	discount(price,ds,sellingprice);
}
int discount(int p,int d,int sp)
{

	
	if (p > 1000)
	{
		d =p /  15;
	}
	else if( p < 1000 && p > 500)
	{
		d= p / 10;
	}
	else if ( p < 500 && p > 0)
	{
		d = p / 5;
	}
	else 
	{
		printf("No discount on this book");
		
	}
	sp = p - d;
	printf("Getting discount on book is :%d\n",d);
	printf("Book price getting discount = %d",sp);
}
