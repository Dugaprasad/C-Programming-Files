#include<stdio.h>
int main()
{
	int rows, col, i, j, sum=0;
	printf("Enter the number of rows: ");
	scanf("%d",rows);
	printf("Enter the number of columns: ");
	scanf("%d",&col);
	
	int arr[rows][col];
	printf("\nEnter the array elements:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nArray created by you:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<col; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	printf("\nSum of 2D array = %d", sum);
	return 0;
}
