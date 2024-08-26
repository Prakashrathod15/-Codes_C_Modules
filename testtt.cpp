#include<iostream>
using namespace std;
int* create()
{
	int arr[3];    // array allocation of 3 
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;            /// main 
                                              
   return arr;
}
int main()
{ 
    int* arr = create();   
    
    for(int i = 0; i<3; i++)
    {
    	cout<<arr[i]<<endl;
	}
    
    return 0;
}

