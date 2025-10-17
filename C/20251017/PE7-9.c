#include <stdio.h>

int main()
{
    int num;
    int i = 3, j = 2;
    printf("Please enter a positive integer:");
    scanf("%d",&num);

    if(num >= 0)
    {   
        printf("1\n");
        while(i <= num)
        {
            if(i % j == 0)
            {
                i++;
                j = 2;
            }
            else if(j == i - 1)
            {
                j = 2;
                printf("%d\n",i);
                i++;
            }    
           else
           {
                j++;
           }
        }
    }
    return 0;
}