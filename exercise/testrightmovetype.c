#include <stdio.h>
#include "..\bitcontrol.h"
int main()
{
    int num = -65536;
    num >> 3;
    int bitnum = sizeof(num) * 8 - 1;
    if (getbit(num, bitnum) == 0)
    {
        printf("逻辑右移\n");
    }
    else
    {
        printf("算术右移\n");
    }
    return 0;
}