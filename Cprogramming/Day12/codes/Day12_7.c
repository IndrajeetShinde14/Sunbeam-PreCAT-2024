#include<stdio.h> 
int main()
{
    int num1 = 10; 
    int num2 = 20; 
    int *ptr1 = &num1; 
    int *ptr2 = &num2;
    int ans; 

    //Addition, multiplication and division of two pointers is not allowed
    //ans = ptr1 + ptr2; // NOT OK     
    //ans = ptr1 * ptr2; // NOT OK     
    //ans = ptr1 / ptr2; // NOT OK     
    //ans = ptr1 % ptr2; // NOT OK   

    //ans = ptr1 - ptr2; // OK 
    
    //ptr1 = ptr1 + 1; // OK 
    //ptr1 = ptr1 - 1; // OK 

    //Multiplication or division of any integer with pointer is not allowed.
    //ptr1 = ptr1 * 1; //NOT OK 
    //ptr1 = ptr1 / 1; //NOT OK 
    //ptr1 = ptr1 % 1; //NOT OK 
    //ptr1 = ptr1 + 1.5f; //NOT OK 

    ans = *ptr1 + *ptr2;  // OK 
    //      10  +  20 
    //        30 
    printf("ans = %d",ans); //30   
    return 0;
}