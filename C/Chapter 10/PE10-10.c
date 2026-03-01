#include <stdio.h>
#define SIZE 5
void get_sum(int arr1[], int arr2[], int res[], int n);
int main(void)
{
    int arr1[SIZE] = { 1, 2, 3, 4, 5 };
    int arr2[SIZE] = { 6, 7, 8, 9, 0 };
    int res[SIZE];

    get_sum(arr1, arr2, res, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", res[i]);

    return 0;
}

void get_sum(int arr1[], int arr2[], int res[], int n)
{
    for (int i = 0; i < n; i++)
        res[i] = arr1[i] + arr2[i];
}