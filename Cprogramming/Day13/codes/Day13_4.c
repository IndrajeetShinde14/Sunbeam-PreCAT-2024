#include<stdio.h> 
//int arr[5];
int main()
{
    //int n1=1,n2=2,n3=3,n4=5,n5=5;  
    
    //arrays 
    
    int arr[5] = {11,22,33,44,55}; 
    /*
            array index starts from 0 to n-1 
        arr 



            11    22    33    44     55
            [0]   [1]   [2]   [3]    [4]
            100   104   108   112    116   

                                [ ] => subscript operator 
           arr[0] => 11
           arr[3] => 44   
    */
    arr[0] = -22; 
    arr[3] = 100;   
    //array notation 
    printf("%d ",arr[0]); //-22  
    printf("%d ",arr[3]); //100  

    // int index; 
    // for(index = 0 ; index < 5 ; index++)
    //         printf("%d ",arr[index]);  
    return 0;
}
/*
    memory allocation is done at compile-time   
            (statically)

        int arr[100] = {1};  // 100 * 4 => 400 bytes 

        
         
*/