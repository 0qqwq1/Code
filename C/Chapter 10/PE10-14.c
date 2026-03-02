#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_data(int rows, int cols, double arr[rows][cols]);
double aver_rows(int i, int cols, double arr[i][cols]);
double aver_arr(int rows, int cols, double arr[rows][cols]);
double get_max(int rows, int cols, double arr[rows][cols]);
void print_res(int n, double aver_row[n], double aver_arr, double max);
int main(void)
{
    double arr[ROWS][COLS];
    double aver_row[ROWS];

    get_data(ROWS, COLS, arr);
    for (int i = 0; i < ROWS; i++)
        aver_row[i] = aver_rows(i, COLS, arr);
    print_res(ROWS, aver_row, aver_arr(ROWS, COLS, arr), get_max(ROWS, COLS, arr));

    return 0;
}

void get_data(int rows, int cols, double arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        printf("Please enter five numbers: ");
        for (int j = 0; j < cols; j++)
            scanf("%lf", &arr[i][j]);
    }
}

double aver_rows(int i, int cols, double arr[i][cols])
{
    double total = 0;

    for (int j = 0; j < cols; j++)
        total += arr[i][j];

    return total / cols;
}

double aver_arr(int rows, int cols, double arr[rows][cols])
{
    double total = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            total += arr[i][j];

    return total / (rows * cols);
}

double get_max(int rows, int cols, double arr[rows][cols])
{
    double max = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }

    return max;
}

void print_res(int n, double aver_row[n], double aver_arr, double max)
{
    for (int i = 0; i < n; i++)
        printf("The average value of row %d is %g\n", i, aver_row[i]);
    printf("The overall average is %g, with a maximum value of %g", aver_arr, max);
}