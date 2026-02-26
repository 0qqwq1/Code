#include <stdio.h>
#define SIZE 3
double high_diff(const double *, int);
int main(void)
{
    const double input[] = { 1, 1023, 99 };

    printf("%d\n", high_diff(input, SIZE));

    return 0;
}

double high_diff(const double input[], int n)
{
    int i;
    double high = input[i];
    double low = input[i]; //使用数组第一个元素初始化更为通用

    for (i = 0; i < n; i++)
    {
        if (input[i] > high) high = input[i];
        if (input[i] < low)  low = input[i];  
    }

    return high - low;
}