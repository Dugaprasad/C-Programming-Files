#include<stdio.h>
int main()
{
	int size, i, loc;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d ",arr[i]);
	}
	printf("\nArray before delection with size &d: ",size);
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the location which should be deleted: ");
	scanf("%d",&loc);
	if(loc >= size+1)
	    printf("Deletion not possible!!");
	for(i=loc-1; i<size-1; i++)
	{
		arr[i] = arr[i+1];
	}
	size = size-1;
	printf("\nArray after deletion with new size %d: ",size);
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
