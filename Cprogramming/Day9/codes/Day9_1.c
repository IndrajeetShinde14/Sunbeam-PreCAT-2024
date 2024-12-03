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
    printf("result = %d",result);// 30 
    return 0;
}

//main function => calling funtion 
//addition function => called function 
//function defination 
// a and b are called as formal arguments 
// int => return type 
int addition(int a, int b) //user-defined function 
{
    //a  ,b , result are local variables 
    int result; 
    result = a + b;  // 10 + 20 => 30 
    return result; 
    
}
//actual argument type should match with formal arg type 





