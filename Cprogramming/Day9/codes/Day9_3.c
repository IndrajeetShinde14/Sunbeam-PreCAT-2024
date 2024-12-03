#include <stdio.h>

double addition(double num1, double num2); // function decln
void multiplication(double a, double b);
int division(int num, int den);
void subtract(void);

int main(void) // user-defined function
{
    double num1 = 10.00, num2 = 2.00, ans;
    ans = addition(num1, num2); // function call
    printf("ans = %.2lf\n", ans);
    multiplication(2.0, 4.0); // function call
    int num, den, res;
    printf("Enter the two numbers: ");
    scanf("%d%d", &num, &den);    // 4 , 2
    res = division(num, den);     // 4 , 2 ( function call )
    printf("\nresult = %d", res); // 2
    subtract();                   // function call
    return 0;
}

// function can return only one value

// user-defined function

void subtract(void)
{
    int p, q, r; // local variables
    printf("\nEnter the 2 numbers :: ");
    scanf("%d%d", &p, &q);
    r = p - q;
    printf("\nResult = %d", r);
}

int division(int num, int den)
{
    return num / den;
    //    int res;
    //    res = num / den;
    //    return res;
}

void multiplication(double a, double b)
{
    double res;
    res = a * b; // 2.0 * 4.0 => 8.0
    printf("multiply = %.2lf\n", res);
}
// function defination
double addition(double num1, double num2)
{
    double res;
    res = num1 + num2; // 10.00 + 2.00
    return res;
}
