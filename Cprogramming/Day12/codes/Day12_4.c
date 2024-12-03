#include<stdio.h> 

int main()
{
    int num = 10; 
    int *ptr = &num; 
    //*ptr = 20; 

    char ch = 'A'; 
    char *cptr = &ch; 
    //*cptr = 'B'; 

    float fvar = 11.3f; 
    float *fptr = &fvar; 

    double dvar = 10.3; 
    double *dptr = &dvar;  

    //printf("%d %c %.2f %.2lf",*ptr,*cptr,*fptr,*dptr); 
    
    //scale factor 
    printf("%d ",sizeof(*ptr));//4 bytes 
    printf("%d ",sizeof(*cptr));//1 bytes
    printf("%d ",sizeof(*fptr));//4 bytes
    printf("%d ",sizeof(*dptr));//8  bytes    
    return 0;
}
//printf("%d ",sizeof(ptr)); // size of pointer 
//printf("%d ",sizeof(*ptr)); // scale factor 

