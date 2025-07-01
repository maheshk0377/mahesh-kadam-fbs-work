#include<Stdio.h>
int printn(int*);
void main()
{
	int no = 100;
	printn(&no);

}
int printn(int* no)
{		
		int i=1;
		while ( i <= *no)
	{
		printf("%d\t",i);
		i++;
	}
	
}