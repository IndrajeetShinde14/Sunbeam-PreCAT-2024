#include<stdio.h> 
void sumpro(int a , int b); 
extern int ps,pp; // declaration   
int main()
{

    int a = 10 , b = 4; 
    sumpro(a,b); 
    printf("\n ps=%d pp=%d",ps,pp); 
    return 0;
}
int ps,pp; //defination (global variable)  

void sumpro(int a , int b)
{
    ps = a + b; //14 
    pp = a * b; //40 
}

