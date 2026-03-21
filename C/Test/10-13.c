#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_arr(int rows, int cols, double input[rows][cols]);
double aver_set(int cols, double input[cols]);
double aver_arr(int rows, int cols, double input[rows][cols]);
double get_max(int rows, int cols, double input[rows][cols]);
void put_res(int rows, int cols, double input[rows][cols], double aver_arr, double max);

int main(void)
{
    double input[ROWS][COLS];
    
    get_arr(ROWS, COLS, input);
    put_res(ROWS, COLS, input, aver_arr(ROWS, COLS, input), get_max(ROWS, COLS, input));

    return 0;
}

void get_arr(int rows, int cols, double input[rows][cols])
{
    puts("Please enter 3 sets of data, with 5 numbers in each set.");

    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%lf", &input[i][j]);
}

double aver_set(int cols, double input[cols])
{
    int total = 0;

    for (int i = 0; i < cols; i++)
        total += input[i];

    return total / cols;
}

double aver_arr(int rows, int cols, double input[rows][cols])
{
    int total = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            total += input[i][j];

    return total / (rows * cols);
}

double get_max(int rows, int cols, double input[rows][cols])
{
    double high = input[0][0];
    
    for (int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
        {
            if(input[i][j] > high)
                high = input[i][j];
        }

    return high;
}

void put_res(int rows, int cols, double input[rows][cols], double aver_arr, double max)
{
    for (int i = 0; i < rows; i++)
        printf("The average of Group %d is %g.\n", i, aver_set(COLS, input[i]));
    printf("The overall average vaule is %g.\n", aver_arr);
    printf("The maximum vaule is %g", max);
}