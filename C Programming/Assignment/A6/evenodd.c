#include<stdio.h>
void even(int *no);
void main() 
{
	int no = 10;
	even( &no);
	
	
}
 void even(int *no)
{
	if(*no % 2 == 0)
	printf("number is even %d",*no);
	else
		printf("number is odd %d",*no);

}

