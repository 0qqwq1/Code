#include <stdio.h>
char get_choice(void);
char get_first(void);
double get_number(void);
int main(void)
{
    int choice;
    char operator;
    double num_01, num_02;

    while ((choice = get_choice()) != 'q')
    {
        printf("Enter first number: ");
        num_01 = get_number();
        printf("Enter second number: ");
        num_02 = get_number();
        while ((choice == 'D' || choice == 'd') && num_02 == 0)
        {
            printf("0 cannot be a divisor: ");
            num_02 = get_number();
        }

        switch (choice)
        {
            case 'A':
            case 'a': 
                operator = '+';
                printf("%.1f %c %.1f = %.1f\n", num_01, operator, num_02, (num_01 + num_02));
                break;
            case 'S':
            case 's': 
                operator = '-';
                printf("%.1f %c %.1f = %.1f\n", num_01, operator, num_02, (num_01 - num_02));
                break;
            case 'M':
            case 'm':
                operator = '*';
                printf("%.1f %c %.1f = %.1f\n", num_01, operator, num_02, (num_01 * num_02));
                break;
            case 'D':
            case 'd': 
                operator = '/';
                printf("%.1f %c %.1f = %.1f\n", num_01, operator, num_02, (num_01 / num_02));
                break;
        }
    }

    printf("Bye.\n");

    return 0;
}

char get_choice(void)
{
    int ch;

    printf("Enter the operation of your chioce:\n");
    printf("a. add          s. subtract\n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");  

    ch = get_first();
    while (!(ch == 'a' || ch == 's' || ch == 'm' || ch == 'd') && ch != 'q')
    {
        printf("Please respond with a, s, m, d, or q\n");
        ch = get_first();
    }

    return ch;
}

char get_first(void)
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;

    return ch;
}

double get_number(void)
{
    int ch;
    double input;

    while (scanf("%lf", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a number\nPlease enter a number,");
        printf(" such as 2.5, -1.78E8, or 3: ");
    }

        while (getchar() != '\n')  // 清空输入缓冲区
        continue;
    return input;
}