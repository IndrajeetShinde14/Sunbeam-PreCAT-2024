#include<stdio.h> 
void readArray(int arr[]) ; 
void printArray(int arr[]) ; 
int main()
{
    int arr[5]; 
    printf("Enter the array elements ::\n");
    readArray(arr);  
    printf("Array elements  are ::\n");
    printArray(arr); 
    return 0;
}
void readArray(int arr[]) //array notation 
{
    //printf("%d ",sizeof(arr)); // 4 (pointer)
    int i; 
    for(i=0; i<5 ; i++)
       scanf("%d",&arr[i]); 
}
void printArray(int arr[]) //array notation 
{
    //printf("%d ",sizeof(arr)); // 4 (pointer)
    int i; 
    for(i=0; i<5 ; i++)
       printf("%d",arr[i]); //*(arr+i)
}