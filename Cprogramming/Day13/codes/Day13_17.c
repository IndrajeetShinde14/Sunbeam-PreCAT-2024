#include<stdio.h> 
void fun(int *p); 
int main()
{
    int n = 10; 
    printf("Before fun call %d \n",n); //10 
    fun(&n);    
    printf("After fun call %d \n",n); //10    
    return 0;
}
void fun(int *p)
{
     * p++; 
    //printf("inside the function %d \n",*p++);//10  
     printf("inside the function %d\n",*p);//Garbage 
}


// #include<stdio.h> 
// void fun(int *p); 
// int main()
// {
//     int n = 10; 
//     printf("Before fun call %d \n",n); //10 
//     fun(&n);    
//     printf("After fun call %d \n",n); //11   
//     return 0;
// }
// void fun(int *p)
// {
//      ++*p; 
// }