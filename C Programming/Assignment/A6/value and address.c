#include<stdio.h>
void main()
{
	int a=10;
	int* ptr=&a;
	printf("%d value of a:%d",a);
	printf("\n%u address of a:%d",&a);
	printf("\n value of ptr:%d ", ptr);
	printf("\n address of *ptr:%d",*ptr);
	*ptr=30;
	printf("\nvalue of *ptr: %d", a);
	printf("\nsize of int(int): %d");
		printf("\nsize of char(char): %d");
			printf("\nsize of double(double): %d");
				printf("\nsize of int(int*): %d");
					printf("\nsize of char(char*): %d");
						printf("\nsize of double(double): %d");
}