#include<stdio.h> 
int main()
{
    //nested loops 

    int i,j,k; 

    // for(i=1;i<=5;i++)//i=1,2,3,4,5,6 
    // {
    //     printf("for each i:%d",i); 
    //     for(j=1;j<=5;j++)//j=1 
    //     {
    //         printf("         j:%d",j);    
    //     }
    //     printf("\n\n"); 
    // }

    
    // for(i=1;i<=5;i++)//i=1,2,3  
    // {
    //     printf("for each i:%d",i); 
        
    //     for(j=1;j<=5;j++) //j=1 
    //     {

    //         printf("    \nfor each j:%d",j); 
    //         for(k=1;k<=5;k++)
    //         {
    //             printf("       k:%d",k);  
    //         }
    //         printf("\n"); 
    //     }
    //     printf("\n\n"); 
    // }

    for(i=1;i<=5;i++); 
    
    
    {
        printf("i:%d ",i); //6 
        
        for(j=1;j<=5;j++); 
        
        
        
        
        {

            printf("j:%d ",j);//6  
            for(k=1;k<=5;k++); 
            
            
            
            {
                printf("k:%d ",k);//6   
            }
            
        }
        
    }
    
    return 0;
}  