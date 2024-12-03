#include<stdio.h> 
int main()
{
    int x; // variable declaration 
    int num = 10; // variable decln + init 
    printf("num = %d\n",num); //10 
    num = 20; // assignment     
    printf("num = %d\n",num); //20 
    num = 100; 
    num = -200; 
    printf("num = %d\n",num); //-200 
    x = 500;   
    printf("x = %d\n",x); //500 
    return 0;
}
/*
    1. Assignment can be done multiple number of times 
    int num = 10; 
    num = 20; // assignment OK 
    num = 30; // assignment OK 


    2.Initialization can be done only once 
    int num = 10;  // NOT OK 
    int num = 20;  // NOT OK
    // compiler error  
*/