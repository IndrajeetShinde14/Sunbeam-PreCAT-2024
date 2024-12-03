#include<stdio.h> 
int main()
{
    //int *ptr; // wild pointer    
    //int *ptr = NULL; // NULL pointer 
    
    int num = 10; 
    float fvar = 12.3f; 
    double dvar = 10.3; 
    char ch = 'A';

    void *ptr = NULL; // generic pointer 

    ptr = &num; 
    printf("%d\n",*(int*)ptr); 

    ptr = &fvar; 
    printf("%.2f\n",*(float*)ptr);

    ptr = &ch; 
    printf("%c\n",*(char*)ptr);
    
    ptr = &dvar;  
    printf("%.2lf\n",*(double*)ptr);
    return 0;
}