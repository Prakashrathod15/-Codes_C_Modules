#include<stdio.h>
int print();  // declartion
void display(int);
int show(int);
void nothing();
void main()  // os call main
{
	
   // 1.return something get nothing
   int a = print();	// call 
   printf("a : %d",a);
   // 2.return nothing & get something
   display(1);
   // 3.return something & get something
   int b = show(4);
   printf("\n b : %d",b);
   // 4.return nothing & get nothing
   nothing();
		
}
int print() // function defination 
{
	return 1;
}
void display(int a)
{
	printf("\n value of a is : %d",a);
}
int show(int a)
{
	return a+1;
}
void nothing()
{
	printf("\nKuch bhi nhi ");
}
