// #include<stdio.h>  
// #include<limits.h>
// int main()
// {
//     printf("%u", UINT_MAX); //0 to 4294967295
//     unsigned int num = -2; 
//     printf("\n%u",num); //4294967294 
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// int Y=10;
// printf("%d",Y*Y);//10 * 10 => 100 
// if((Y++ && Y++!=10 && Y++))
// //  10++ && 11++   && 12++ (after post incr => 12 => 13  )
// //          T
// Y = ~Y; // Y = ~13 => -(13 + 1) => -14 
// else
// Y -= 10;
// printf("%d", Y+=10);// Y = Y + 10 => -14 + 10 => -4 
// return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// int i = 0;
// for (i = 0;i < 5; i++);


// // i = 5  
// {
// if (i <= 5){
// printf("Sunbeam\n");
// }
// else
// printf(" HINJEWADI IT PARK ");
// }
// return 0;
// }

#include <stdio.h>
int main(void)
{
int val = 0 ;
do
{
printf(" do while"); // prints do while 
}while(val++);//while(0++)=>while(F)
val--;//1--  
while(val--); //while(0--); 
printf(" while"); // prints while 
return 0;
}

// printf("%d ",0x45);
// printf("%x ",0x32);
// printf("%o ",010); 