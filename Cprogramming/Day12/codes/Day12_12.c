#include<stdio.h> 
int main()
{
    //type qualifier => const , volatile 
    const int num = 10; 
    printf("num = %d",num); //10 
    num = 20; // NOT OK 
    return 0;
}