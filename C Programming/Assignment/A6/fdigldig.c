#include<stdio.h>
void fdigldig(int *no);
void main()
{
  int no = 12345;
  fdigldig(&no);
  
  
}
void fdigldig(int* no)
{
	int rem,sum;
	int ldigit= *no % 10;
	while( *no > 0)
	{
		rem = *no % 10;
		*no = *no / 10;
	}
		sum = ldigit + rem;
	printf("%d + %d = %d",rem, ldigit,sum);

}