#include<stdio.h> 
int fun(void); 
int main()
{
    int res = fun( ); 
    printf("res = %d",res);    
    return 0;
}
int fun(void)
{
     int r; 
     r = 1,2,3,4; 
     return r; 
    //return (10,20,30);  
    //return 10,20;
    //return 20; 
    //return 10; 
}