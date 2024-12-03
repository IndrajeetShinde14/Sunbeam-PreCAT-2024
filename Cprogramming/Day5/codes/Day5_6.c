#include<stdio.h> 

int main( )
{
    //by default it is signed 
    char ch = 128; // 127 to -128 
    printf("%d",ch); 
    return 0;  
}
/*
    -128 -127 -126 -125 ... 0 1 2 3 4 5 ...127 


    128 => -128 
    129 => -127 
    130 => -126  

*/