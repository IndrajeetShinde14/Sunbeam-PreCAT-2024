#include<stdio.h> 
int main( )
{
    
    //format specifier 
    /*
        int => %d 
        char => %c 
        double => %lf 
    */
    //Variable must be declared before its use in the program.
    //Simple C data types are: int, double, char
    int num = 10; // variable declaration + initialization 
    char ch = 'A'; // variable declaration + initialization  
    double dvar = 12.33; // variable declaration + initialization  

    // printf("number = %d\n",num); 
    // //      number = 10
    // printf("char = %c\n",ch); 
    // //      char = A
    // printf("double value = %lf",dvar); 
    // //      double value = 12.33
    
    
    printf("%d\n%c\n%lf ",num,ch,dvar); 
    
    
    return 0; 
}
/*
   1.Compilation starts from line number 1 
   2.program execution starts from main( )

*/