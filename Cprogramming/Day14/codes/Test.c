#include <stdio.h>
int x=10;
void callbyaddress(const int *ptr_x)
{
x=*ptr_x * *ptr_x / x;
//*ptr_x=*ptr_x * *ptr_x / x;
  
}
int main( void )
{
const int x=100;
printf(" x = %d ",x);
callbyaddress(&x);
printf(" x = %d",x);
return 0;
}