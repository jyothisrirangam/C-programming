//finding perfect numbers in given range

#include<stdio.h>
int main()
{   int j,n,i,sum;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {   sum=0 ;
    	for(j=1;j<i;j++)
            {
                if(i%j==0)
                    sum=sum+j;
            }
        if(sum==i)
                printf("%d\t",i);
    }
}
