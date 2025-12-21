/*编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设：
a．基本工资 = 10.00 美元/ 小时
b．加班（超过40 小时） = 1.5 倍的时间
c．税率：　 前300 美元为15%
　　　　　　续150 美元为20%
　　　　　　余下的为25%
用#define 定义符号常量。不用在意是否符合当前的税法。
*/
#include <stdio.h>
#define Base_Time 40
#define Overtime_Rate 1.5
#define Basic_Salary 10
#define Tax_Rate_0 0.15
#define Tax_Rate_1 0.2
#define Tax_Rate_2 0.25
#define Tax_1 300 * Tax_Rate_0
#define Tax_2 300 * Tax_Rate_0 + 150 * Tax_Rate_1
#define Tax_Limit_1 300
#define Tax_Limit_2 450

int main(void)
{
    int time;
    double total_payroll, tax, net_income;
    printf("How many hours do you work each week?\n");
    scanf("%d", &time);

    if (time > Base_Time)
    {
        total_payroll = (Base_Time + (time - Base_Time) * Overtime_Rate) * Basic_Salary;
    }
    else
    {
        total_payroll = time * Basic_Salary;
    }

    if (total_payroll > Tax_Limit_2)
    {
        tax = Tax_2 + (total_payroll - Tax_Limit_2) * Tax_Rate_2;
    }
    else if (total_payroll > Tax_Limit_1 && total_payroll <= Tax_Limit_2)
    {
        tax = Tax_1 + (total_payroll - Tax_Limit_1) * Tax_Rate_1;
    }
    else
    {
        tax = total_payroll * Tax_Rate_0;
    }
    
    net_income = total_payroll - tax;
    printf("total_payroll = $%.2f\n", total_payroll);
    printf("tax = $%.2f\n", tax);
    printf("net_income = $%.2f\n", net_income);
    return 0;
}