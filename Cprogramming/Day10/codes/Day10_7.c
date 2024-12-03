#include<stdio.h> 
void sumpro(int a , int b); 
int main()
{
    sumpro(a,b); 
    //printf("\n ps=%d pp=%d",ps,pp); //not ok
    //ps and pp belong to sumpro function 
    //ps and pp are visible inside sumpro function 
    return 0;
}
void sumpro(int a , int b)
{
    int ps,pp; 
    ps = a + b; //14 
    pp = a * b; //40 
}