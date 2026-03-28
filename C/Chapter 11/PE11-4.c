#include <stdio.h>
void get_word(int);
int main(void)
{
    int size;
    printf("Please enter the maximum number of characters: ");
    while (scanf("%d", &size) != 1)
    {
        printf("Please enter number: ");
        while (getchar() != '\n')
            continue;
    }
        
    puts("Please enter:");
    get_word(size);

    return 0;
}

void get_word(int n)
{
    char input[n];
    char ch;
    int i = 0;

    while ((ch = getchar()) == ' ' || ch == '\n' || ch == '\t')
        continue;

    if (ch == EOF)
        return ;

    input[i++] = ch;
    while (i < n && (ch = getchar()) != EOF)
    {
        input[i] = ch;
        i++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            break;
    }   
        
    while (getchar() != '\n')
        continue;

    puts("Result:");
    for (int j = 0; j < i; j++)
        printf("%c", input[j]);    
}