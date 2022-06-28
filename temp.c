#include <stdio.h>

int main()
{
    int index = 10;
    while (index != 0)
    {
        printf("==========\n");
        printf("1.Register\n");
        printf("2.Login\n");
        printf("3.Borrow\n");
        printf("4.Submit\n");
        printf("5.Later\n");
        printf("6.Exit\n");
        printf("==========\n");
        scanf("%d", &index);
        switch (index)
        {
        case 1:
            printf("Register!\n");
            break;
        case 2:
            printf("Login!\n");
            break;
        case 3:
            printf("Borrow!\n");
            break;
        case 4:
            printf("Submit!\n");
            break;
        case 5:
            printf("Borrow More Time!!\n");
            break;
        case 6:
            printf("EXIT!\n");
            return 0;
            break;
        default:
            printf("ERROR INPUT!\nPlz check your input!\n");
            break;
        }
    }
    return 0;
}