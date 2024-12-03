#include<stdio.h> 
//int arr[5];
int main()
{
    //int n1=1,n2=2,n3=3,n4=5,n5=5;  
    
    //arrays 
    
    int arr[5] = {10,20,30,40,50}; 
    /*
            array index starts from 0 to n-1 
        


        &arr 

            arr 
            10    20    30    40     50
            [0]   [1]   [2]   [3]    [4]  => index 
            100   104   108   112    116   

                                [ ] => subscript operator 
          
    */
    
    int index; 
    for(index = 0 ; index < 5 ; index++)
        printf("%u ",&arr[index]);  
    printf("\n"); 

    printf("arr = %u\n",arr);   //100   
    printf("arr + 1 = %u\n",arr+1);//104
    printf("&arr + 1 = %u\n",&arr + 1);//120  
    /*
                &arr + 1 
                 100 + 1 
                 100 + 1 * 20 
                 120 
    
    */  
    return 0;
}
