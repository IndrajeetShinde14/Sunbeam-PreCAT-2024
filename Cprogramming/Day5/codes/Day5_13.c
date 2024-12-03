#include<stdio.h> 
int main()
{
    //printf returns the count printed on terminal 
    //int a; 
    // a = printf("Hello world"); 
    // printf("\n%d",a); //11 

    //a = printf("Hello "); 
    //printf("\n%d",a); //6 
    
    // \t \n \r => count => 1 
    //a = printf("\t\nHelloworld"); 
    //printf("\n%d",a); //11 
    
    // int ans = 10; 
    // int a; 
    // a = printf("ans = %d",ans);
    // //          ans = 10      
    // printf("\n%d",a);//8  

    int a = 56; 
    int ans; 

    a = printf("%10d",a)      +   ++a; 
    //                  5 6  
    //  - - - - - - - - - -   + 
    //          10            +    57 
    printf("\n%d",a); // 67 



    return 0;
}