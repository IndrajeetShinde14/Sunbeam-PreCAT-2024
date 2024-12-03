#include<stdio.h> 

int main( )
{
    /*
        short 
        long 
    */
    //short int num; //signed 
    //signed short int num = 32767; // OK 
    //printf("%d",sizeof(num)); // 2 bytes
    // format specifier => %hd  
    
    //unsigned short int num1;  
    //printf("%d",sizeof(num1)); // 2 bytes
    
    //short char ch2; // NOT OK 
    
    //long int num3; //signed 
    //signed long int num3; // OK 
    //printf("%d",sizeof(num3));// 4 bytes  
    // long int => %ld (format specifier )
   
    //unsigned long int num4; 
    //printf("%d",sizeof(num4));// 4 bytes  
    
    //short long int x;  // NOT OK ( compiler error) 
    //long char y; // NOT OK 

    //signed long long int x;// signed ( 8 bytes ) 
    //unsigned long long int x;// signed ( 8 bytes ) 
    return 0; 
}
/*
            65  
    int num;  // 4 bytes 
    unsigned int num;  // 4 bytes 
    short int num;  // 2 bytes 
    unsigned int short num;  //2 bytes  
    long int num;  // 4 bytes 
    unsigned long int num;  // 4 bytes 
    long long int num;  // 8 bytes 
    unsigned long long int num;  // 8 bytes 

*/