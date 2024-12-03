#include<stdio.h> 
void sumpro(int a , int b); 
int main()
{
    auto int d;//auto indicates local variable 
    //(in function variables) => auto => optional 
    int c;// if not init => Garbage value 
    int a = 10 , b = 4; // local variables    
    /*
        a,b,c,d will be created when main is called 
        on main's FAR 
    
    */
    //printf("c = %d",c); // garbage
    {
            int c = 10; 
            {
                int c = 100;
                printf("\n%d",c);  //100 
                {
                    int c = 1000; 
                    printf("\n%d",c);// 1000  
                }
                printf("\n%d",c);//100  
            }
            printf("\n%d",c); //10 

    }
    sumpro(a,b); 
    printf("\n Inside main %d %d",a,b);  // 10 4 
    return 0;
}
void sumpro(int a , int b)
{
    int ps,pp; 
    /*
        a,b,ps,pp will be created when sumpro is called 
        on sumpro's FAR 
    
    */
   ps = a + b; //14 
   pp = a * b; //40 
   printf("\n ps=%d pp=%d",ps,pp); //14 40 
   a++; 
   b++;
   /*
     modifying a,b in sumpro's FAR will not affect 
     main's "a" "b" var 
   
   */
}