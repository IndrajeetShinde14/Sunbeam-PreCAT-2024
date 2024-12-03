#include<stdio.h> 

int main( )
{
    int num = 10; 
    //printf("          %d",num); 
    // width specifier 
    //printf("%10d",num); // right justified 
    //                 1 0 
    // - - - - - - - - - -  

    //printf("%-10d",num); // left justified 
    // 1 0 
    // - - - - - - - - - - 
    
    //printf("%06d",num); // right justified 
    // 0 0 0 0 1 0   
    // - - - - - - 

    float fvar = 12.33; 
    // float => %f 

    //printf("%f",fvar); 

    //printf("%10.2f",fvar); // right justified 
    //           1 2 . 3 3   
    // - - - - - - - - - -  

    //printf("%-10.2f",fvar); // left justified 
    //  1 2 . 3 3 
    //  - - - - - - - - - - 

    //printf("%.2f",fvar);  // 12.33 

    printf("%.f",fvar);  // 12.33 => 12 (round-off)

    printf("Hello world"); 
    printf("Hello world"); 
    printf("Hello world"); 
    printf("Hello world"); 
    return 0; 
}

// MCQ => Twisters 