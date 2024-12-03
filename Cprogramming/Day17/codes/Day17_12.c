#include<stdio.h> 
struct student {
 char name[20];
 unsigned int age: 7; // ( 32 - 7 => 25 )
 unsigned int roll: 6; // ( 25 - 6 => 19 )
 int c : 10; //(19 - 10 ) 
 //int d : 11;   
}; // 9 bits 
 // 19 bits are still avail 
// int => 4 bytes => 32 bits 
// 20 + 4 => 24  
int main( )
{
     printf("%d ",sizeof(struct student));    
    //struct student s1 = { "Ram", 10, 21 };
    //printf("%s, %d, %d", s1.name, s1.age, s1.roll); 
} 