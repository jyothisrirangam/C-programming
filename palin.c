//program to check whether a number is palindrome or not

#include<stdio.h>
int main()
{
	int i,j,n,r,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum*10+r;
	}
	if(sum==i)
		printf("palindrome");
	else
		printf("not a palindrome");
}
//for(i=n;n>0;)

