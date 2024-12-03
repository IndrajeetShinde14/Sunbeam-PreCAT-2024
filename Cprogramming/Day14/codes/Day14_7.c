#include<stdio.h> 
int main()
{
    //strcmp( ); 
    // char str[20] ="Sunbeam";   //stack 
    // char str2[20] ="Sunbeam";  //stack 
    // if(str == str2) // comparing address 
    //   printf("Same"); 
    // else 
    //   printf("not same"); 

    //pointer to string 
    // char *str1 = "Info"; 
    // char *str2 = "Info"; 
    // //memory allocation is done from RO data-section 

    // if(str1 == str2)
    //   printf("Same"); 
    // else 
    //   printf("not same"); 

    // char name[10] = "ABC"; //stack 
    // printf("%s",name);//ABC 
    // name[0] = 'K'; 
    // printf("\n%s",name);//KBC  
    
    // char *name = "ABC"; // memory allocation RO data section 
    // printf("%s",name); // ABC 
    // name[0] ='K'; // runtime error  
    // printf("\n %s",name); //runtime error 
    // // trying to modify the string from RO Data section 
    
    char str5[20] = "Sunbeam"; 

    printf(str5);
    printf("\n"); 
    printf(str5+1); 
    printf("\n");
    printf(str5+2);
    
    return 0;
}