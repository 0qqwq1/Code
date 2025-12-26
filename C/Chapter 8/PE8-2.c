#include <stdio.h>
int main(void)
{
    char ch;
    int count_per_line = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= '\040')
            printf(" %c--%d", ch, ch);
        else if (ch == '\n')
        {
            putchar('\040');
            putchar('\134');
            putchar('n');
            printf("\n");
        }
        else if (ch == '\t')
        {
            putchar('\040');
            putchar('\134');
            putchar('t');
            printf("\t");
        }
        else if (ch < '\040')
        {
            putchar('\040');
            ch = ch + 64;
            putchar('^');
            putchar(ch);
            printf("--%d", ch - 64);
        }
        count_per_line++;
        if (count_per_line == 10)
            putchar('\n');
    }
    return 0;
}