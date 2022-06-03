//printing prime numbers in given range

#include<stdio.h>
int main()
{
	int n,i,j,flag;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
	if(flag==0)
		printf("%d\t",i);
	}
}
