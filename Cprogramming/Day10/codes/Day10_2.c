#include<stdio.h> 
int fun( ); 
int main()
{
    int r; 
    fun(); 
    printf("%d",r); 
    return 0;
}

//printf("hello"); 

int fun( )
{
    return 10; 
}

// int fun(); 
// int main()
// {
//     fun(2); 
//     return 0;
// }
// int fun()
// {
    
// }


// int main()
// {
//     printf("res = %d",sqr(2));
//     return 0;
// }
// int sqr(int n )
// {
//     return n * n; 
// }


// int sqr(int n); // global declaration 
// int main()
// {
//     printf("res = %d",sqr(2));
//     return 0;
// }
// int sqr(int n )
// {
//     return n * n; 
// }

// int sqr(int n); // global declaration 
// int main()
// {
//     int res; 
//     //int sqr(int n); // local declaration 
//     res = sqr(2); 
//     printf("res = %d",res);
//     return 0;
// }
// int sqr(int n )
// {
//     return n * n; 
// }

// int sqr(int); // type checking  (global decln)
// int main()
// {
//     int res; 
//     res = sqr(2); 
//     printf("res = %d",res);
//     return 0;
// }
// int sqr(int n )
// {
//     return n * n; 
// }

// int sqr(int n )
// {
//     return n * n; 
// }
// int main()
// {
//     int res; 
//     res = sqr(2); 
//     printf("res = %d",res);
//     return 0;
// }

// int sqr(int n ); 
// int main()
// {
//     int res; 
//     res = sqr(2); 
//     printf("res = %d",res); 
//     return 0;
// }
// int sqr(int n )
// {
//     return n * n; 
// }
