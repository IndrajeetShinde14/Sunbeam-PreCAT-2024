#include<stdio.h> 
int main()
{
    // increment / decrement operator (++,--)

    /*
        increment => ++
        (increment the value inside the memory by 1 ) 

        decrement => -- 
        (decrement the value inside the memory by 1 ) 
        
    
    */   
    // int ans; 
    // int num = 2; 
    // ans = num; 
    // printf("ans=%d num=%d",ans,num); // 2 2  
    
    // int ans; 
    // int num = 2; 
    // ans = ++num; //pre-increment 
    // printf("ans=%d num=%d",ans,num); //  3 3 
    
    // int ans; 
    // int num = 2; 
    // ans = num++; //post-increment 
    // printf("ans=%d num=%d",ans,num); // 2 3 
    
    // int ans; 
    // int num = 2; 
    // ans = --num; //pre-decrement
    // printf("ans=%d num=%d",ans,num); //  1 1 
    
    int ans; 
    int num = 2; 
    ans = num--; //post-decrement
    printf("ans=%d num=%d",ans,num); //  2 1   
    


    return 0;
}