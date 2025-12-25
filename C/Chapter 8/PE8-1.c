#include <stdio.h>
int main(void)
{
    char ch;
    long i;
    while ((ch = getchar()) != EOF)
    {
        if (ch > '\040')
            i++;
    }
    printf("There is a total of %d character in the file", i);
    return 0;
}