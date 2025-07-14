#include<stdio.h>
#include<string.h>
void main()
{
	char str[100], remove[100];
	int i, j = 0;
	printf("Enter a String:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0';
	for(i = 0;str[i] !='\0';i++)
	{
		if(i % 2 == 0)
		{
		 	remove[j++] = str[i];
		}
	}
	remove[j] ='\0';
	printf("String After Removing Character at odd indices: %s\n",remove);

}