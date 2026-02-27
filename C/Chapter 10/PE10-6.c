#include <stdio.h>
#define SIZE 5
void arrange(double *, int);
int main(void)
{
    double input[SIZE] = { 1, 3, 4, 5, 2 };

    printf("Before: ");
    for (int i = 0; i < SIZE; i++)
        printf("%g ", input[i]);
    arrange(input, SIZE);
    printf("\nAfter: ");
    for (int i = 0; i < SIZE; i++)
        printf("%g ", input[i]);

    return 0;
}

void arrange(double input[], int n)
{
    double temp;

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++) //i的初始值为j + 1,即跳过找出的最大值和自身
        {
            if (input[i] > input[j])
            {
                temp = input[j];
                input[j] = input[i];
                input[i] = temp;
            }
        }
    }

}