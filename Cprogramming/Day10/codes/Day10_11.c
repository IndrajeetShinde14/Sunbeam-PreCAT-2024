#include<stdio.h> 
void fun( ); 
void fun1( ); 
void fun2( );
extern int num;   
int main( )
{
    //extern int num; 
    fun( ); 
    fun1( );
    fun2( );  
    printf("%d ",num); 
    return 0; 
}
void fun( )
{
    //extern int num; 
    printf("%d ",num); 
} 

void fun1( )
{
    //extern int num; 
    printf("%d ",num); 
} 
void fun2( )
{
    //extern int num; 
    printf("%d ",num); 
} 
int num = 10; 