#include<stdio.h>
void main()
{
	char str[100],ch;
	int i,found = 0;
	printf("Enter a String:");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter a character to search: ");
	scanf(" %c",&ch);
	for(i = 0;str[i] != '\0';i++)
	{
		if(str[i] == ch)
			{
				printf("Charcter '%c' found at position %d\n",ch,i);
				found = 1;
			}
	}
	if(!found)
		{
			printf("Character '%c' not found in the string.\n",ch);
		}
}