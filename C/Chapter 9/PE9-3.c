#include <stdio.h>
void chline(char, int, int);

int main(void)
{
    char ch;
    int i, j;

    printf("Enter a character: ");
    ch = getchar();
    while (getchar() != '\n')
        continue;
    printf("Enter rows and columns: ");
    scanf("%d %d", &i, &j);
    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    for (int a = 1; a <= i; a++)
    {       
        for (int b = 1; b <= j; b++)
            putchar(ch);
        putchar('\n');
    }
}