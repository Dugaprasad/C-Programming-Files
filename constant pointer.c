#include<stdio.h>
int main()
{
	 int a = 900;
	 int b = 230;
	 
	 int * const ptr = &a;
	 
	 printf("Value of a %d , *ptr");
	 
	 *ptr = &b;
	 return 0;
}
