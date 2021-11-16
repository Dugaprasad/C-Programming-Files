#include<stdio.h>
int main()
{
	int size, i, item, loc;
	printf("\nEnter the array elements: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray before insertion and size = %d: ",size);
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the new value to be added: ");
	scanf("%d",&item);
	
	printf("\nEnter the location where the value should be added: ");
	scanf("%d",&loc);
	for(i=size-1; i>loc-1; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[loc-1] = item;
	size = size+1;
	printf("\nArray after insertion and new size = %d: ",size);
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
