#include<stdio.h> 
int accept_num(void); 
void display(int result); 
void addition(int num1 , int num2); 
int main()
{
    int num1,num2,res; 
    num1 = accept_num( );// 2 function call  
    num2 = accept_num( ); //4 function call 
    addition(num1 , num2); // 2 ,  4 
    return 0;
}

void display(int result)
{
    printf("result = %d",result);
}

void addition(int num1 , int num2)
{
    int res; 
    res = num1 + num2; //2 + 4 => 6 
    display(res); //function call 
}
int accept_num(void)
{
      int num; 
      printf("Enter the num : "); 
      scanf("%d",&num); 
      return num; 
}

//main=>addition( ) => display( ) 
//main<=addition( ) <= display( )