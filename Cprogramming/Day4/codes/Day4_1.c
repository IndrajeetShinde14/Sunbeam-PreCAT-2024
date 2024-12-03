#include<stdio.h> 
int main()
{
    /*
        signed 
        unsigned 
        short 
        long 
    
    */
    signed int num = -2147483648;
    //by default it is considered as signed 
    printf("%d",num); 
    /*
            int => 4 bytes ( 32 bits )
            ( 2 to the power 32 - 1 ) - 1
            ( 2 to the power 31 ) - 1 
            2,14,74,83,647 => max range
            -2,14,74,83,648 => min range 
    */
    return 0;
}
