#include<stdio.h> 
int main()
{

    // printf("%d ",sizeof(10.33)); //double => 8 bytes
    // printf("%d ",sizeof(10.33f)); //float => 4 bytes
    // printf("%d ",sizeof(10.33F)); //float => 4 bytes   
       
    char ch; 
    //printf("%d ",sizeof(ch)); // 1 bytes 

    printf("%d ",sizeof('A')); //sizeof(65) => 4 bytes  
    //constant => character constant => integers 
    return 0;
}