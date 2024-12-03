#include<stdio.h>
/*
        0 => zero 
        1 => one 
        2 => two 
        3 => three 
*/ 
int main()
{
    int num; 
    int i; 
    char *numbers[ ] = {"zero","one","two","three","four"}; 
    //printf("%d ",sizeof(numbers)); // 5 * 4 => 20 
    printf("Enter the num : "); 
    scanf("%d",&num);//2 
    printf("%s",numbers[num]); //numbers[2]
    return 0;
}
