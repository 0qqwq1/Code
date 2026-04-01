#include <stdio.h> 
#define SIZE 10
int is_within(const char * ptr, char ch);

int main(void)
{
    char words[SIZE];
    char ch;
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

        puts("Please enter the character you are looking for: ");
        if (scanf("%c", &ch) != 1)
            break;
        else    
            while (getchar() != '\n')
                continue;

        if(is_within(words, ch))
            puts("The character you are looking for can be found!");
        else
            puts("The character you are looking for cannot be found!");
        puts("Enter strings (empty line to quit):");
    }
    puts("DONE.");
    return 0;
}


int is_within(const char * ptr, char ch)
{
    int i = 0;

    if (ch == '\0')
        return 1;
    
    while (*(ptr + i) != '\0')
        if (*(ptr + i) == ch)
            return 1;
        else 
            i++;
    return 0;
}