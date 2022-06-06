//program to print armstrong numbers in given range

#include<stdio.h>
int main()
{	int i,j,n,r,sum;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	sum=0;
		for(j=i;j>0; )
		{
			r=j%10;
			j=j/10;
			sum=sum+(r*r*r);
		}
		if(sum==i)
			printf("%d\t",sum);
	}
}

