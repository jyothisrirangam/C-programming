//program to show the scope of local and global variables

#include<stdio.h>
int x=100;
void globalvariable();
int main()
{
	int y=20;
	printf("x=%d,y=%d\n",x,y);
	x++;
	y++;
	printf("x=%d,y=%d\n",x,y);
	globalvariable();
	return 0;
}
void globalvariable()
{
	printf("x=%d",x);	//no error as x is globally declared and value is 101
	//printf("y=%d",y);	//error-because y is not declared
}
