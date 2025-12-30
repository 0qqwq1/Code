#include <stdio.h>
#include <ctype.h>
int main(void)
{
    float num_of_words = 0, sum_of_letters = 0;
    float average = 0;
    int ch;
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
            sum_of_letters++;
        else 
        {
            num_of_words++;
            while (!isalpha(ch = getchar()))
            {
                if (ch == EOF)
                    break;
            }
            if (ch == EOF)
                break;
            sum_of_letters++;
        }

    }
    average = sum_of_letters / num_of_words;
    printf("Each word has an average of %.1f letters", average);
    return 0;
}