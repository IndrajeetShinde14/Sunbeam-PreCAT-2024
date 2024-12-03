// #include<stdio.h>
// int main(void)
// {
// int x=3, y=4, z=2;
// int result = ( x > y ) ? (( x > z ) ? x : z) : (( y > z ) ? y : z );
// /*
//     ( x > y ) ? (( x > z ) ? x : z) : (( y > z ) ? y : z );
//     ( 3 > 4) => False => 0 
//     ( control goes to colon part) i.e 
//     ( 4 > 2 ) ? y : z ); => 4 > 2 is true so value of y is copied into result
//     so o/p is 4  

// */
// printf("\n result=%d", result);
// return 0;
// }

// #include <stdio.h>
// int main( void )
// {
// int i=0, j=1, k=2, m;
// m = i++ || j++ || k++;
// // logical OR operator is having same precedence 
// // so associativity is from left to right 
// //  i++ || j++ || k++;
// //  ( i++ || j++ ) || k++;
// //  ( 0++ || 1++ )
// //        T        || skipped
// //  expression is evaluated to true so value of m is 1  
// //  control goes to i and j so i and j is post incremented
// //  i is post incremented from 0 to 1 
// //  j is post incremented from 1 to 2  
// //   k++ is skipped(logical Operator says either of the one operand should be true) so value of k remains same i.e 2 

// printf("\n m=%d i=%d j=%d k=%d", m, i, j, k);
// //                               1,1,2,2   

//  consider the following values now for next expression 
// i=0, j=1, k=2, m;
// m = i++ && j++    && k++;
//  logical AND operator is having same precedence 
//  so associativity is from left to right 
//   (i++ && j++)  && k++;
//   (0++ && XXX)  && 
//        F        && skipped 
//   expression is false so value m is 0 
//   As left operand is false so j++ is skipped (As logical AND says both should be true) 
//   and k++ is also skipped 
//   As logical AND operator says if left operand is true then only control goes to right operand 

//  i++ is post incremented => 1 
//  j , k , m is skipped as it is skipped so value remains same 
//  printf("\t m=%d i=%d j=%d k=%d", m, i, j, k);
//                                    0 ,1,1,2
// return 0;
// }

#include<stdio.h>
int main()
{
int num1, num2;
num1= sizeof(int)*4;
num2= sizeof(short int)*8;
num1= printf("\n%5d", num1);
num2= printf("\n%10d", num2);
printf("\n num1=%d num2=%d", num1, num2);
return 0;
}
