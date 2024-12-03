#include<stdio.h>
int main()
{
    char name[20]; 
    int empid; 
    float salary; 

    printf("Name    :   "); 
    scanf("%s",name);
    printf("Empid   :   "); 
    scanf("%d",&empid); 
    printf("salary  :   "); 
    scanf("%f",&salary); 

    printf("Name    :   %s\n",name); 
    printf("Empid   :   %d\n",empid); 
    printf("Salary  :   %.2f",salary); 

    return 0;
}
