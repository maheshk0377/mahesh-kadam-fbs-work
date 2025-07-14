#include<stdio.h>
#include<string.h>

int main()
{
	char str[200];
	int i,world = 0;
	printf("Enter a String:");
	fgets(str,sizeof(str),stdin);
	
	str[strcspn(str,"\n")]='\0';
	
	for(i = 0;str[i] !='\0';i++)
	{
		if(!isspace(str[i]) && (i==0 || isspace(str[i - 1])))
		{
			world++;
		}
	}
	printf("Number Of Words In The String: %d\n",world);
return 0;
}