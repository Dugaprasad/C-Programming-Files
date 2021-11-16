#include<stdio.h>
int main()
{
	 int x = 34;
	 float Y = 38;
	 
	 void *ptr = NULL;
	 printf("Size of the void *ptr = %d/n ,Sizeof(ptr)");
    
	ptr = &X;
	
	printf("Integer value using void pointer = %d", *(int *)ptr);
	
	ptr = &Y;
	
	printf("\nFloat value using void pointer = %f", *(Float *)ptr);
	
	return 0;
}
