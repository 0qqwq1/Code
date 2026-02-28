#include <stdio.h>
#define ROWS 2
#define COLS 7
void copy_ptrs(double * target3, double * start, double * end);
int main(void)
{
    double source[ROWS][COLS] = { [0][2] = 1, 2, 3, [1][2] = 4, 5, 6 };
    double target[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
        copy_ptrs(target[i], source[i] + 2, source[i] + 5);

    return 0;
}

void copy_ptrs(double * target, double * start, double * end)//移动指针法 *target++ = *source++
//有初始和末尾地址，应用while循环
{
    double *original_target = target;  // 保存起始位置用于打印
    
    // 拷贝数据
    while (start < end)
    {
        *target++ = *start++;
    }
    
    // 打印结果
    int num_elements = target - original_target;  // 计算拷贝的元素个数
    for (int i = 0; i < num_elements; i++)
    {
        printf("%g ", original_target[i]);
    }
    printf("\n");
}