#include<stdio.h> 

int main()
{
    //short hand assignment 
    int a = 1; 
    int b = 2; 
    int c = 3; 
    //a+=b+=c+=1;  
    /*
            c = c + 1 => 3 + 1 => 4 
            b = b + c => 2 + 4 => 6  
            a = a + b => 1 + 6 => 7 
    
    */
    
    //printf("%d %d %d",a,b,c); // 7 6 4 
    
    a = b = c = -3  ; 
    printf("%d %d %d",a,b,c); // -3 -3 -3 
    
    return 0;
}


// int main()
// {
//     //short hand assignment 
//     int num1 =4; 
//     //num1 = num1 + 2; 
//     //num1+=2; // num1 = num1 + 2 (+=) 
//     //num1-=4; // num1 = num1 - 4 (-=)  
//     //num1*=4; // num1 = num1 * 4 (*=)  
//     //num1/=2; // num1 = num1 / 2 (/=)  
//       num1%=4;  // num1 = num1 % 4 (%=)
//     printf("%d",num1); 
//     return 0;
// }
/*
        int a = 5; 
        //short-hand assignment
        a+=4; // a = a + 4 => 5 + 4 => 9
        a-=2; // a = a - 2 

        int a = 5; 
        a = +5; ( + => unary operator )
        a = -5;   
         


*/


// int main()
// {
//     //assignment opr ( = )
//     // int num1; 
//     // num1 = 2;
//     // //10 = 2;  
//     // //2 + 3 = 5; // lvalue error   
//     // num1 = 2 + 3; // OK  
//     // printf("%d",num1); //2  
    
//     int a = 1; 
//     //a + 1; 
//     //a = a + 1; 
//     //printf("%d",a);//2  
    
//     int x = 1; 
//     int y = 2; 
//     printf("%d ",x);//1   
//     printf("%d ",x=y); //2 
//     printf("%d ",x); //2  

//     return 0;
// }