#include <stdio.h>
double min(double, double);

int main(void)
{
    double num1, num2;

    printf("Please enter a floating-point number: ");
    scanf("%lf", &num1);
    printf("Please enter another floating-point number: ");
    scanf("%lf", &num2);
    printf("The smaller number between the two is %lf", min(num1, num2));

    return 0;
}

double min(double a, double b)
{
    double low = a;

    if (b < a)
        low = b;

    return low;
}
//return x < y ? x : y;