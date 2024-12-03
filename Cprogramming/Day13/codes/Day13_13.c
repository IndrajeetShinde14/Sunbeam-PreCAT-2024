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

    // pointer notation 

    // printf("%d ",*(ptr + 0)); //10 
    // printf("%d ",*(0 + ptr)); //10
    // printf("%d ",*(ptr + 1 - 1)); //10     
    
    //printf("%d ",ptr[0]); //10 
    /*
         array notation            pointer notation  
            ptr[0]         ==>      *(ptr + 0)  
    
    */
    //printf("%d ",0[ptr]); //10 
    //printf("%d ",ptr[1-1]); //10 

    //printf("%d ",*ptr + 10); 
    //             10 + 10 => 20  
    /*
    
            *ptr 
            valueat(ptr)
            valueat(100)
            10 
    
    */
    printf("%d ",ptr[-1]); //G
    /*
            ptr[-1]
            *(ptr + -1)
            *(ptr - 1)
            *(100 - 1)
            *(100 - 1 * 4)
            *(96)
            valueat(96)
            Garbage 
    
    */
    return 0;
}
/*
        ptr + 10 => pointer arithmatic 

        *ptr + 10 => 10 + 10 => 20 

*/
