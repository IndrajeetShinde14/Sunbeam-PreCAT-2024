#include<stdio.h> 

int main( )
{
    //logical AND => && 
    /*
                            && 
            opr1   opr2   result 
             1      0      0 
             0      1      0 
             1      1      1 
             0      0      0 

    */
    // int ans; 
    // int num1 = 1; 
    // int num2 = 2; 
    // ans = num1 && num2; 
    // //    (num1 && num2)
    // //     T   &&  T
    // //         T
    // //         1  
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2); 
    // //                                1   1   2    
    
    
    // int ans; 
    // int num1 = 1; 
    // int num2 = 0; 
    // ans = num1 && num2; 
    // //    (num1 && num2)
    // //     T   &&  F
    // //         F
    // //         0  
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2); 
    // //                                0   1   0    

    // int ans; 
    // int num1 = 0; 
    // int num2 = 1; 
    // ans = num1 && num2; 
    // //    (num1 && num2)
    // //      F   &&  XXX
    
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2); 
    // //                                0   0   1    

    //logical OR => || 
    /*
                            || 
            opr1   opr2   result 
             1      0      1 
             0      1      1 
             1      1      1 
             0      0      0 

    */
    // int ans; 
    // int num1 = 0; 
    // int num2 = 1; 
    // ans = num1 || num2; 
    // //    (num1 || num2)
    // //      F   &&  T
    // //         T 
    
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2); 
    // //                                1   0   1    

    // int ans; 
    // int num1 = 1; 
    // int num2 = 1; 
    // ans = num1 || num2; 
    // //    (num1 || num2)
    // //      T   ||  XXX
    // //         T 
    
    // printf("ans=%d num1=%d num2=%d",ans,num1,num2); 
    // //                                1   1   1    
    
    int ans; 
    int num1 = 0; 
    int num2 = 0; 
    ans = num1 || num2; 
    //    (num1 || num2)
    //      F   || F
    //          F

    printf("ans=%d num1=%d num2=%d",ans,num1,num2); 
    //                                0   0   0    
    
    return 0; 
}