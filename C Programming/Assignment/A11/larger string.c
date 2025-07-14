#include<stdio.h>
int stringlength(char str[]);
void main()
{
	char str1[100],str2[100];
	int len1,len2;
	
	printf("Enter first string:");
	gets(str1);
	printf("Ente second string:");
	gets(str2);
	len1=stringlength(str1);
	len2=stringlength(str2);
	
	if(len1 > len2)
	{
		printf("Larger string is:%s\n",str1);
	}
	else if(len2 > len1)
	{
		printf("Larger string is:%s\n",str2);
	}
	else
	{
		printf("Both strings are of equal length.\n");
	}
}
int stringlength(char str[])
{
	int length = 0;
	while(str[length] != '\0')
	{
		length++;
	}
	return length;
}