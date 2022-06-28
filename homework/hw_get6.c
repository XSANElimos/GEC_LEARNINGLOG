#include <stdio.h>

int *getEachNumber(int number)
{
    int numbox[10] = {0};
    int bit = 0;
    for (int i = number; i > 0; i /= 10)
    {
        numbox[bit] = i % 10;
        bit++;
    }
    return numbox;
}

int main(int argc, char const *argv[])
{
    int range;
    int numberbox[10] = {0};
    printf("input range you want to count\n");
    scanf("%d", &range);
    for (int i = 1; i <= range; i++)
    {
        if (i % 6 == 0) //能被6整除
        {
            printf("%7d", i);
        }
        numberbox[10] = getEachNumber(i); // 获取所有位的值
        int flag = 0;                     // 是否包含
        for (int j = 0; j <= 10; j++)
        {
            if (flag == 0 && numberbox[j] == 6)
            {
                flag++;
                printf("%7d", i);
            }
        }
    }
    return 0;
}