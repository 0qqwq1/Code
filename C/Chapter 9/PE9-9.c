#include <stdio.h>
double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp, pow = 1;

    printf("Enter a number and the positive integer power");
    printf(" to which \nthe number wil be rasied. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        if (x != 0 || exp != 0){
            xpow = power(x, exp);
            printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        }
        else 
            printf("Undefined! 0 to the power 0 is 1.\n");
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    double pow;

    if (p > 0)
        pow = n * power(n, p - 1);
    else if (p < 0)
        pow = (1 / n) * power(n, p + 1);
    else 
        pow = 1; //因为是pow = n * pow

    if (n == 0)
        return 0;

    return pow;
}

/*
double power(double n, int p)
{
    if (n == 0)
        return 0;
    
    if (p == 0)
        return 1;
    
    if (p > 0)
        return n * power(n, p - 1);
    else  // p < 0
        return (1.0 / n) * power(n, p + 1);
}
*/