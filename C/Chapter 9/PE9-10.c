#include <stdio.h>
void to_base_n(unsigned long n, int base);

int main(void)
{
    unsigned long number;
    int base;

    printf("Enter an integer and its base (q to quit):\n");
    while (scanf("%lu %d", &number, &base) == 2)
    {
        if (base < 2 || base > 10)     
            printf("The base must be between 2 and 10.\n");
        else{
            printf("Binary equivalent: ");
            to_base_n(number, base);
            putchar('\n');
        }
            printf("Enter an integer and its base (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n(unsigned long n, int base)
{   
    int r;

    r = n % base;
    if ((n / base) > 0)
        to_base_n((n / base), base);
    putchar('0' + r);
    //putchar() 函数用于输出字符，它需要接收一个字符的ASCII码。
    //需要把数字改成ASCII码的形式才能作为字符输出。
    //也可以直接用printf函数
}