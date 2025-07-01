#include<stdio.h>
int divisible(int* );
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	divisible(&n);
}
int divisible(int* num)
{
	if(*num % 3 ==0 && *num % 5 ==0){
		printf("Divisible by both\n");
	} else if(*num %3==0){
		printf(" Divisible by 3 but not by 5\n"); }
		else if (*num % 5 ==0){
			printf("Divisible by 5 but not by3\n\n");
		}else {
			printf("Divisible by none\n");
		}
	}
	
