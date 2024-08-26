#include<stdio.h>
void main()
{
	int a = 4;
	int* ptr = &a;
	printf("\nvalue of a %d",a);
	printf("\n value of *ptr : %d",*ptr);
	*ptr = 5;
	printf("\nafter value of a %d",a);
	
}
