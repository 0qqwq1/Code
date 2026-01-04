#include <stdio.h>
int main(void)
{
    int guess = 50;
    int i = 50;
    char respond;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nAnswer with a y if my guess is correct, a b if ");
    printf("my guess is too high, and an s if my guess is too low.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((respond = getchar()) != 'y')
    {   
        if (respond == 'b')
        {
            i = i / 2;
            guess = guess + i;
            printf("Well, then, is it %d?\n", guess);
        }
        else if (respond == 's')
        {
            i = i / 2;
            guess = guess - i;
            printf("Well, then, is it %d?\n", guess);
        }
        else
            printf("Sorry, I understand only y, b or s.\n");
        while (getchar() != '\n')
            continue;
    }
    printf("I knew I could do it!\n");
    return 0;
}
//问题在于无法覆盖到1~100中的所有数，
//而且但交互较多时，i值归零，guess值就不变了。