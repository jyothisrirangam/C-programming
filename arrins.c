//program to insert a element in particular index of array

#include<stdio.h>
int main()
{
	int i,arr[50],e,key,loc;
	printf("how many elements:");
	scanf("%d",&e);
	for(i=0;i<e;i++)
	{
		printf("enter element for index %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the element u want to insert:");
	scanf("%d",&key);
	printf("enter the location where u want to insert:");
	scanf("%d",&loc);
	for(i=e-1;i>=loc;i--)
		arr[i+1]=arr[i];
	arr[loc]=key;
	for(i=0;i<=e;i++)
		printf("%d ",arr[i]);
}
