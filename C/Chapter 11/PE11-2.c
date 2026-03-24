#include <stdio.h>
#define SIZE 20
void get_n_words(char input[], int n);
int main(void)
{
    char input[SIZE];

    puts("Please enter:");
    get_n_words(input, SIZE);
    puts("Result:");
    for (int i = 0; i < SIZE; i++)
        putchar(input[i]);

    return 0;
}

void get_n_words(char input[], int n)
{
    int i = 0;
    char ch;

    while (i < n)
    {
        ch = getchar();
        if (ch == EOF)
            break;
        input[i] = ch;
        i++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            break;
    }

    if (i == n)
    {
        while ((ch = getchar()) != '\n' && ch != EOF)
            continue;
    }
}