//program to find lcm and gcd of 5 numbers

#include<stdio.h>
int min(int a[])
{	int i,min;
	for(i=1,min=a[0];i<5;i++){
		if(a[i]<min)
			min=a[i];
		
	}
	return min;		
}
int max(int a[])
{	int i,max;
	for(i=1,max=a[0];i<5;i++){
		if(a[i]>max)
			max=a[i];
		
	}
	return max;		
}

int gcd(int x[])
{	int j,i,m,flag,g;
	m=min(x);
	for(j=1;j<=m;j++)
	{	flag=0;
		for(i=0;i<5;i++)
		{
			if(x[i]%j!=0)
				flag=1;
		}
		if(flag==0)
			g=j;
	}
	return g;
}
int lcm(int x[])
{	int l,i,j,m,k,flag;
	m=max(x);
	k=m;
	for(flag=0;flag==0;)
	{	
		for(i=0;i<5;i++)
		{
			if(m%x[i]!=0)
				flag=1;	
		}
		if(flag==0)
		{	l=m;
			flag=1;}
		else
		{	flag=0;
			m=m+k;}
	}
	return l;
}
int main()
{
	int a[5],i,l,g;
	for(i=0;i<5;i++)
	{
		printf("enter an element for index %d:",i);
		scanf("%d",&a[i]);
	}
	g=gcd(a);
	printf("gcd:%d\n",g);
	l=lcm(a);
	printf("lcm:%d\n",l);
}
