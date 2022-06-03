//finding length of string without using library functions

#include<stdio.h>
#include<string.h>
int stringlength();
int main()
{	char a[30];
	int len;
	printf("enter a name:");
	scanf("%s",a);
	printf("name:%s\n",a);
	len=stringlength(a);
	printf("length of '%s':'%d'\n",a,len);
}
int stringlength(char x[])
{	int i=0,count=0;
	while(x[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
