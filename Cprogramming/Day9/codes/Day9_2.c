#include<stdio.h>
int addition(int a , int b );  //function declaration  
int main()//user-defined function 
{
    //num1 and num2 are called as local variables 
    int num1 = 10; 
    int num2 = 20; 
    int result; 
    result = addition(num1,num2); //calling the function  
    //num1 and num2 are called as actual argument 
    printf("result = %d\n",result);// 30 
    result = addition(100,200);  // function call
    printf("result = %d\n",result);// 300   
    return 0;
}
//function defination 
int addition(int a, int b) //user-defined function 
{
    //a  ,b , result are local variables 
    int result; 
    result = a + b;  // 100 + 200 => 300 
    return result; 
    
}






