#include <stdio.h>
int main(void)
{
    int uppercase_letters_num = 0;
    int lowercase_letters_num = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
            uppercase_letters_num++;
        else if (ch >= 'a' && ch <= 'z')
            lowercase_letters_num++;
    }
    printf("There are %d uppercase letters and %d lowercase letters.\n", uppercase_letters_num, lowercase_letters_num);
    return 0;
}