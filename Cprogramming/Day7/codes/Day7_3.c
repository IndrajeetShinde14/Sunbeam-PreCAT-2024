#include<stdio.h> 
/*
     A or a => Android 
     B or b => basic 
     C or C => c programming 
     D or d => Database 

*/
int main()
{
    char ch; 
    printf("Enter the character "); 
    ch = getchar( ); //B
    switch(ch)
    {
         case 'a': 
         case 'A': 
         printf("Android "); 
         break;

         case 'b': 
         case 'B': 
         printf("Basic programming "); 
         break; 

         case 'c': 
         case 'C': 
         printf("C programming "); 
         break; 

         case 'd': 
         case 'D': 
         printf("Database programming "); 
         break; 

         default: 
         printf("invalid ");     
    }
    return 0;
}
