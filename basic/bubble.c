//Bubble sort

#include<stdio.h>
#include<time.h>
int main()
{	double time_spent=0;	//to find time
	int n,i,j,a[10],min;
	printf("number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)	//reading elements
	{
		printf("enter value for index %d:",i);
		scanf("%d",&a[i]);
	}
	clock_t start=clock();		//clock time starts here
	for(j=0;j<n;j++)			//loop for outer iterations
	{	for(i=0;i<(n-1-j);i++){	//loop for inner iterations by ignoring last element
			if(a[i]>a[i+1])	//keeping max num at last index
			{
				min=a[i+1];
				a[i+1]=a[i];
				a[i]=min;	
			}}
	}
	clock_t end=clock();		//clock time ends here
	time_spent=(double)(end-start)/CLOCKS_PER_SEC;
	printf("%f\n",time_spent);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);		
	}
}
