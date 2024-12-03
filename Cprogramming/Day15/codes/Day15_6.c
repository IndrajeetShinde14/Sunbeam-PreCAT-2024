#include<stdio.h> 
//int arr[3][3];
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; //2D array
   
    /*
        arr 

                   [0]     [1]    [2]
         [0]        1       2      3 
         100       100     104    108  

         [1]        4       5      6 
         112       112     116    120 

         [2]        7       8      9 
         124       124     128    132       

            arr[2][1] => 8 ( array notation )

            *(*(arr + 2) + 1 ) => 8 ( pointer notation ) 

    */ 

    int row,col; 
    for(row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col<3 ; col++)
        {
            printf("%u ",&arr[row][col]); 
        }
        printf("\n"); 
    }

    printf("\n\n");

    int *ptr[3] = {(int*)arr ,(int*)arr + 1 ,(int*)arr + 2};
    //             100 , 104           108    

     //array notation 
    // printf("%u ",ptr[0]); //100 
    // printf("%u ",ptr[1]); //104 
    // printf("%u ",ptr[2]); //108       
    
    //pointer notation 
    //printf("%u ",*(ptr + 0));//100
    //printf("%u ",*(ptr + 1));//104 
    //printf("%u ",*(ptr + 2));//108 
    
    //printf("%u ",*(*(ptr + 0) ) );//*100 => 1 
    //printf("%u ",*(*(ptr + 1) ) );//*104 => 2 
    //printf("%u ",*(*(ptr + 2) ) );//*108 => 3 
    
    printf("%u ",*(ptr + 0) + 1  );// 104 
    printf("%u ",*(*(ptr + 0) + 1 )  );//*104 => 2 => => pointer notation   
    printf("%d ",ptr[0][1]); //2  => array notation 
    return 0;
}
