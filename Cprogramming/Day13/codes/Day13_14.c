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
    
    int *ptr1 = &arr[4]; // 116 
    int *ptr2 = &arr[0]; // 100 
    int ans; 
    ans = ptr1 - ptr2; 
    /*
            ptr1 – ptr2 = 
            
            => (ptr1 – ptr2) / scale factor of ptr1
               (116 - 100) /  4 
                 16  / 4 
                     4 
    */
    printf("%d ",ans); // 4
    return 0;
}
