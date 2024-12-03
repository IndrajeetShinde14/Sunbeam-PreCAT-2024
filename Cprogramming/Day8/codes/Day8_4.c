#include<stdio.h> 
int main()
{
    //typdef 
    //alias => nickname 

    int a;  
    typedef int INTEGER;
    int c; 
    INTEGER x;

    size_t y;   

    enum color 
    {
        RED,BLUE,GREEN 
    };
    enum color c1;
    typedef enum color e_c;
    e_c c2;     

    return 0;
}