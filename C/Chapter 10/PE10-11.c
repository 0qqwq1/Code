#include <stdio.h>
#define ROWS 3
#define COLS 5
void show_array(int arr[][COLS], int n);
void double_array(int arr[][COLS], int n);
int main(void)
{
    int arr[ROWS][COLS] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 }
    };

    show_array(arr, ROWS);
    double_array(arr, ROWS);
    show_array(arr, ROWS);

    return 0;
}

void show_array(int arr[][COLS], int n)
{
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < COLS; cols++)
            printf("%d ", arr[rows][cols]);
        printf("\n");
    }
}

void double_array(int arr[][COLS], int n)
{
    for (int rows = 0; rows < n; rows++)
        for (int cols = 0; cols < COLS; cols++)
            arr[rows][cols] *= 2;
}
