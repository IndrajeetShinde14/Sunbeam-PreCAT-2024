//if we enter 10 as a value of a 
#include<stdio.h>
int main(void)
{
int a,b, result=0; // Line 3
printf("\n Enter value of a ="); // Line 4
b=scanf("%d", &a); // Line 5 => 10 is entered as a i/p 
// scanf returns number of scanned values from the terminal 
// above scanf is scanning only one value so it will return 1 
// b = 1 

result = a / (sizeof(short int)- b); // Line 6
//       10 / ( 2 - 1) // sizeof short int is 2 bytes 
//       10 / 1 
//       10 
// result is 10 here   

printf("result=%d \n",result); // Line 7
// result is printed as 10 here 

result = a / (sizeof(char)- b); // Line 8 
//     = 10 / ( 1 - 1 ) // sizeof of char is 1 byte 
//       10 / 0 
//       divide by zero not possible 
//       results in runtime error  
// line number 8 is causing runtime error 

 //control will not reach line number 9 as above runtime error has occured 
printf("result=%d \n",result); // Line 9

return 0;
}
