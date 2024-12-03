#include<stdio.h>
int main()
{
    // logical operators ( T or F) => 0 or 1 
    // T => 1 
    // F => 0 
    // && => logical AND 
    // || => logical OR 
    // ! => logical NOT 

    // printf("%d ",10 && 12); 
    // //            T && T => T ( 1 )
    // printf("%d ",-11 && 0 );
    // //            T  && F => F ( 0 )
    // printf("%d ", 0 && 33 );
    // //            F && T => F ( 0 )
    // printf("%d ", 0 && 0 );
    // //            F && F => F ( 0 )    


    // printf("%d ",10 || 12); 
    // //            T || T => T ( 1 )
    // printf("%d ",-11 || 0 );
    // //            T  || F => T ( 1 )
    // printf("%d ", 0 || 33 );
    // //            F || T => T ( 1 )
    // printf("%d ", 0 || 0 );
    // //            F || F => F ( 0 )    
    
    //printf("%d ",!10);//0  
    // !10 => non-zero value => T 
    // !T => F => 0 
    //printf("%d ",!!10);//1 
    // !!10 => !!T => !T => !F => T 
    
    printf("%d ",!0); //1 
    // !F => T 
    return 0;
}

/*
        relational operator 
        != (not equal to)
        2!=3 => T => 1 

        int a; 
        a = !3 // logical not operator   


      a!=b //relational operator 
      a=!b //logical operator  
*/