// #include <stdio.h>
// int function(int, int);
// int main(void)
// {
//     int i = 10, j = 20;
//     printf("before fun call :: i=%d j=%d \n", i, j);
//     //                                       10,20
//     i = i + j; // i = 10 + 20 => 30 ( now i is updated to 30)
//     j = i - j; // j = 30 - 20 => 10 ( now j is updated to 10)
//     i = i - j; // i = 30 - 10 => 20 ( now i is updated to 20)
//     //now i = 20 j = 10
//     function(i, j); //fn call =>  20 , 10 is passed to the function
//     // control comes back from the calling function by value but value is not catched

//     // i and j is referred from main's i and j
//     //now i = 20 j = 10
//     i = i + j; // 20 + 10 => 30 ( now i is updated to 30)
//     j = i - j; // 30 - 10 => 20 ( now j is updated to 20)
//     i = i - j; // 30 - 20 => 10 ( now i is updated to 10)

//     printf(" after fun call :: i=%d j=%d \n", i, j);// 10 20
//     return 0;
// }
// // i = 20 j = 10
// int function(int i,int j)
// {
// i=i+j; // i = 20 + 10 => 30 ( i updated to 30)
// j=i-j; // j = 30 - 10 => 20 ( j updated to 20)
// i=i-j; // i = 30 - 20 => 10 ( i updated to 10)
// printf("after fun call :: i=%d j=%d \n", i, j); // 10 20
// return ++i, ++j; // rightmost value is returned ++j=> ++20=>21 is returned
// }

// #include <stdio.h>
// void swap(int x, int y);
// int main()
// {
//     int a = 1, b = 10;
//     printf("\n%d %d", a, b);//1 10
//     swap(a, b);
//     printf("\t%d %d", a, b);// 1 10
//     return 0;
// }
// void swap(int x, int y)
// {
//     x = 10, y = 1;
//     x = x ^ y;
//     y = x ^ y;
//     x = x ^ y;
//     return;
// }

// #include <stdio.h>
// int my = 0;
// int myset(int my) //1 
// {
//     printf("%d ", my++);//1 
//     return my = my <= 2 ? 5 : 0;
// }
// int main(void)
// {
//     int my = 5;
//     myset(my / 2);
//     printf("%d ", my);//5 
//     myset(my = my / 2);
//     printf("%d ", my);//2 
//     my = myset(my / 2);
//     printf("%d ", my);//5 
//     return 0;
// }

#include<stdio.h>
int main(void)
{
enum subject {SUB1=-3, SUB2, SUB3, SUB4};
enum subject sub1, sub2, sub3, sub4;
sub1= SUB4;
sub2= SUB1;
sub3= SUB2;
sub4= SUB3;
printf("%d, %d, %d, %d ", sub4, sub1, sub2,sub3);
printf("%d", (int)sizeof(enum subject)/ sub1-sub2);
//                                 4  /  0  => runtime error 
return 0;
}
