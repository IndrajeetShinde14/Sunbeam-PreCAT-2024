#include<stdio.h> 

// minimum of 3 numbers 
int main()
{
    int a,b,c; 
    printf("Enter the 3 numbers "); 
    scanf("%d%d%d",&a,&b,&c); 
    //              11  22  3 

    if(a<b && a<c)
        printf("min = %d",a);     
    else 
    {
        if(b<c)
          printf("min = %d",b); 
        else 
         printf("min = %d",c); 
    }
    return 0;
}
