// #include<stdio.h>
// #include<string.h>
// int main( void )
// {
//  printf("Sunbeam IT Park Hinjewadi" + strlen("sunbeam"));
//  //   _format =                100 
//  //               100           +    7 
//  //                      107 

// return 0;
// }

#include <stdio.h>
int main(void)
{
char str[] = "%d %s";
char arr[] = "PreCAT@SUNBEAM";
//printf(str, 0[arr], &2[arr + 4]);
printf("%d %s", arr[0], &arr[2 + 4]);
return 0;
}