#include<stdio.h> 
//int arr[5];
int main()
{
    //int n1=1,n2=2,n3=3,n4=5,n5=5;  
    
    //arrays 
    //int arr[5] = {11,22,33,44,55}; // init list 
    //int arr[5] = {11}; // partial init  
    //int arr[5]; // local garbage ( garbage ) 
    //int arr[];  // not ok 
    //int arr[5] = {11,22,33,44,55,66,77}; 
    int arr[] = {11,22,33,44,55}; // init list 
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
    //array notation 
    // printf("%d ",arr[0]); //11 
    // printf("%d ",arr[3]); //44 

    int index; 
    for(index = 0 ; index < 5 ; index++)
            printf("%d ",arr[index]);  
    return 0;
}
