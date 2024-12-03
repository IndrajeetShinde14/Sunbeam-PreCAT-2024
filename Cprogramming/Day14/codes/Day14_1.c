#include<stdio.h> 
int main()
{
      
    char str1[5] = {'A','B','C','D','E'};
    //char array   

    //\0 => null character 
    char str2[5] = {'a','b','c','d','\0'};
    //char array terminated with '\0' => string  

    char str3[5] = {'I','N','F','O'}; // partial init 
    // 5 char arrays terminating with \0 => string 
    /*
            I   N   F  O    0 
           [0] [1] [2] [3] [4]
    */

   char str4[] = {'s','u','n','b','e','a','m'}; 
   //char array 


    //%s 
    //printf("%s",str3); 

    int i; 

    for(i = 0 ; i<7 ; i++)
       putchar(str4[i]);    

    // for(i = 0 ; str3[i]!='\0' ; i++)
    //    putchar(str3[i]); 


    // for(i = 0 ; str2[i]!='\0' ; i++)
    //    putchar(str2[i]); 

    // for(i = 0 ; i<5 ; i++)
    //    putchar(str1[i]);    
    return 0;
}
