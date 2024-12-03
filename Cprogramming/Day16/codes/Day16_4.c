#include<stdio.h> 
int* fun(void); 
int main()
{
    int *p; 
    p = fun( );   
    printf("%d ",*p); //10 
    return 0;
}
int* fun(void)
{
    static int num = 10; 
    return &num; 
}

// #include<stdio.h> 
// int* fun(void); 
// int main()
// {
//     int *p; 
//     p = fun( );  // p is a dangling pointer 
//     printf("%d ",*p); 
//     return 0;
// }
// int* fun(void)
// {
//     int num = 10; //local variable 
//     return &num; 
// }
