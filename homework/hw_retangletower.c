#include "elimos_function.h"

int main()
{
    int height = 0;
    printf("input the tower's height\n");
    scanf("%d", &height);
    for (int i = 0; i < height; i++)
    {
        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}