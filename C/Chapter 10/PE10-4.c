#include <stdio.h>
#define SIZE 3
int max_num(const double *, int);
int main(void)
{
    const double input[] = { 1, 100, 99 };

    printf("%d\n", max_num(input, SIZE));

    return 0;
}

int max_num(const double input[], int n)
{
    int output = 0, i;
    double high = input[i];

    for (i = 0; i < n; i++)
    {
        if (input[i] > high){
            high = input[i];
            output = i;
        }
            
    }

    return output;
}