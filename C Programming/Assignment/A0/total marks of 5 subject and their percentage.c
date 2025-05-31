#include<stdio.h>
int main()
{
	float marathi,hindi,math,science,english,marks,percentage;
	marathi=10;
	hindi=20;
	math=30;
	science=40;
	english=50;
	marks=marathi+hindi+math+science+english;
	printf("Total marks of 5 subjects=%f",marks);
	percentage= (marks / 500) * 100;
	printf("\npercentage of 5 subjects=%f%%",percentage);
}