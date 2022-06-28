#include <stdio.h>

void swap1(int *a, int *b) //加减
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap2(int *a, int *b) //乘除
{
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}

void swap3(int *a, int *b) //异或
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a = 0, b = 0;
    printf("plz input two number that you want to swap\n");
    scanf("%d%d", &a, &b);
    printf("you input a : %d , b : %d\n", a, b);
    swap1(&a, &b);
    printf("swaped by first function! now they are %d and %d\n", a, b);
    swap2(&a, &b);
    printf("swaped by second function! now they are %d and %d\n", a, b);
    swap3(&a, &b);
    printf("swaped by third function! now they are %d and %d\n", a, b);
    return 0;
}