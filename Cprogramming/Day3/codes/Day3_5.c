#include<stdio.h> 
int main()
{
    int num = 10; 
    char ch = 'A'; 
    double dvar = 12.33; 
    float fvar = 10.33;
    //sizeof() => operator  => bytes
    //sizeof( ) => integer => %d 

    printf("int size = %d\n",sizeof(num)); // 4 bytes
    printf("char size = %d\n",sizeof(ch)); // 1 byte
    printf("double size = %d\n",sizeof(dvar)); // 8 bytes
    printf("float size = %d",sizeof(fvar)); // 4 bytes   
    return 0;
}
/*
        4 bytes => 32 bits 

    Number system 
    Decimal number system 
    Binary number system 
    octal number system 
    hexadecimal number system 

    conversions 

    1s Compliment 
    2s Complment 
    Binary addition 

*/