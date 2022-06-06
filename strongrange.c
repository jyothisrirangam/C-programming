//finding strong numbers within given range

#include<stdio.h>
int fact(int a)
{	int i,mul=1;
	for(i=1;i<=a;i++)
		mul=mul*i;
	return mul;
}
int main()
{	
	int i,r,j,sum,n;
	printf("enter a number as range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	sum=0;
		for(j=i;j>0; )
		{
			r=j%10;
			j=j/10;
			sum=sum+fact(r);
		}
		if(sum==i)
			printf("%d\t",sum);
	}
}
