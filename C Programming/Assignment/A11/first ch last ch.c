#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],temp;
	int len;
	printf("Enter a String :");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	len = strlen(str);
	if(len < 2)
	{
		printf("String is too short to swap characters.\n");
	}
	else
	{
		temp = str[0];
		str[0] = str[len - 1];
		str[len - 1]  = temp;
		printf("New string after swapping first and last characters: %s\n",str);
	}
}