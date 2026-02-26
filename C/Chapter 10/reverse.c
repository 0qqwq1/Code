#include <stdio.h>
#define SIZE 5
void reverse(double *, int);
int main(void)
{
    double input[SIZE] = { 1, 2, 3, 4, 5 };

    printf("Before: ");
    for (int i = 0; i < SIZE; i++)
        printf("%g ", input[i]);
    reverse(input, SIZE);
    printf("\nAfter: ");
    for (int i = 0; i < SIZE; i++)
        printf("%g ", input[i]);

    return 0;
}

void reverse(double input[], int n)
{
    double copy[n];
    int i, c;

    for (i = 0, c = n - 1; i < n; i++, c--) 
        copy[c] = input[i];
    for (i = 0; i < n; i++)
        input[i] = copy[i];
}