#include<stdio.h> 
int main()
{
    int a = 10; // stack => main's FAR 
    // a will be destroyed when main's FAR is detroyed 

    static int num = a; // NOT OK 
    return 0;
}
// int main()
// {
//     int a = 10; // stack => main's FAR 
//     // a will be destroyed when main's FAR is detroyed 

//     static int num = 10; // data section 
//     //after main's FAR destroyed 
//     //after completion of main    
//     return 0;
// }