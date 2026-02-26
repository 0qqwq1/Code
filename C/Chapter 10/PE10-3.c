#include <stdio.h>
#define SIZE 3
int max(const int *, int);
int main(void)
{
    const int input[] = { 1, 100, 3 };

    printf("%d\n", max(input, SIZE));

    return 0;
}

int max(const int input[], int n)
{
    int output = 0;

    for (int i = 0; i < n; i++)
    {
        if (input[i] > output)
            output = input[i];
    }

    return output;
}