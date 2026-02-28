#include <stdio.h>
#define ROWS 2
#define COLS 2
void copy_arr(double target[], double source[], int n);
int main(void)
{
    double source[ROWS][COLS] = { { 1, 200 }, { 3, 4 } };
    double target[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
        copy_arr(target[i], source[i], COLS);


    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = source[i];
        printf("%g ", target[i]);
    }
    printf("\n");
}