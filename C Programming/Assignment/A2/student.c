#include<stdio.h>
void main()
{
	float price,tprice,discount =0;
	char isstudent;
	printf("Enter price: ");
	scanf("%f", &price);
	printf("Are you student? (y/n): ");
		fflush(stdin);
	scanf( "%c", &isstudent);
			if(isstudent == 'y'|| isstudent == 'Y'){
	 			 if (price >=500) {
	  			discount = 0.20 * price;
}				else {
			discount = 0.10 * price;
		}
}			else {
			if (price >= 600) {
			discount = 0.15 * price;
		} 	else { 
			discount = 0;
               }
}
  tprice = price - discount;
  printf("Discount: %.2f\n",discount);
  printf("Paid Total price: %.2f\n",tprice);
}
