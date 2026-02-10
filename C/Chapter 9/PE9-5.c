#include <stdio.h>
void larger_of(double *, double *);

int main(void)
{
    double d1, d2;

    printf("Please enter two number: ");
    scanf("%lf %lf", &d1, &d2);
    printf("Before: num1 = %lf, num2 = %lf\n", d1, d2);
    larger_of(&d1, &d2);
    printf("After:  num1 = %lf, num2 = %lf\n", d1, d2);   
    return 0;
}

void larger_of(double *x, double *y)
{
    if (*x > *y)
        *y = *x;
    else 
        *x = *y;
}