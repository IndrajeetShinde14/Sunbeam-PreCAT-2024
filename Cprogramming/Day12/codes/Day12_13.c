#include<stdio.h> 

int main( )
{
    const int num = 10;
    const int num2 = 20;
    //const int *ptr = &num;  
//ptr is a non-constant pointer pointing to a constant integer variable     
    //int const *ptr = &num;  
    const int const *ptr = &num;  
    
    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); //10 
    //*ptr = 20; 
    ptr = &num2; // OK  
    printf("*ptr = %d\n",*ptr); //20 
    return 0; 
}