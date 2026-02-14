#include <stdio.h>
unsigned long Fibonacci(unsigned n);

int main(void)
{
    int n;

    printf("Please enter a number: ");
    while (scanf("%d", &n) != 1){
    //当用户输入非数字字符（比如字母）时，scanf("%d", &n) 会返回 0，表示没有成功读取任何整数。
    //但问题是，这些非数字字符会留在输入缓冲区中。下一次循环时，scanf 又会尝试从缓冲区读取这些
    //相同的非数字字符，结果还是返回 0，如此反复，形成死循环。
    
        while (getchar() != '\n')
            continue;               //一定要清理缓冲区，不然会一直循环。
        printf("Please enter a number: ");
    }
    printf("The %d number in the Fibonacci sequence is %d.\n", n, Fibonacci(n));


    return 0;
}

unsigned long Fibonacci(unsigned n)
{
    int a = 1, b;
    int res = 1;

    if (n > 2){
        for (int i = 2; i <= n; i++){
            b = res;
            res += a;
            a = b;
        }
    }

    return res;
}