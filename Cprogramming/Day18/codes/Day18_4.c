//print all lines from the file 
#include<stdio.h> 
#include<stdlib.h> 
int main()
{
    char ch[256];
    FILE *fp; 
    char *p; 
    fp = fopen("file1.txt","r"); 
    if(fp == NULL)
    {
        printf("fopen( ) failed "); 
        exit(1); 
    }    
    p = fgets(ch,4,fp); //terminate on \n  
    // reads n-1 char 
    printf("%s",p); 
    fclose(fp); 
    return 0;
}