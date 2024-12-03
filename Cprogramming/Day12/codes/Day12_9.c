#include<stdio.h> 
void fun(int *p); 
int main()
{
    int n = 10;
    printf("Before function call %d\n",n); //10 
    fun(&n); 
    printf("After function call %d\n",n); //20  
    return 0;
}
void fun(int *p)
{
    *p = 20; 
}