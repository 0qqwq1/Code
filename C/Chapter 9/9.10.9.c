#include <stdio.h>
void show_menu(void);
int get_choice(int, int);

int main(void)
{
    const int high = 4, low = 1;
    int choice;

    while((choice = get_choice(high, low)) != high)
    {
        printf("What you chose is %d\n", choice);
        get_choice(high, low);
    }
    printf("Bye!\n");

    return 0;
}

void show_menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files       2) move files\n");
    printf("3) remove files     4) quit\n");
    printf("Enter the number of your choice: ");
}

int get_choice(int high, int low)
{
    int input;

    do{
        show_menu();
        if((scanf("%d", &input)) != 1) 
            input = high;
    } while(input < low || input > high);

    return input;
}