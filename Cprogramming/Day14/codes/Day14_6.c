#include<stdio.h> 
#include<string.h> 

int main()
{
    char str1[] = "Sunbeam infotech"; 
              //   Sunbeam infotech\0 

    char *str2 = "Sunbeam infotech"; //pointer to string 
             //   Sunbeam infotech\0 

    char str3[ ] = "Sunbeam\0infotech";
    //              Sunbeam\0infotech\0 

    //printf("%d ",sizeof(str1)); //17 
    //printf("%d ",sizeof(str2));//4 byte ( pointer size ) 
    //printf("%d ",sizeof(str3));//17    

//strlen( ) => is a function that counts number of chars 
//until \0 is encountered    
   
    //printf("%d ",strlen(str1));//16  
    //printf("%d ",strlen(str2));//16 
    //printf("%d ",strlen(str3));//7  

    printf("%s \n",str1);
    printf("%s \n",str2);
    printf("%s ",str3);//Sunbeam
    return 0;
}
