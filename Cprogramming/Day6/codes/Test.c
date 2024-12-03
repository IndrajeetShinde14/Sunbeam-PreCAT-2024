// int main(void)
// {
// int a,b,c;
// a=111;
// b=222;
// // printf returns number of characters ( count ) as int to you 
// c=printf("%d",a) + ++b; // pre-increment 
// //	  111 =>3 	
// //           3 + +222 => 222 will pre-increment to 223 
// //           it will print 111 on terminal and return 3 as count    
// //         111 => prints 3 digits so it will return 3  
// //           3  + 223      
// printf(" %d",c);// 226 

// return 0;
// }

#include <stdio.h>
int main(void)
{
int a,b,c;
// printf returns count that that is printed on terminal 
// \t \n \r is considered as 1 count 

a=printf("\t \"SunBeam\" - \t'IT Park' \t");
// above printf returns 26 as count 
// so a = 26 


b=printf("\t \'Pune\' \t");
// above printf returns 10 as a count 
// so b = 10  

c=printf("\n a = %d",a)+ ++b;
//           a = 26 ( 26 will be printed on terminal )
//total count is 8 ( \n and space is also counted as 1 )
//             8      +  11 
//              19   

printf(" c = %d",c); //19 
return 0;
}

