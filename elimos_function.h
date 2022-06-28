#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * @brief 交换传入的两个数
 * 不需要返回值 ， 直接修改传入的值
 * @param x 数1
 * @param y 数2
 */
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * @brief 判断一个数是否是奇数
 *
 * @param num 为要判断的数
 * @return true为是奇数，false为不是奇数
 */
bool isOdd(int num)
{
    int temp = 0x00000001;
    num &= temp;
    if (num == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief 判断一个数是否是偶数
 *
 * @param num 为要判断的数
 * @return true为是偶数，false为不是偶数
 */
bool isEven(int num)
{
    int temp = 0x00000001;
    num &= temp;
    if (num == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void stop()
{
    getchar();
    getchar();
}