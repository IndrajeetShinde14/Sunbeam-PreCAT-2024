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



            10    20    30    40     50
            [0]   [1]   [2]   [3]    [4]  => index 
            100   104   108   112    116   

                                [ ] => subscript operator 
          
    */
    
    int *ptr = arr; // pointer to 1D array 

    //printf("%u ",ptr); // 100 
    //printf("%u ",arr); // 100 

    printf("%u ",ptr + 0); // 100 
    /*
            ptr + n 
            ptr + n * scale factor of ptr 

            ptr + 0
            100 + 0 * 4 
            100 + 0 
            100  
    */ 
     printf("%u ",ptr + 1); // 104 
    /*
            ptr + n 
            ptr + n * scale factor of ptr 

            ptr + 1
            100 + 1 * 4 
            100 + 4 
            104  
    */   
    return 0;
}

