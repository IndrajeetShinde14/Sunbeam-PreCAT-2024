#include<stdio.h> 
int main()
{
    const int num2 = 20; 
    const int num = 10; 
    const int * const ptr = &num;    
//ptr is constant pointer pointing to a constant integer variable 
    //const int const * const ptr = &num;  // OK   
    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); //10     
    num = 20; // NOT OK 
    *ptr = 20; // NOT OK 
    ptr = &num2; // NOT OK 
    return 0;
}