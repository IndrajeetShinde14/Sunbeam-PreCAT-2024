#include<stdio.h> 
int main()
{
    int num = 10; 
    int num2 = 20; 
    int *ptr = &num; // referencing operation 

    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); //10
    printf("ptr = %d\n",ptr); //100 
    //valueat(ptr) =>valueat(100) => 10  
    printf("&num = %u\n",&num); //100  

    ptr = &num2; //referencing operation 
    printf("&num2 = %u\n",&num2);// 200  
    printf("ptr = %u\n",ptr); // 200
    printf("*ptr = %d\n",*ptr); //20  
    /*
            *ptr 
            valueat(ptr)
            valueat(200)
            20 
    */
     *ptr = 30; 
     /*
            *ptr 
            valueat(ptr)
            valueat(200)
                    ===> 30 
     
     */
    printf("*ptr = %d\n",*ptr); //30 
    printf("num2 = %d\n",num2);// 30 
    return 0;
}