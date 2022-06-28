#include "elimos_function.h"

int main()
{
    double n = 0.0, result = 1.0, i = 1.0;
    int count = 1;
    printf("Plz input n:\n");
    scanf("%lf", &n);
    while (i < n)
    {
        if (count % 2 != 0)
        {
            result += (1.0 / i);
            printf("+ ");
        }
        else
        {
            result -= (1.0 / i);
            printf("- ");
        }
        count++;
        i++;
    }
    printf("%lf\n", result);
    return 0;
}