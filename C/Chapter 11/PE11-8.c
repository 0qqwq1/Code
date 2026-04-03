#include <stdio.h>
#include <string.h>
char * string_in(const char * s1, const char * s2);
int main(void)
{
    char * ptr;

    if ((ptr = string_in("hats", "qqqqqq")) == NULL)
    puts("s2 is not contained within s1;");
    else
    printf("The address of s2 in s1 is %p", ptr);
    return 0;

}

char * string_in(const char * s1, const char * s2)
{
    int i = 0, j = 0;

    while (*(s1 + i) != '\0' && *(s2 + j) != '\0')
    {
        if (*((s1 + i) + j) != *(s2 + j))
        {
            j = 0;
            i++;
        }
        else
            j++;
    }
    
    if (*s2 != '\0' && *(s1 + i) == '\0')
        return NULL;
    else
        return (char *)(s1 + i);
}
 
/*
//找到s1字符串中s2字符串出现的首位置，若没有，则返回空指针。
char * string_in(const char * s1, const char * s2)
{
    int i = 0;

    while (strcmp(s1 + i, s2)) //一直循环，直到s1字符串中找到s2字符串为止。
    {
        if (*(s1 + i) == '\0') //需要退出循环的条件，可用strncmp()优化。
            break;
        i++;
    }

    if (strcmp(s2, "\0") && *(s1 + i) == '\0')
        return NULL;
    else 
        return (char *)(s1 + i);
}
*/
