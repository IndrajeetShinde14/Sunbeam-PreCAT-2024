#include<stdio.h> 
#include<stdlib.h> 
/*
    I/p a char from a user and write them into the file 
*/
int main()
{
    char ch; 
    FILE *fp;
    //open the file 
    fp = fopen("file1.txt","r");  
    if(fp == NULL)
    {
        printf("fopen failed"); 
        exit(1); 
    }
    while(1)
    {
        //input a char from user 
        ch = fgetc(fp); 
        //returns next char , otherwise -1 if file ends 
        if(ch == EOF) // input is completed 
           break; 
        putchar(ch);   
    }
    fclose(fp); 
    return 0;
}
/*
        Hello world

        press ctrl + z to finish the input (windows)
*/
/*
    File pointer (stream pointer ) is a pointer to a structure of type FILE
    File pointer points to this structure (identifies the file ) 

*/