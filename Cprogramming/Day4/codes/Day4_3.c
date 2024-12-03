#include<stdio.h> 

int main( )
{
    //char ch = 'A'; 
    char ch  = 65;  // OK 
 //char are internally integral constansts ( ASCII )   
    
    //printf("%c",ch);// 65 => A => print A  
    //printf("%d",ch); // 65 
   
    //printf("%d",'A' - 65);  // 65 - 65 => 0 

    // char subtraction is ascii value subtraction 
    
    /*
        remember this chart 

         A - Z => 65 to 90 
         a - z => 97 to 122 
         0 - 9 => 48 to 57 

    */
    //printf("%d",'0'); // 48 
    //printf("%d",'9'); // 57  
    return 0; 
}