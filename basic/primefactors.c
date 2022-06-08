//prime factors of a given number

#include<stdio.h>
#include<time.h>
int prime(int);
int main()
{	double time_spent=0;
	clock_t start=clock();		//to find time
	int n,i,k;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("2 ");
		k=n/2;			//no primefactor will present b/w k to n
	}
	for(i=3;i<=k;i=i+2) 		//not an even number ,so we increment +2
	{
		if(n%i==0)
		{	prime(i);	
		}
	}
	clock_t end=clock();
	time_spent=(double)(end-start)/CLOCKS_PER_SEC;
	printf("\n%f\n",time_spent);
}
int prime(int n)
{	int i,flag=0;
	for(i=3;i<(n/2);i++)		//not a even number -started with 3,if is not divisible by 2- no need to check between n/2 to n
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("%d ",n);
}
