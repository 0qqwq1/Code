#include <stdio.h>

int main()
{
    int w_time, p_sum, sui;
    printf("How much time do you work each week?\n");
    scanf("%d",&w_time);

    if(w_time <= 40)
    {
        p_sum = 10 * w_time;
    }
    else
    {
        p_sum = 10 * ((w_time - 40) * 1.5 + 40);
    }

    if(p_sum <= 300)
    {
        sui = 0.15 * p_sum;
    }
    else if(p_sum > 300 & p_sum <= 450)
    {
        sui = 0.15 * 300 + 0.2 * (p_sum - 300);
    }
    else 
    {
        sui = 0.15 * 300 + 0.2 * 150 + 0.25 * (p_sum - 450);
    }

    printf("p_sum = %d\nsui = %d\nincome = %d\n", p_sum, sui, p_sum-sui);
    return 0;
}