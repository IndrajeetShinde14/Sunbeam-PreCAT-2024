#include<stdio.h> 

int main( )
{
    //printf("Hello\nworld"); 
    /*
        Hello 
        world 
    */
    // \" \" => "Hello world"
    //printf("\"Hello world\""); 

    // \' \' => 'Hello world' 
    //printf("\'Hello world\'"); 
    
    
    // \b => backspace 

    //printf("Sunbeam pune,\b");
    //      Sunbeam pune, 
    
    //printf("Sunbeam pune,\b.");
    //      Sunbeam pune.
    
    //printf("Hello wo\brld"); 
    //      Hello wrld
    
    // \r => carraige return 
    //printf("eello world\rH"); 
    //      Hello world
    
    // \t => tab ( 8 spaces )
    printf("12345678\n"); 
    printf("\tSunbeam"); 
    
    //printf("\\n is used for new line"); 
   
   // \n , \r , \t , \b => char constants 
   // char constants => integral constants  
    
    //printf("%d ",'\n'); //10 // \n => ascii value 
    //printf("%d ",'\r'); //13 // \r => ascii value 
    
    //printf("%d",'\n' - '\r'); //10 - 13 => -3   
    return 0; 

}