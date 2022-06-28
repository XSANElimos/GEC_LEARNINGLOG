#include <stdio.h>

int main()
{
    int a = 4;
    unsigned int b = -20;
    unsigned int ans = a + b;
    printf("%X\n", ans);

    char ax = 250;
    printf("size:%d\n", sizeof(ax));
    printf("ax:%X\n", ax);
    return 0;
}