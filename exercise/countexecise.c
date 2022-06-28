#include "elimos_function.h"

int main()
{
    char words[10][20] = {
        "individaul",
        "ten",
        "hundred",
        "thousand",
        "myriad",
        "lakh",
        "million",
        "tens of millions"};
    int numbox[10] = {0};
    int number = 0, bit = 0;
    printf("please input a number\n");
    scanf("%d", &number);
    for (int i = number; i > 0; i /= 10)
    {
        numbox[bit] = i % 10;
        printf("%-20s : %d\n", words[bit], numbox[bit]);
        bit++;
    }

    return 0;
}