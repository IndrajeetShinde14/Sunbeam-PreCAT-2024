/*
        This is a multiline/block comment
        Comments are ignored by compiler 
        They are used for documentation 
        or explaination 
*/
// This is a single line comment 

#include<stdio.h> // this is a header file inclusion  
//stdio.h header file contains function declaration 
// we will learn function in detail in function topic 

//main( ) is a entry point function in C
//main( ) is a user-defined function  
//program must have main( ) function atleast 
//int => integer 
int main(  )
{
     
    //printf( ) is used to print some data/string on terminal 
    //"Sunbeam" , "Ketan" , "A" , "12345" => string 
    // 'A' 'C' => character
    // \n => escape sequence ( we wil discuss later )   
    printf("Hello world"); 
   
  //return 0 indicates successfull execution of program   
  //any non-zero value indicates failure 
   return 0;  
}
// OS => main( )

/*
        1.Library function 
        2.User-defined function 
*/
/*
    //standard 
    int main( )
    {
        return 0; 
    }

    //void => nothing 
    void main( )
    {

    }
    // main is not returning anything 

*/

/*
    printf("Hello\n"); 
    printf("world"); 

    
*/