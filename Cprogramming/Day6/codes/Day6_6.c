#include<stdio.h> 
int main()
{
    //bitwise opr 
    // left shift opr and right shift opr 
    //  << , >> 
    //int ans = 10 << 2;
    /*
          0000 1010 
             <<2   
          0010 1000  ( 40 ) 

          left shift 
          multiply by 2 to the power n 
                10 * 2 to the power 2 
                10 * 4 
                40 
    */
    int ans = 10 >> 2;    
    /*
        right shift 
            0000  1010 
                >>2 
            0000  0010 ( 2 )
         divide by 2 to the power n    
                10 / 2 to the 2 
                10 / 4 
                  2  
    
    */
    
    printf("%d",ans);  
    return 0;
}