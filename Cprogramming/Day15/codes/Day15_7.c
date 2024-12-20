#include<stdio.h> 

int main( )
{
    int arr[3][4] = {{1,2,3,4},{10,20,30,40},{11,22,33,44}}; 
    int(*ptr)[4] = arr; 
    //ptr is a pointer to the block of 4 int values 
    /*
        scale factor 
        number of cols  * size of datatype 
            4           *   4 
                    16  
    */ 
    int row,col; 
    for(row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col<4 ; col++)
        {
            printf("%u ",&arr[row][col]); 
        }
        printf("\n"); 
    }  
    printf("\n"); 

    //outer address 
    // printf("%u ",ptr + 0); //400 

    // printf("%u ",ptr + 1 ); //416 
    // /*
    //         ptr + 1 
    //         ptr + 1 * scale factor of ptr 
    //         400 + 1 * 16 
    //         416 
    // */
    // printf("%u ",ptr + 2 ); //432 

    //inner address 
    //printf("%u ",*(ptr + 0) );//400
    //printf("%u ",*(ptr + 1) );//416 
    //printf("%u ",*(ptr + 2) );//432

    //printf("%u ",*(ptr + 0) + 1 );//404  

    //pointer notation 
    //printf("%u ",*(*(ptr + 0) + 1 ) );//*404 => 2   

    //array notation 
    //printf("%d ",ptr[0][1]); // 2 
    
    //printf("%d ",ptr[2][1]); //22 
    /*
            ptr + 2 => 432 //outer address 
            *(ptr + 2) => 432 // inner address 
            *(ptr + 2) + 1 => 436 
            *(*(ptr + 2) + 1 )=> 22 
            ptr[2][1] => 22  
    */
    printf("%u ",ptr[2][-3] );//20 
    /*
            ptr + 2 => 432 
            *(ptr + 2) => 432 
            *(ptr + 2) - 3 => 432 - 3 
                           => 432 - 3 * 4 
                           => 432 - 12 
                           => 420 
            420
            *420                  
    */ 
    return 0; 
}