//a program to reverse string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,temp,l;
	printf("enter string:");
	scanf("%s",a);
	l=strlen(a);
	printf("%d\n",l);
	for(i=0;i<=(l/2);i++,l--)
	{
		temp=a[i];
		a[i]=a[l-1];
		a[l-1]=temp;
	}
	printf("reverse:%s\n",a);
}
