#include<stdio.h> 
/*
        cal peri of rectangle 
        peri = 2 * ( length + breadth)
*/
int main( )
{
    //variable declaration 
    int length , breadth , peri;

    //Input: 
    printf("Enter the length and breadth"); 
    scanf("%d%d",&length,&breadth); 

    //processing 
    peri = 2 * ( length + breadth); 

    //output
    printf("perimeter = %d",peri); 
    return 0; 
}