//a program by using static keyword

#include<stdio.h>
static int x=10;
void staticvalue();
int main()
{
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
	staticvalue();
	
}
void staticvalue()
{
	printf("static value in another function:%d\n",x);
}

