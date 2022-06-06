//a program to find whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],flag[50];
	int i,temp,l,result;
	printf("enter string:");
	scanf("%s",a);
	strcpy(flag,a);
	l=strlen(a);
	for(i=0;i<=(l/2);i++,l--)
	{
		temp=a[i];
		a[i]=a[l-1];
		a[l-1]=temp;
	}
	result=strcmp(flag,a);
	if(result==0)
		printf("palindrome");
	else
		printf("not a palindrome");
}
