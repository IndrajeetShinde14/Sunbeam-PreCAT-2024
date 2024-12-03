#include<stdio.h> 
int main()
{
    char str[50]; 
    printf("Enter the string "); 
    //scanf("%s",str); 
    //scanf("%[a-z]",str); 
    //scanf("%[a-z A-Z]",str); 
    scanf("%[^a-z]",str); 
    /*
            scanf("%[a-z]",str); 
            get user input till char in range[a-z]

            scanf("%[a-z A-Z]",str); 
            get user input till char in range[a-z A-Z]


            scanf("%[^a-z]",str); 
            get user i/p until a-z is found 
            (stop reading on small case)
            SUNBEAMiNFOTECH => SUNBEAM 
    */
    printf("%s",str); 
    return 0;
}