// #include<stdio.h>
// int main()
// {
// char str1[] = "Sunbeam Pune \0and Karad";
// char str2[40];
// char *t=NULL, *s=NULL;
// s = str1;
// t = str2;
// while(*t=*s)
// t++,s++;
// printf("%s", str2);
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main( void )
// {
// printf("Sunbeam IT Park Hinjewadi" + strlen("sunbeam"));
// //                                       7 
// //    _format = 100 
// //              100                +    7 
// //              100                +    7  * 1 
// //                      107 
// return 0;
// }


#include<stdio.h>
#include<string.h>
int main( void )
{
char str[] = "hello,\tSunbeam\n\0Karad Pune";
//            hello,\tSunbeam\n\0Karad Pune\0 
   
printf("%d %d", strlen(str), sizeof(str));
//               15             27 

return 0;
}