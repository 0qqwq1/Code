#include <stdio.h>
#define SIZE 20
void get_data(char input[], int n);
int main(void)
{
    char input[SIZE];

    puts("Please enter:");
    get_data(input, SIZE);
    puts("Result:");
    for (int i = 0; i < SIZE; i++)
        putchar(input[i]);

    return 0;
}

void get_data(char input[], int n)
{
    int i = 0;
    char ch;

    while (i < n)
    {
        ch = getchar();
        if (ch == EOF)
            break;
        input[i] = ch;
        i++;
    }

    // 只有读满了 n 个字符，才需要清空缓冲区
    // 因为如果没读满，说明用户输入不够多，或者遇到EOF，缓冲区已经没多余内容了
    if (i == n)
    {
        // 清空到换行符为止
        while ((ch = getchar()) != '\n' && ch != EOF)
            continue;
    }
}

// 假设 n=20，用户只输入了 "hello\n"
// 第一次循环：读取了 'h','e','l','l','o','\n' 共6个字符
// i = 6 时退出 while (i < n) 循环
// 然后执行 while (getchar() != '\n')
// 但此时输入缓冲区中已经没有字符了（'\n'已经被读走了）
// 所以这个循环会一直等待用户输入，直到输入一个换行符