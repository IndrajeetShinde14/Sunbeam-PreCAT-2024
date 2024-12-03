#include<stdio.h> 
void sumpro(int a , int b); 
int ps,pp; // global variables 
/*
    var declared inside the function => local variables 
    var declared outside the function => global variables 

*/

int main()
{

    int a = 10 , b = 4; 
    sumpro(a,b); 
    printf("\n ps=%d pp=%d",ps,pp); 
    return 0;
}
/*

    global var => can be accessed throughout the program 
    stored in data-section
      //created when program is started 
      //even before main( ) is called  
    //created in data-section 

    //destroyed when program is terminated 
        //after completion of main( )   
*/

void sumpro(int a , int b)
{
    ps = a + b; //14 
    pp = a * b; //40 
}

