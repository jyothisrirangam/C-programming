#include<stdio.h>
int gcd();
int lcm();
void main()
{	int a,b,g,l;
	printf("enter value for a:");
	scanf("%d",&a);
	printf("enter value for b:");
	scanf("%d",&b);
	g=gcd(a,b);
	l=lcm(a,b);
	printf("lcm=%d,gcd=%d\n",l,g);
}
int gcd(int a,int b)
{	int small,g,i;
	if(a>b)
		small=b;
	else
		small=a;
	for(i=1;i<=small;i++)
	{
		if(a%i==0 && b%i==0)
			g=i;
	}
	return g;
}
int lcm(int a,int b)
{	int l;
	l=(a*b)/gcd(a,b);
	return l;

}
