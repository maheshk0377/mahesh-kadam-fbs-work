#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	
	 printf("Enter a String:");
	 fgets(str,sizeof(str),stdin);
	 str[strcspn(str,"\n")] = '\0';
	 for(int i= 0;str[i] != '\0';i++)
	 {
	 	if(str[i] ==' ')
	 	{
	 		str[i] = '@';
		 }
	 }
	 printf("After Update String: %s\n",str);
}