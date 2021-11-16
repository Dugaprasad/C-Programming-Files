#include<stdio.h>
int main()
{
	 int size, i, temp, j;
	 printf("Enter the array size: ");
	 scanf("%d",&size);
	 
	 int arr[size];
	 printf("\nEnter the array contents:\n");
	 for(i=0; i<size; i++)
	 {
	 	scanf("%d",&arr[i]);
	 	
	 }
	 printf("\nArray before sorting: ");
	 for(i=0; i<size; i++)
	 {
	 	printf("%d ",arr[i]);
	 }
	 for(i=0; i<size-1; i++)
	 {
	 	for(j=0; j<size-1; j++)
	 	{
	 		if(arr[j] > arr[j+1])
	 		{
	 			temp = arr[j];
	 			arr[j] = arr [j+1];
	 			arr[j+1] = temp;
			 }
			
		 }
	 }
	 printf("\nArray after sorting: ");
	 for(i=0; i<size; i++)
	 {
	 	printf("%d ",arr[i]);
	 }
	 return 0;
}
