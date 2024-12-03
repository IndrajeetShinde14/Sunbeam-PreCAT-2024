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

    printf("\n");

    //name of array represents base address 

    // printf("%u ",*(arr + 0) + 1 ); //104 
    // /*
    //         Inner add
    //         *(arr + 0) + 1 
    //           100  + 1 
    //           100 + 1 * 4 
    //           104 
    // */
    // printf("%u ",*(arr + 1) + 2 ); //120 

    // printf("%u ",*(arr + 2) + 0 ); //124 
    
    
    //printf("%d ",*(*(arr+0) + 1 ) ); //2 
    //printf("%d ",arr[0][1]); //array notation 


    //printf("%d ",*(*(arr + 1) + 2) );//6 
    //printf("%d ",arr[1][2]); // 6 => //array notation   

    //printf("%d ",*(*(arr + 2) + 0) );//7    
    //printf("%d ",arr[2][0]); //  =>array notation 

    /*
        array notation              pointer notation 
        arr[i][j]          ====>    *(*(arr+i)+j)
    
    */  
    //printf("%d ",arr[1][1]); // array notation  
    //printf("%d ",*(*(arr+1)+1)); //5 => pointer notation 
    
    //printf("%d ",**arr); //1 
    
    //printf("%d ", *(*(arr+0))); //1  
      printf("%d ",*arr[0] );//1 
      // arr[0] => *(arr+0) 
      //           *(*(arr+0)) => 1 
    return 0;
}
