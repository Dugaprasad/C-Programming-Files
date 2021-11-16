#include<stdio.h>
int main()
{
	int a = 80;
	int *ptr = &a;
	
	printf("Address of a = %d", ptr);
	
	free(ptr);
	printf("\nAddress of a after de-allocation = %d", ptr);
	
	*ptr = NULL;
	return 0; 
}
