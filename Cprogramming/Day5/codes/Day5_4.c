#include<stdio.h> 
int main()
{
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 2;
    // int avg; 
    // avg = (num1 + num2 + num3 ) / 3;
    // /*
    //       (int + int + int) / (int)
    //          (int) / (int)
    //            int 
    //      RHS => 2 => int 
    //      LHS => int 
    // */ 
    // printf("%d",avg);     

    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 2;
    // float avg; 
    // avg = (num1 + num2 + num3 ) / 3;
    // /*
    //       (int + int + int) / (int)
    //          (int) / (int)
    //            int 
    //      RHS =>int 
    //      LHS =>float
    //      float<=int 
    //      2.00<=2 
    // */ 
    // printf("%.2f",avg);     
    
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3 ) / 3;
    // /*
    //       (int + int + int) / (int)
    //          (int) / (int)
    //            int 
    //      RHS =>5/3=>1.66=>int=>1 
    //      LHS =>float
    //      float<=int 
    //      1.00<=1  
         
         
    // */ 
    // printf("%.2f",avg);     
    
    
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3 ) / 3.0;
    // /*
    //       (int + int + int) / (double)
    //          (int) / (double)
    //            double 
    //      RHS =>5/3=>1.66=>double=>1.66 
    //      LHS =>float
    //      float<=double 
    //      1.67<=1.67  
         
         
    // */ 
    // printf("%.2f",avg);     
    
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3 ) / 3.0f;
    // /*
    //       (int + int + int) / (float)
    //          (int) / (float)
    //            float 
    //      RHS =>5/3=>1.67=>float=>1.67 
    //      LHS =>float
    //      float<=float 
           
         
         
    // */ 
    // printf("%.2f",avg);     
    

    int num1 = 2; 
    int num2 = 2; 
    int num3 = 1;
    float avg; 
    avg = ((double)num1 + num2 + num3 ) / 3;
    /*
          (double + int + int) / (int)
             (double) / (int)
               double 
         RHS =>5/3=>1.67=>float=>1.67 
         LHS =>float
         float<=double 
           
         
         
    */ 
    printf("%.2f",avg);     
    
    return 0;
}