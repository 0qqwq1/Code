#include <stdio.h>
double harmonic_mean(double, double);

int main(void)
{
    double num1, num2;

    printf("Please enter two number: ");
    scanf("%lf %lf", &num1, &num2);
    printf("The harmonic mean of %lf and %lf is %lf", num1, num2, harmonic_mean(num1, num2));

    return 0;
}

double harmonic_mean(double a, double b)
{
    return 1 / (((1 / a) + (1 / b)) / 2);
}