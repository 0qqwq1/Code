#include <stdio.h>
char get_letter(void);
int count(char);

int main(void)
{
    char ch;
    
    printf("Please enter: ");
    while ((ch = get_letter()) != EOF)
        continue;
    printf("Bye!\n");

    return 0;
}

char get_letter(void)
{
    char ch;

    while ((ch = getchar()) == '\n' || ch == ' ' || ch == '\r')
        continue;
    if (ch == EOF) return EOF;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) //if (count(ch) != -1)更简便
        printf("%c is a letter, and its position in the alphabet is %d\n", ch, count(ch));
    else
        printf("%c is not a letter\n", ch);

    return ch;  
    //可直接在函数中实现，主函数不需要那么多代码
    //char ch;
    //printf("...");
    //while((ch = getchar()) != EOF)
    //if(ch == '\n' || ch == ' ' || ch == '\r') continue;
    //if (count(ch) != -1) ...;
}

int count(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch - 64;
    if (ch >= 'a' && ch <= 'z')
        return ch - 96;
    else 
        return -1;//可以被利用起来判断是否为字母
}


