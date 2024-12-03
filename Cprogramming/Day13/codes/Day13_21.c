#include<stdio.h> 
void printArray(int *a); 
int main()
{
    int i; 
    int arr[4] = {1,2,3,4}; 
    //arr++; // NOT OK 
    printArray(arr); 
    return 0;
}
void printArray(int *a)
{
    printf("%d ",*a); //1 
    a++;// OK 
    //100 => 104 
    printf("%d ",a[-1]);//1 
    /*
            a[-1]
            *(a + -1)
            *(a - 1)
            *(104 - 1)
            *(104 - 1 * 4)
            *(104 - 4)
            *(100)

    
    
    */     
}

// #include<stdio.h> 
// void printArray(int arr[]); 
// int main()
// {
//     int i; 
//     int arr[4] = {1,2,3,4}; 
//     //arr++; // NOT OK 
//     printArray(arr); 
//     return 0;
// }
// void printArray(int arr[])
// {
//     printf("%d ",*arr); //1 
//     arr++;// OK 
//     //100 => 104 
//     printf("%d ",arr[-1]);//1 
//     /*
//             arr[-1]
//             *(arr + -1)
//             *(arr - 1)
//             *(104 - 1)
//             *(104 - 1 * 4)
//             *(104 - 4)
//             *(100)

    
    
//     */     
// }
