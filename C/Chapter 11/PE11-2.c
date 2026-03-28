#include <stdio.h>
#define SIZE 20
int get_n_words(char input[], int n);
int main(void)
{
    char input[SIZE];
    int n;

    puts("Please enter:");
    n = get_n_words(input, SIZE);
    puts("Result:");
    for (int i = 0; i < n; i++)
        printf("%c", input[i]);

    return 0;
}

int get_n_words(char input[], int n)
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

        while (getchar() != '\n')
            continue;

            return i;
}