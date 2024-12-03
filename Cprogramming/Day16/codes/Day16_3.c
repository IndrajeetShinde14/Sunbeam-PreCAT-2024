#include<stdio.h>
#include<stdlib.h>
int main( void )
{
     
    //void* realloc(void *ptr , size_t size); 
    int i , cnt; 
    int *ptr; 
    ptr =(int*)calloc(3,sizeof(int)); //request 
    if(ptr == NULL) // check if it is available 
    {
          printf("Memory not allocated "); 
          exit(1);   
    }
    for(i=0 ; i<=2 ; i++) // use 
       ptr[i] = 10 * (i+1); //*(ptr+i)
    ptr = (int*)realloc(ptr,5 * sizeof(int)); 
    ptr[3] = 33;
    ptr[4] = 44;  // *(ptr + 4)
    for(i=0 ; i<=4 ; i++) // use 
       printf("%d ",ptr[i]);  
    free(ptr); // to avoid memory leakage 
    ptr = NULL; // to avoid dangling pointer    
    
    return 0;
}
/*
    int arr[10] = {1}; => 20 bytes 

    1.Static ( compile time )

    2. Dynamic  ( runtime )
*/