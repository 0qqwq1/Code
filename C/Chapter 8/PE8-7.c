#include <stdio.h>
#define TAX_lim_1 300
#define TAX_lim_2 450
#define TAX_rate_0 0.15
#define TAX_rate_300 0.20
#define TAX_rate_450 0.25
#define TAX_1 TAX_lim_1 * TAX_rate_0
#define TAX_2 (TAX_lim_2 - TAX_lim_1) * TAX_rate_0 + TAX_lim_1 * TAX_rate_0
#define HOURS_limit 40
#define WAGE_multiplier_1 8.75
#define WAGE_multiplier_2 9.33
#define WAGE_multiplier_3 10.00
#define WAGE_multiplier_4 11.20
char get_choice(void);
char get_first(void);
double get_float(void);
char get_choice(void);
int main(void)
{
    int hour = 0, choice = 0;
    double total_payroll = 0;
    double tax = 0;
    double net_income = 0;
    double multiply = 0;

    while ((choice = get_choice()) != 'q')
    {
    switch (choice)
    {
        case 'a': multiply = WAGE_multiplier_1; break;
        case 'b': multiply = WAGE_multiplier_2; break;
        case 'c': multiply = WAGE_multiplier_3; break;
        case 'd': multiply = WAGE_multiplier_4; break;
        default: printf("Program error!\n"); break;
    }
    printf("How many hours do you work per week?\n");
    hour = get_float();
    while (getchar() != '\n')
        continue;
    if (hour > HOURS_limit)
        hour = 1.5 * hour;
        //printf("h=%.2lf", hour);得到的值为0，但h是有值的，为什么
    total_payroll = hour * multiply;
    if (total_payroll > 450)
        tax = TAX_1 + TAX_2 + (total_payroll - TAX_lim_2) * TAX_rate_450;
    else if (total_payroll > 300 && total_payroll <= 450)
        tax = TAX_1 + (total_payroll - TAX_lim_1) * TAX_rate_300;
    else
        tax = total_payroll * TAX_rate_0;
    net_income = total_payroll - tax;
    printf("Your total salary is $%.2f,\n", total_payroll);
    printf("with taxes amounting to $%.2f,\n", tax);
    printf("resulting in a net income of $%.2f.\n", net_income);
    }
    
    printf("Bye.\n");
    
    return 0;
    }


char get_choice(void)
{
    int ch;

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr                          b) $9.33/hr\n");
    printf("c) $10.00/hr                         d) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'd') && ch != 'q')
    {
        printf("Please respond with a, b, c, d, or q.\n");
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

double get_float(void)
{
    double input;
    char ch;

    while (scanf("%lf", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a number.\nPlease enter an ");
        printf("integer vaule, such as 25.0, -178.0, or 3.0: ");
    }

    return input;
}

