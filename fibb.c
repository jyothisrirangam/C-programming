//fibonocci series

#include<stdio.h>
int main()
{   int a=0,b=1,c,n,i;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d\t",a);
    printf("%d\t",b);
    for(i=2;i<n;i++)
    {
       c=a+b;
       printf("%d\t",c);
       a=b;
       b=c;
       
    }
}
