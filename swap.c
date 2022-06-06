//swapping 2 numbers 
#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	printf("a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("a=%d,b=%d\n",a,b);	//using 3rd variable
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d,b=%d\n",a,b);	//without using 3rd variable
}
