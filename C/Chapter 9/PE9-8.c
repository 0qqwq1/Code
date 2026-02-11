#include <stdio.h>
#include <math.h>
double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

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
        printf("Enter next pair of munbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    if (p > 0)
    {
        for (i = 1; i <= p; i++)
            pow *= n;
    }
    else if (p < 0)
    {
        for (i = 1; i <= -p; i++)
            {pow *= 1 / n;}
    }
    if (n == 0)
        pow = 0;

    return pow;
}