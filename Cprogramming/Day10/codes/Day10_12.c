#include<stdio.h> 
void fun( );
static int num1 = 20; //file scope 
int x = 200;  // program scope  
int main()
{
    static int num = 10;// block scope  
    printf("num = %d",num); //10 
    return 0;
}
void fun( )
{
    printf("%d",num); // NOT OK 
}

/*
     
     static int y; (file scope) 
     int x; (program scope )
     main.c                          f1.c              f2.c    

        gcc main.c f1.c f2.c 
            .\a.exe 

*/