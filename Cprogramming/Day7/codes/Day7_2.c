#include<stdio.h> 
int main()
{
    //switch

    //jump statments => break  
    int a= 1; 
    int b =2;  
    //int choice = 0; 
    //switch(choice)
    //switch(10.5)
    //switch(1)// OK 
    //switch(2+1)// OK 
    //switch((int)1.3)// OK 
    //switch('A')// OK 
      switch(a+b)
    {
        
        case 'A' || 10 : //case 1:  
        printf("one"); 
        break; 

        case 0 && 4:  //case 0: 
        printf("two"); 
        break; 

        case 2: 
        printf("two "); 
        break; 

        default: 
        printf("invalid"); 
    }

    
    return 0;
}


// int main()
// {
//     //switch

//     //jump statments => break  

//     int choice = 0; 
//     switch(choice)
//     {
        
//         case 'A' || 10 : //case 1:  
//         printf("one"); 
//         break; 

//         case 0 && 4:  //case 0: 
//         printf("two"); 
//         break; 

//         case 2: 
//         printf("two "); 
//         break; 

//         default: 
//         printf("invalid"); 
//     }

    
//     return 0;
// }

// int main()
// {
//     //switch

//     //jump statments => break  

//     int choice = 65; 
//     switch(choice)
//     {
//         // case 1:
//         // case 'A': 
//         // printf("one "); 
//         // break; 

//         case 1: case 'A': 
//         printf("one"); 
//         break; 

//         case 2: 
//         printf("two "); 
//         break; 

//         default: 
//         printf("invalid"); 
//     }

    
//     return 0;
// }
// int main()
// {
//     //switch

//     //jump statments => break  

//     int choice = 5;  
//     int number = 100; 
//     switch(choice)
//     {
//         case 11:
//         printf("one "); 
//         break; 

//         case 2: 
//         printf("two "); 
//         break; 

//         //case 1.3: // NOT OK  
//         //printf("1.3"); 
//         //break; 

//         case 'A': // case 65:  
//         printf("A"); 
//         break;  

//         //case 65: //duplicate case (error)
//         //printf("65 "); 
//         //break; 

//         case 1*2+3:  //case 5:   
//         printf("five "); 
//         break;

//         case number:  // Error (not a int constant )
//         printf("number ");  

//         default: 
//         printf("invalid"); 
//     }

    
//     return 0;
// }
// int main()
// {
//     //switch

//     //jump statments => break  

//     int choice = -1;  

//     switch(choice)
//     {
//         case 11:
//         printf("one "); 
//         break; 

//         //case 1: // NOT OK 
//         //printf("one again"); 

//         case 2: 
//         printf("two "); 
//         break; 

//         case 35:
//         printf("three ");
//         break;  

//         case 24:    
//         printf("four "); 
//         break; 

//         case -1: 
//         printf("-1 "); 
//         break;  

//         default: 
//         printf("invalid"); 
//     }

    
//     return 0;
// }

// int main()
// {
//     //switch

//     //jump statments => break  

//     int choice = 40; 

//     // switch(choice)
//     // {
//     //     case 1:
//     //     printf("one "); 
//     //     break; 

//     //     case 2: 
//     //     printf("two "); 
//     //     break; 

//     //     case 3:
//     //     printf("three ");
//     //     break;  

//     //     case 4:    
//     //     printf("four "); 
//     //     break; 

//     //     default: 
//     //     printf("invalid"); 
//     // }

//     switch(choice)
//     {
//         default: 
//         printf("invalid"); 
//         break; 

//         case 1:
//         printf("one "); 
//         break; 

//         case 2: 
//         printf("two "); 
//         break; 

//         case 3:
//         printf("three ");
//         break;  

//         case 4:    
//         printf("four "); 
//         break; 

        
//     }
//     return 0;
// }
// int main()
// {
//     //switch

//     int choice = 2; 

//     switch(choice)
//     {
//         case 1:
//         printf("one "); 

//         case 2: 
//         printf("two "); 

//         case 3:
//         printf("three "); 

//         case 4:    
//         printf("four "); 
//     }
//     return 0;
// }