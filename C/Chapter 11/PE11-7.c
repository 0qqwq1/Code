#include <stdio.h>
#include <string.h>
#define LIM  5
#define SIZE 100
char * mystrncpy(char * s1, const char * s2, int n);
int main(void)
{
    char words[SIZE];
    char copy[LIM];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, SIZE, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;

        mystrncpy(copy, words, LIM);
        for (i = 0; i < LIM; i++)
            putchar(copy[i]);
        putchar('\n');
        puts("Enter strings (empty line to quit):");
    }
    puts("DONE.");
    return 0;
}

char * mystrncpy(char * s1, const char * s2, int n)
{
    int i = 0;

    if (n <= 0)
        return s1;

    while (i < n && s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }

    while (i < n)
    {
        s1[i] = '\0';
        i++;
    }
    return s1;
}
