#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num;// referencing operation 

    printf("num = %d\n",num); //10
    printf("*ptr = %d\n",*ptr); //10   
    //Dereference operator , //indirection operator ->  *
    /*
                *ptr 
               valueat(ptr)
               valueat(100) 
               10 
    */
    num = 20; 
    printf("num = %d\n",num); //20
    printf("*ptr = %d\n",*ptr); //20
    //*ptr => valueat(ptr) => valueat(100) => 20 

    *ptr = 30;   
    /*
            valueat(ptr)
            valueat(100)
                    ===> 30 
    */  
    printf("num = %d\n",num); //30
    printf("*ptr = %d\n",*ptr); //30

    *ptr = *ptr + 10; 
    //     valueat(ptr)
    //     valueat(100)
    //       30          +    10 
    //            40     

    //*ptr => valueat(ptr) ==> valueat(100) change to  40 
    printf("num = %d\n",num); //40
    printf("*ptr = %d\n",*ptr); //40
    return 0;
}
