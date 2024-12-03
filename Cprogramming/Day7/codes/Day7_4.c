#include<stdio.h> 
int main()
{
    // printf("Hello world");
    // printf("Hello world");
    // printf("Hello world");
    // printf("Hello world");
    // printf("Hello world");

    //loops => while , for , do-while 

    // int i = 1; 
    // while(i<=5) // infinite loop 
    // //while(1<=5)=>while(T)=>while(1)
    // //while(1<=5)=>while(T)=>while(1)
    // //while(1<=5)=>while(T)=>while(1)
    // //while(1<=5)=>while(T)=>while(1)
    // //while(1<=5)=>while(T)=>while(1)
    // {
    //     printf("Hello world "); 
    // }

    // int i = 1; 
    // while(i<=5)
    // //while(1<=5)=>while(T)=>while(1)  
    // //while(2<=5)=>while(T)=>while(1)  
    // //while(3<=5)=>while(T)=>while(1)  
    // //while(4<=5)=>while(T)=>while(1)  
    // //while(5<=5)=>while(T)=>while(1)  
    // //while(6<=5)=>while(F)=>while(0)  
    // {
    //     printf("Hello world\n"); 
    //     i++;
    //     //++i;
    //     //i = i + 1;
    //     //i+=1;     
    // }
    // printf("\noutside the loop : %d",i); // 6 

    // int i = 1; 
    // while(i<=5)
    // {
    //     printf("%d ",i); //1 2 3 4 5    
    //     i++;
    
    // }
    // printf("\noutside the loop : %d",i); // 6 

    // int i = 1; 
    // while(i<=5)
    // {
    //     printf("%d ",i++); //1 2 3 4 5      
    // }
    // printf("\noutside the loop : %d",i); // 6 

    // int i = 1; 
    // while(i<=5)
    // {
    //     printf("%d ",++i); //2 3 4 5 6     
    // }
    // printf("\noutside the loop : %d",i); // 6 


    // int i = 1; 
    // while(i<=5);  // infinite loop 
    
    
    
    // {
    //     printf("%d ",i); 
    // }


    // while(1) //always true ( infinite loop )
    // //while(0) // false 
    // {
    //     printf("Hello world"); 
    // }

    // char ch = 0;  // 127 to -128 
    // while(ch++)
    // {
    //     printf("%d %c\n",ch,ch); 
    // }
    // printf("outside the loop %d",ch); 

    // char ch = 0;  // 127 to -128 
    // while(++ch)
    // {
    //     printf("%d %c\n",ch,ch); 
    // }
    // printf("outside the loop %d",ch); 
    // //-128 -127 -126 ........-1 0 1 2 3 4 ....127 


    // int i = 1 , j = 1; 
    // while(i<=10,j<=5)
    // {
    //     printf("i:%d j:%d\n",i,j); 
    //     i++; 
    //     j++; 
    // }

    int i = 1 , j = 1; 
    while(i<=5,j<=10)
    {
        printf("i:%d j:%d\n",i,j); 
        i++; 
        j++; 
    }
    return 0;
}