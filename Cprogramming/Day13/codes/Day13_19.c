#include<stdio.h> 
void readArray(int *ptr); 
void printArray(int arr[]) ; 
int main()
{
    int arr[5]; 
    printf("Enter the array elements ::\n");
    readArray(arr); //base address  
    printf("Array elements  are ::\n");
    printArray(arr); //base address 
    return 0;
}
void readArray(int *ptr) //pointer notation 
{
    //printf("%d ",sizeof(ptr)); // 4 bytes (pointer)
    int i; 
    for(i=0; i<5 ; i++)
       scanf("%d",&ptr[i]); 
}
void printArray(int arr[]) //array notation 
{
    //printf("%d ",sizeof(arr)); // 4 (pointer)
    int i; 
    for(i=0; i<5 ; i++)
       printf("%d",arr[i]); //*(arr+i)
}