#include<stdio.h> 
int main()
{
    // printf("%d ",10 & 5); //0 
    // printf("%d ",10 | 5); //15 
    // printf("%d ",10 ^ 5); //15     
    
    printf("%d ",~10); //-(n+1)=>-(10+1)=>-11 
    /*
            bitwise not opr ~
               10 
            0000  1010 
               ~ ( invert the bits )   
            1111  0101 

            1s Compliment => 0000 1010 
            2s Compliment =>         1 
            ---------------------------- 
                             0000  1011 => 11 

                             -11 

    */
    return 0;
}