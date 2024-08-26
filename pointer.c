#include<stdio.h>
void main()
{
	int a = 4; // 4 
	printf("%d",&a);  // 6487580 - a
	// pointer - variable that store address of another variable 
	int* ptr = &a; 
	printf("\n%d",ptr); // 6487572
                           
    int p =3, q = 1;     
    printf("\nnn");
    printf("\nptr without star : %d",ptr);
    printf("\n*ptr with star : %d",*ptr);
    swapp(&p,&q);  // address 
    printf(a,b)
}
void swapp(int* p, int* q)
{
     // access a, b beacuase we have address - pointer 
}
