//finding whether a number is strong or not

#include<stdio.h>
int fact(int a)
{	int i,mul=1;
	for(i=1;i<=a;i++)
		mul=mul*i;
	return mul;
}
int main()
{	
	int i,r,j,sum=0,n;
	printf("enter a number:");
	scanf("%d",&n);
	for(j=n;n>0; )
	{
		r=n%10;
		n=n/10;
		sum=sum+fact(r);
	}
	if(sum==j)
		printf("strong");
	else
		printf("not a strong");
}
