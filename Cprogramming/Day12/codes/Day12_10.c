#include<stdio.h> 
void fun(int *p); 
int main()
{
    int n = 10;
    int *ptr = &n; 
    printf("Before function call %d\n",n); //10 
    fun(ptr); 
    printf("After function call %d\n",n); //50  
    return 0;
}
void fun(int *p)
{
    *p = 50; 
}