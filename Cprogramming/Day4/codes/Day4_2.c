#include<stdio.h> 
int main()
{
    unsigned int num = 4294967295;
    printf("%d ",sizeof(num)); 
    /*
            size => 4 bytes => 32 bits 
            ( 2 to the power 32 ) - 1 
            4294967295 => max range 
    */ 
   // unsigned int => %u 
   printf("%u ",num); 
    return 0;
}