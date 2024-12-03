#include<stdio.h> 
void sumpro(int *a, int *b, int *ps, int *pp)
{
    *ps = *a + *b; //12 + 4 
    *pp = *a * *b; //12 * 4 
}
int main()
{
    int x = 12, y = 4, s, p;
    sumpro(&x, &y, &s, &p);
    printf("%d %d", s, p);// 16 48 
    return 0;
}
