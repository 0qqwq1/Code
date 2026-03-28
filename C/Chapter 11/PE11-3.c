#include <stdio.h>
#define SIZE 20
int get_word(char input[], int n);
int main(void)
{
    char input[SIZE];
    int n;

    puts("Please enter:");
    n = get_word(input, SIZE);
    puts("Result:");
    for (int i = 0; i < n; i++)
        putchar(input[i]);

    return 0;
}

int get_word(char input[], int n)
{
    char ch;
    int i = 1;

    while ((ch = getchar()) != EOF)
    {
        if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            input[0] = ch;
            break;
        }    
    }

    if (ch != EOF)
    {
        while (i < n && (ch = getchar()) != EOF)
        {
            input[i] = ch;
            i++;
            if (ch == ' ' || ch == '\n' || ch == '\t')
                break;
        }   
        
        while (getchar() != '\n')
            continue;
    }
    return i;
}