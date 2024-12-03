// #include <stdio.h>
// int testDemo(int, int, int);
// int main(void)
// {
//     int you = 64, me = 32, choice = 1; //local variable
//     if (choice == 1) // true
//     {
//         int we = testDemo(you, me, 1);// 64 , 32 , 1
//         //we => 64 (catched from called function)
//         printf("%d %d %d\t", me, you, we);//32 64 64
//     }
//     //                32 , 64 , 2
//     int we = testDemo(me, you, 2); // homework
//     printf("[%d %d %d]\n", me, you, we);
//     return 0;
// }
// //first call
// //              64 ,  32   ,  1
// int testDemo(int me, int you, int choice)
// {
//     if (choice == 1) // true
//     {
//         me = me + you; // 64 + 32 => 96 (me => 96)
//         return me - you;// 96-32 => 64 (return 64)
//     }
//     else if (choice == 2)
//     {
//         you = you - me;
//         return me + you;
//     }
//     return 1;
// }

#include <stdio.h>
int no1 = 17, no2 = 71;
void swapping(void)
{
    int temp = no2; // 71 
    no2 = no1;//17 
    no1 = temp;//71 
    printf("%d %d\t", no1, no2);//71 17  
}


//            71      17   
void swap(int n1, int n2)
{
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("%d %d\t", n1, n2); // 17 71
}
int main(void)
{
    //int no1 = 17, no2 = 71; //local variable 
    //   71 , 17 
    //swap(no2, no1);
    swapping();
    printf("\n main : %d %d\t", no1, no2);//71 17 
    return 0;
}
