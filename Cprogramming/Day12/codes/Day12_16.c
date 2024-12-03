#include<stdio.h> 
int main()
{
    int num = 10; 
    const int *ptr = &num;//discards const 

    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); //10 
    //*ptr = 20; 
    printf("*ptr = %d\n",*ptr); //20 
    num = 20;// OK  
    return 0;
}
// int main()
// {
//     const int num = 10; 
//     int *ptr = &num;//discards const 

//     printf("num = %d\n",num); //10 
//     printf("*ptr = %d\n",*ptr); //10 
//     *ptr = 20; 
//     printf("*ptr = %d\n",*ptr); //20 
//     //num = 20;//not OK  
//     return 0;
// }