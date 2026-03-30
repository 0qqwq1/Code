#include <stdio.h> 
#define SIZE 10
char * find_char(const char * input, char ch);

int main(void)
{
    char words[SIZE];
    char  * address;
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
        address = find_char(words, ch);
        if(address != NULL)
            printf("The address of the character '%c' you are looking for is %p\n", ch, address);
        else
            puts("The character you are looking for cannot be found");
        puts("Enter strings (empty line to quit):");
    }
    puts("DONE.");
    return 0;
}


char * find_char(const char * input, char ch)
{
    int i = 0;

    while (*(input + i) != '\0')
        if (*(input + i) == ch)
            return (char *)(input + i);
        else
            i++;

    return NULL;
}


