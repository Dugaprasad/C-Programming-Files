#include<stdio.h>
int main()
{
	 int X = 20, Y = 40;
	 int *p1, *p2;
	 
	 p1 = &X;
	 p2 = &Y;
	 
	 printf("Before swapping, X = %d and Y = %d", *p1, *p2)
	 
	 *p1 = *p1 + *p2;
	 *p2 = *p1 - *p2;
	 *p1 = *p1 - *p2;
	 
	 printf("\nAfter swapping, X = %d and Y = %d", *p1, *p2);
	 return 0;
}
