//checking whether a number is prime or not

#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("not a prime");
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("prime");
}
