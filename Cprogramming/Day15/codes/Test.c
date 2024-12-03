// #include <stdio.h>
// int update1(int *p1)
// {
//     int value = *p1 ? ++*p1 : --*p1;
//     //          100 ? 
//     return value;//101 
// }
// int update2(int *p1)
// {
//     int value = *p1 ? --*p1 : ++*p1;
//     //          101 ? 100 
//     return value;//100 
// }
// int main(void)
// {
//     const int no = 100;
//     int *const no_ptr = &no;
//     printf(" %d ", update1(no_ptr) + update2(no_ptr));
//     //              101            +    100 
//     //                      201  
//     printf(" %d ", update2(no_ptr) + update1(no_ptr));
//     // Homework 
//     return 0;
// }

#include<stdio.h>
int main( void )
{
const int a = 10 , b = 20 ;
const int *  ptr = &a;
int * const ptr1 = &a;
printf("a = %d *ptr = %d ", a,*ptr);
ptr = &b;
*ptr1= b;
printf("a = %d *ptr = %d ", a,*ptr);
return 0;
}