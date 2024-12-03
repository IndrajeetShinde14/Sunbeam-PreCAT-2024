#include<stdio.h> 
int main()
{
    //menu-driven program 
    enum operations 
    {
        ADD=1,SUBTRACT,MULTIPLY,DIVIDE 
    }; 
    int num1,num2,ans,op; 
    enum operations choice; 
   do 
   {
        printf("1. Addition \n"); 
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");  

        printf("Enter num1 and num2 : "); 
        scanf("%d%d",&num1,&num2); // 4 2  

        printf("\nEnter the choice :"); 
        scanf("%d",&choice); //1  

        
        
            switch(choice)//1 
            {
                case ADD: 
                ans = num1 + num2; // 4 + 2 => 6 
                break; 

                case SUBTRACT: 
                ans = num1 - num2; 
                break; 

                case MULTIPLY: 
                ans = num1 * num2; 
                break; 

                case DIVIDE: 
                ans = num1 / num2; 
                break; 
            }  
        printf("ans = %d",ans); // 6 
        printf("\n0 to exit and non-zero to continue :"); 
        scanf("%d",&choice); //0 
   }while(choice!=0);      
    
    
    return 0;
}

// int main()
// {
//     enum operations 
//     {
//         ADD=1,SUBTRACT,MULTIPLY,DIVIDE 
//     }; 
//     int num1,num2,ans,op; 
//     enum operations choice; 

//     printf("1. Addition \n"); 
//     printf("2. Subtraction \n");
//     printf("3. Multiplication \n");
//     printf("4. Division \n");  

//     printf("Enter num1 and num2 : "); 
//     scanf("%d%d",&num1,&num2); // 4 2  

//     printf("\nEnter the choice :"); 
//     scanf("%d",&choice); //1  

    
    
//           switch(choice)//1 
//           {
//               case ADD: 
//               ans = num1 + num2; // 4 + 2 => 6 
//               break; 

//               case SUBTRACT: 
//               ans = num1 - num2; 
//               break; 

//               case MULTIPLY: 
//               ans = num1 * num2; 
//               break; 

//               case DIVIDE: 
//               ans = num1 / num2; 
//               break; 
//           }  
//         printf("ans = %d",ans); // 6 
    
    
    
//     return 0;
// }
// int main()
// {
//     int num1,num2,ans,op; 
//     int ADD = 1 , SUBTRACT = 2 , MULTIPLY = 3 , DIVIDE = 4;     
//     int choice; 

//     printf("1. Addition \n"); 
//     printf("2. Subtraction \n");
//     printf("3. Multiplication \n");
//     printf("4. Division \n");  

//     printf("Enter num1 and num2 : "); 
//     scanf("%d%d",&num1,&num2); // 4 2  

//     printf("\nEnter the choice :"); 
//     scanf("%d",&choice); //1  

    
    
//           switch(choice)//1 
//           {
//               case ADD: 
//               ans = num1 + num2; // 4 + 2 => 6 
//               break; 

//               case SUBTRACT: 
//               ans = num1 - num2; 
//               break; 

//               case MULTIPLY: 
//               ans = num1 * num2; 
//               break; 

//               case DIVIDE: 
//               ans = num1 / num2; 
//               break; 
//           }  
//         printf("ans = %d",ans); // 6 
    
    
    
//     return 0;
// }