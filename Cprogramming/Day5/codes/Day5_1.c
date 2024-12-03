#include<stdio.h> 
/*
        cal area and circumference of circle 
        PI = 3.1412 
        area = PI * r * r 
        cir = 2 * PI * r 
*/
int main()
{
    //variable declaration 
    float area,circumference,radius; 

    //Input 
    printf("Enter the radius: "); 
    scanf("%f",&radius); 

    //Processing 
    area = 3.1412 * radius * radius; 
    circumference = 2 * 3.1412 * radius; 

    //Output 
    printf("area = %.2f\n",area); 
    printf("circumference = %.2f",circumference); 
    
    return 0;
}
