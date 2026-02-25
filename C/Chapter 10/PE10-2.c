#include <stdio.h>
void copy_arr(double *, double *, int);
void copy_ptr(double *, double *, int);
void copy_ptrs(double *, double *, double *);
int main(void)
{
    double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);


    return 0;
}

void copy_arr(double target1[], double source[], int n)//数组表示法，target1[i] = source[i];
{
    for (int i = 0; i < n; i++)
    {
        target1[i] = source[i];
        printf("%g ", target1[i]);
    }
    printf("\n");
}

void copy_ptr(double * target2, double * source, int n)//带索引的指针法 *(target + i) = *(source + i);
//即有元素个数，应用for循环
{
    for (int i = 0; i < n; i++)
    {
        *(target2 + i) = *source++;
        printf("%g ", target2[i]);
    }
    printf("\n");
}

/*void copy_ptrs(double * target3, double * start, double * end)
{
    int i = 0, n = 5;
    while (start < end && i < n)
    {
        *(target3 + (i++)) = *start++; 
    }

        for (i = 0, n = 5; i < n; i++)
    {
        printf("%lf ", target3[i]);
    }  
}
*/

void copy_ptrs(double * target3, double * start, double * end)//移动指针法 *target++ = *source++
//有初始和末尾地址，应用while循环
{
    double *original_target = target3;  // 保存起始位置用于打印
    
    // 拷贝数据
    while (start < end)
    {
        *target3++ = *start++;
    }
    
    // 打印结果
    int num_elements = target3 - original_target;  // 计算拷贝的元素个数
    for (int i = 0; i < num_elements; i++)
    {
        printf("%g ", original_target[i]);
    }
    printf("\n");
}

/* 错误示范
void copy_ptrs(double * target3, double * start, double * end)
{
    while (start < end)
    {
        *target3++ = *start++;  // target3 在移动
    }
    
    // 错误：此时 target3 已经指向数组末尾，不是开头
    for (int i = 0; i < 5; i++)
    {
        printf("%lf ", target3[i]);  // 这会打印出数组后面的内存内容
    }  
}
    也就是说，target3在反复递增后不再指向&target[0]，所以需要保留原始位置
*/