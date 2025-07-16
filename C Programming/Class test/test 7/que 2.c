#include<stdio.h>
int ispallindrome(char str[]);

void main()
{
	char str[100];
	printf("Enter a string:");
	gets(str);
	if(ispallindrome(str))
	{
		printf("The string is pallindrome.\n");
	}
	else
	{
		printf("The string is not a pallindrome.\n");
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
int ispallindrome(char str[])
{
	int i =0;
	int j= stringlength(str) - 1;
	while(i < j)
	{
		if (str[i] != str[j])
		{
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}