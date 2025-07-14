#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int index,len,i;
	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0';
	printf("Enter index to remove: ");
	scanf("%d",&index);
	len = strlen(str);
	if(index < 0 || index >= len)
	{
		printf("Invalid index! It must be between 0 and %d\n", len - 1);
		
	}
	for(i = index;i < len;i++)
	{
		str[i] = str[i + 1];
	}
	printf("String after removing character at index %d: :%s\n",index,str);
}