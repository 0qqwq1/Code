#include <stdio.h>
void sort(double*, double*, double*);

int main(void)
{
    double d1, d2, d3;

    printf("Please enter three number: ");
    scanf("%lf %lf %lf", &d1, &d2, &d3);
    sort(&d1, &d2, &d3);
    printf("The order from small to large is %g, %g, %g", d1, d2, d3);
    return 0;
}

void sort(double *x, double *y, double *z)
{
    double temp;

    temp = *z; if (*y > *z) {*z = *y; *y = temp;}
    temp = *z; if (*x > *z) {*z = *x; *x = temp;}
 
    if (*x > *y) {temp = *x; *x = *y; *y = temp;}
}
//考虑两两比较