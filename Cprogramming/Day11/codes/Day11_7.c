#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr; // declaration of pointer      
    //ptr is a pointer to a integer 
    //ptr is pointer which will store address of int variable 
    ptr = &num; // referencing operation 

    printf("num = %d\n",num);//10
    printf("&num = %u\n",&num);//100 

    printf("ptr = %u\n",ptr); //100 
    printf("&ptr = %u\n",&ptr); //500 
    return 0;
}
/*
    It is not compatible with unsigned int.

    int *p = 100; 

*/