#include <stdio.h>
char get_first(void);
int main(void)
{
    int ch;

    printf("Please enter a string of characters.\n");
    ch = get_first();
    printf("The non-empty first character is ");//字符输出是%c
    putchar(ch);

    return 0;
}

char get_first(void)
{
    int ch;

    while ((ch = getchar()) == ' ' || ch == '\n' || ch == '\t')
        continue;
    while (getchar() != '\n')
        continue;
    /*答案中利用了do-while
    do{
        ch = getchar()
    }while (ch == '' || ch == '\n' || ch == '\t');
    相对来说更加简练
    */
    return ch;
}
//' ' '\n' '\t'都为空白字符