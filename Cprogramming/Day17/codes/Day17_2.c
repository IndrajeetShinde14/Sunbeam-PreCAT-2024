#include<stdio.h> 
#include<string.h> 

struct emp  //blueprint (declaration)
{
    int empno; // 4 bytes  
    char name[20]; // 20 bytes 
    double salary; // 8 bytes 
}; 
struct emp e5; 
int main()
{
     struct student  //local strucure 
     {
        int roll; 
        char name[20]; 
     }; 
     struct student s5; 
    /*
            int
            int x = 10;  
    */   
    struct emp e1 = {1,"Ketan",1000.00}; 
    struct emp e2 = {2,"Amit"}; 
    struct emp e3; 
    struct emp e4;
    //e1,e2,e3,e4 => variable / object  

    //printf("%d %s %.2lf",e1.empno,e1.name,e1.salary); 
    /*
              char num = 10;   
              char *p = &num; 
    */
    struct emp *p = &e1; 
    //scale factor => 32 bytes  
   
    //printf("%d %s %.2lf",p->empno,p->name,p->salary); 

    /*
            int a; 
            a = 10; 
    */
    e3.empno = 3; 
    strcpy(e3.name,"Rahul");  
    e3.salary = 3000.00; 
    //printf("%d %s %.2lf",e3.empno,e3.name,e3.salary); 
   
    printf("Enter empid name and salary : "); 
    scanf("%d%s%lf",&e4.empno,e4.name,&e4.salary); 
    printf("%d %s %.2lf",e4.empno,e4.name,e4.salary); 
    
    return 0;
}
