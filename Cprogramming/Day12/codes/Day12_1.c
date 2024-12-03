#include<stdio.h> 
int main()
{
    int num = 10;
    int *ptr = &num; // referencing operation 
    int **pptr = &ptr; // pointer to pointer
 //pptr is a pointer holding the address of  another int pointer 
 //pptr is a pointer which is storing the address of a pointer to integer        
    
    // printf("num = %d\n",num); //10
    // printf("&num = %u\n",&num); //100 
    // printf("ptr = %u\n",ptr); //100 
    
   
    printf("&ptr = %u\n",&ptr); //200 
    printf("pptr = %u\n",pptr); //200  
    printf("&pptr = %u\n",&pptr); //300  
    
    return 0;
}
/*
    int a = 10;
    int *p = &a; 
    int **p = &p;
    int ***pp = &p;    

*/