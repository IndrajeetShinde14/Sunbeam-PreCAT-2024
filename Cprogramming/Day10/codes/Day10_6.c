#include<stdio.h> 
// int main()
// {
//     {
//         int c = 10; 
//         printf("\n%d",c); //10 
//         {
//             c+=1; 
//             printf("\n%d",c);//11   
//         }
//         printf("\n%d",c);//10  
//     }   
    
//     return 0;
// }

// int main()
// {
//     {
//         {
//             {
//                 {
//                     int c = 10; 
//                 }
//             }
//         }
//     }
//     printf("%d",c); 
//     return 0;
// }


int main()
{
    int c = 10; 
    {
        {
            {
                {
                    printf("%d",c);                 
                }
            }
        }
    }
    
    return 0;
}
