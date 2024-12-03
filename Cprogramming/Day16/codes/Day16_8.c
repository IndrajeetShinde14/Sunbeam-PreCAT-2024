#include<stdio.h> 
#define SWAP(a,b,type) { type t = a; a = b; b = t; }

int main()
{
    float a,b; 
    a = 1.1; 
    b = 2.1; 
    SWAP(a,b,float); 
    /*
            { 
                
                float t = a; 
                a = b; 
                b = t; 
            }
    
    */
    printf("%.1f %.1f",a,b); 
    return 0;
}

