#include<stdio.h> 
int main()
{
    int number; // variable declaration
    int roll = 300;  //// variable declaration + init 
    /*
        double basic_salary = 1000.00; 
        double total_salary = 2000.00; 
    */
    double basic_salary = 1000.00 , total_salary = 2000.00;  //decln + init 
    number = 10; //assignment 
    printf("variables and datatypes...\n");
    number = 60; // assignment 
    printf("number = %d\n",number); 
    char ch = 'B'; // variable delcn + init 
    printf("%.2lf %.2lf\n",basic_salary,total_salary);
    printf("%d %d %.2lf %.2lf\n",roll,number,basic_salary,total_salary);  
    printf("char = %c\n",ch); 
    return 0;
}
