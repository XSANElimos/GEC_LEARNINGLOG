#include <stdio.h>
#include "..\bitcontrol.h"

int main()
{
    int input = 0, bit = 0;
    printf("input the number and the bit you want to control");
    scanf("%d%d", &input, &bit);
    printf("current Input is : 0x%X\n", input);
    bitreset(bit, &input);
    printf("set 0 then it become : 0x%X\n", input);
    bitset(bit, &input);
    printf("set 1 then it become : 0x%X\n", input);
    bitchange(bit, &input);
    printf("change 1 then it become : 0x%X\n", input);
    getchar();
    getchar();
    return 0;
}