#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy(int rows, int cols, double copy[rows][cols]);
void put_res(int rows, int cols, double result[rows][cols]);
int main(void)
{
    double source[ROWS][COLS] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 }
    };

    printf("source:\n");
    put_res(ROWS, COLS, source);
    copy(ROWS, COLS, source);

    return 0;
}

void copy(int rows, int cols, double copy[rows][cols]) //copy_array
{
    double target[rows][cols];

    for (int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
        {
            target[i][j] = copy[i][j];
        }

    printf("\ntarget:\n");
    put_res(rows, cols, target);
}

void put_res(int N, int M, double result[N][M]) //show_array
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%g ", result[i][j]);
        printf("\n");
    }   
}