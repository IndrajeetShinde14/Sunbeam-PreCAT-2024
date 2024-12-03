#include<stdio.h> 
//int arr[5];
int main()
{
    //int n1=1,n2=2,n3=3,n4=5,n5=5;  
    
    //arrays 
    
    int arr[5] = {11,22,33,44,55}; 
    /*
            array index starts from 0 to n-1 
        


        &arr 

            arr 
            11    22    33    44     55
            [0]   [1]   [2]   [3]    [4]  => index 
            100   104   108   112    116   

                                [ ] => subscript operator 
          
    */
    
    int index; 
    
    printf("\n"); 

    int *ptr = arr;

    //printf("%d ",*ptr);//11  

    printf("%d ",++*ptr);//12 
    //printf("%d ",arr[0]);//12   
    
    printf("%d ",*++ptr);//22 

    printf("%d ",*ptr++ );//22   

    printf("%d ",*ptr); // 33
    return 0;
}
