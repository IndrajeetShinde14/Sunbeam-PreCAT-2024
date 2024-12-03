#include<stdio.h> 
int main()
{
    char ch = 'A'; 
    char *cptr = &ch; 
    char **cpptr = &cptr; 

    // printf("%d ",sizeof(ch)); // 1 byte 
    // printf("%d ",sizeof(cptr));// 4 bytes 
    // printf("%d ",sizeof(*cptr));// 1 byte  

    printf("%d ",sizeof(cpptr)); //4 bytes
    printf("%d ",sizeof(*cpptr)); //4 bytes
    printf("%d ",sizeof(**cpptr)); //1 byte  
    return 0;
}