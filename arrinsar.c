//a program to insert array into another array

#include<stdio.h>
int main()
{
	int i,arr[50],arr2[50],e,key,loc,k;
	printf("how many elements:");
	scanf("%d",&e);
	for(i=0;i<e;i++)
	{
		printf("enter element for index %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("enter how many elements u want to insert:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{	printf("enter the elements u want to insert:");
		scanf("%d",&arr2[i]);
	}
	printf("enter where do u want to insert:");
	scanf("%d",&loc);
	for(i=0;i<k;i++)
		arr[e+i]=arr[loc+i];
	printf("\n");
	for(i=0;i<k;i++)
		arr[loc+i]=arr2[i];
	for(i=0;i<e+k;i++)
		printf("%d ",arr[i]);
}
