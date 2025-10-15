#include <stdio.h>

int main()
{
    int t_count = 0;
    char input;
    printf("Please enter:");
    while((input = getchar())!='#')
    {
        switch(input)
        {
            case '!' : putchar('!');
                       putchar('!');
                       ++t_count;
                       break;
            case '.' : putchar('!');
                       ++t_count;
                       break;
            default : break;
        }
    }
    printf("\nt_count=%d\n",t_count);
    return 0;
}