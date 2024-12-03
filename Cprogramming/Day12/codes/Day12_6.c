#include<stdio.h> 
int main()
{
    //pointer arithmatic 

    int num = 10; 
    int *ptr = &num; 
    printf("&num = %u\n",&num); //100 
    printf("ptr = %u\n",ptr); //100 

    ptr = ptr + 1; 
    /*
            ptr + n => 
            ptr + n * scale factor of ptr
            100 + 1 
            100 + 1 * 4 
            100 + 4 
            104   
    */
    printf("ptr+1 = %u\n",ptr); //104  

    ptr--; 
    /*
          ptr = ptr - 1 
              = ptr - 1 * scale factor of ptr 
              = 104 - 1 * 4 
              = 104 - 4 
              = 100 
    */
    printf("*ptr = %d\n",*ptr); //10 
    return 0;
}
/*
    int *ptr 
        ptr + 10 
        ptr + 10 * scale factor of ptr 
        ptr + 10 * 4 
        100 + 40 
        140 

    char *cptr
          cptr + 3        
          cptr + 3 * scale factor of cptr 
          100  + 3 * 1 
          103  
    double *dptr 
          dptr + 4   
          dptr + 4 * scale factor of dptr
          100 + 4 * 8 
          100 + 32 
          132         
*/
