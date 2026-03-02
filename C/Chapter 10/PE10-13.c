#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_data(double arr[][COLS], int rows);
double aver_rows(double arr[][COLS], int i);
double aver_arr(double arr[][COLS], int row);
double get_max(double arr[][COLS], int rows);
void print_res(double aver[], int n, double aver_arr, double max);
int main(void)
{
    double arr[ROWS][COLS];
    double aver_row[ROWS];

    get_data(arr, ROWS);
    for (int i = 0; i < ROWS; i++)
        aver_row[i] = aver_rows(arr, i);
    print_res(aver_row, ROWS, aver_arr(arr, ROWS), get_max(arr, ROWS));

    return 0;
}

void get_data(double arr[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        printf("Please enter five numbers: ");
        for (int j = 0; j < COLS; j++)
            scanf("%lf", &arr[i][j]);
    }
}

double aver_rows(double arr[][COLS], int i)
{
    double total = 0;

    for (int j = 0; j < COLS; j++)
        total += arr[i][j];

    return total / COLS;
}

double aver_arr(double arr[][COLS], int rows)
{
    double total = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COLS; j++)
            total += arr[i][j];

    return total / (rows * COLS);
}

double get_max(double arr[][COLS], int rows)
{
    double max = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }

    return max;
}

void print_res(double aver_row[], int n, double aver_arr, double max)
{
    for (int i = 0; i < n; i++)
        printf("The average value of row %d is %g\n", i, aver_row[i]);
    printf("The overall average is %g, with a maximum value of %g", aver_arr, max);
}