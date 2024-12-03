#include<stdio.h> 
//int arr[5];
int main()
{
    //int n1=1,n2=2,n3=3,n4=5,n5=5;  
    
    //arrays 
    
    int arr[5] = {10,20,30,40,50}; 
    /*
            array index starts from 0 to n-1 
        arr 



            11    22    33    44     55
            [0]   [1]   [2]   [3]    [4]  => index 
            100   104   108   112    116   

                                [ ] => subscript operator 
          
    */
    
    int index; 
    for(index = 0 ; index < 5 ; index++)
            printf("%u ",&arr[index]);  
    //The array name is treated as address of 0th element in any runtime expression        
    // name of array represents the base address 

    printf("\n%u ",*(arr + 0));//10 
    /*
                *(arr + 0 )
                *(100 + 0)
                *(100 + 0 * 4)
                *(100)
                valueat(100)
                10 
    */
    printf("\n%u ",*(arr + 1));//20 
    /*
           *(arr + 1)
           *(100 + 1)
           *(100 + 1 * 4)
           *(100 + 4)
           *(104)
           valueat(104)
           20 
    
    */

    return 0;
}
