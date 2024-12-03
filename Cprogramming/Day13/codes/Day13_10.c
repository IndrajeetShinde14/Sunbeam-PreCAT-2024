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
    
    int index; 
    // for(index = 0 ; index < 5 ; index++)
    //         printf("%u ",&arr[index]);  
    
    //printf("%u ",*arr); //valueat base-address 
    //*arr => valueat(arr) => valueat(100) => 10 

    //printf("%u ",*arr + 10); // 20  
    //            10  + 10 
    
    printf("%d ",arr[-1]); // garbage 
    /*
                arr[-1]
                *(arr + -1)
                *(arr - 1)
                *(100 - 1)
                *(100 - 1 * 4)
                *(100 - 4)
                *(96)
                valueat(96)
                Garbage 
    
    */
    
    return 0;
}

/*
        arr + 3 => 100 + 3 => 100 + 3 * 4 => 112 
        *(arr+3) => valueat(112)

        *arr + 3 
        10 + 3 => 13 
*/