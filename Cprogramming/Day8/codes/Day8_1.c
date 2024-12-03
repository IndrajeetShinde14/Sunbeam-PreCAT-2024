#include<stdio.h> 
int main()
{
    enum 
    {
        RED,BLUE,GREEN 
    }c1,c2,c3; 
    return 0;
}

// int main()
// {
//     int number = 1;    
//     enum color // create the datatype  
//     {
//           RED , BLUE , GREEN 
//         //RED , BLUE , GREEN , violet  
//         //RED=1 , BLUE , GREEN , violet  
//         //RED=-1, BLUE , GREEN , violet
//         //RED=-1, BLUE =2 , GREEN=3, violet=4  
//         //RED=-1, BLUE =33 , GREEN, violet=2 , Yellow   
//         //RED=1.5, BLUE =33 , GREEN, violet=2 , Yellow  // NOT OK  
//         //RED=-1 , BLUE, GREEN=-1, violet // OK  
//         //RED = 'A', BLUE , GREEN 
//         //RED, BLUE=-1, GREEN 
//          //RED = number, BLUE=-1, GREEN 
//     };
//     enum color c1,c2,c3;
//     //c1,c2,c3 are variables   
//     //printf("%d",RED); // 0 
//     return 0;
// }

// int main()
// {
//     /*
//         int;
//         int a;

//         datatype variable-name 
//           float   y;       
//     */
//     enum color // create the datatype  
//     {
//          RED , BLUE , GREEN 
//     };
//     enum color c1,c2,c3;
//     //c1,c2,c3 are variables   
//     //printf("%d",RED); // 0 
//     c1 = RED; 
//     printf("%d\n",c1); // 0
//     c2 = GREEN;  
//     printf("%d\n",c2); // 2 
//     c2++; 
//     printf("%d\n",c2); // 3  
//     //BLUE++; // 1++ => 1 = 1 + 1 (l-value error) 
//     printf("%d %d",sizeof(c1),sizeof(enum color)); 
//     //              4               4                  
//     return 0;
// }
// 0 1 2 
// RED , BLUE , GREEN 

/*
        enum IPL 
        {
            MI , CSK , RR 
        }; 

*/