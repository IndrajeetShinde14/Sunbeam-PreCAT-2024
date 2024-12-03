#include<stdio.h> 
int main()
{
    // nested if-else 
    int num1 = 100; 
    int num2 = 200; 
    int num3 = 300; 

    if(num1 > num2) // if(100>200)
    {
        if(num1 > num3)
        {
            printf("num1 is greatest");     
        }
        else 
        {
            printf("num3 is greatest"); 
        }
    }
    else 
    {
        if(num2 > num3)//if(200>300)
        {
            printf("num2 is greatest"); 
        }
        else 
        {
            printf("num3 is greatest"); 
        }
    }





    return 0;
}
/*

    int a=10; 
    int b=20; 
    if(a>b)
      printf("%d is max",a); 
    else 
      printf("%d is max",b); 

*/