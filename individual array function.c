#include<stdio.h>
int main()
{
	int cgpa[] = {6, 8, 9, 4};
	printf("CGPA of 2nd and 4th student is: ");
	show(cgpa[1], cgpa[3]);
	return 0;
}
void show(int cgpa2, int cgpa4)
{
	printf("%d ",cgpa2);
	printf("%d ",cgpa4);
}
