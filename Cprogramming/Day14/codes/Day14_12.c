#include<stdio.h> 
//command line argument 
int main(int argc, char *argv[])
{
    //argc => argument count 
    //printf("%d ",argc); 

    //argv => argument vector 
    // a.exe 1 2 
    // printf("%s ",argv[0]);  //a.exe
    // printf("%s ",argv[1]);  //1
    // printf("%s ",argv[2]);  //2 

    //a.exe one two 
    int i;
    for(i=0; i < argc; i++) // 3<3 
    puts(argv[i]);

    return 0;
}
//atoi()