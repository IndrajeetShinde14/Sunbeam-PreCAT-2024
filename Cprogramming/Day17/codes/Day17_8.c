#include<stdio.h> 
#pragma pack(1) 
// struct test 
// {
//     int a; // 4
//     char b; //1 
// }; // 5 
// 4 8 12 
// struct test 
// {
//     int a; // 4
//     char b; //1
//     int c; // 4  
// }; // 9 
// 4 8 12 16  
struct test 
{
    int a; // 4
    char b; //1
    double d1; //8 
    int c; // 4  
};//17 
// 8 16 24 32 

int main()
{
    printf("%d ",sizeof(struct test));   
    return 0;
}