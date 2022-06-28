
/**
 * @brief 将制定int类型数的某一位置1
 */
#define setbit(x, y) x |= (1 << y)

/**
 * @brief 将制定int类型数的某一位置0
 */
#define clrbit(x, y) x &= ~(1 << y)

/**
 * @brief 将制定int类型数的某一位反转
 */
#define reversebit(x, y) x ^= (1 << y)

/**
 * @brief 获取指定数字的指定二进制位值
 */
#define getbit(x, y) ((x) >> (y)&1)

/**
 * @brief 将制定int类型数的某一位置0
 *
 * @param bit 为指定要置0的位数 0是第一位
 * @param num 为指定要置位的数 为int类型
 * @return int 可以不指定函数返回 默认会变更传入的数
 */
int bitreset(int bit, int *num)
{
    int temp = 0xFFFF, currentbit = 1;
    for (int i = 1; i <= bit; i++)
    {
        currentbit *= 2;
    }
    temp -= currentbit;
    *num = *num & temp;
    return *num;
}

/**
 * @brief 将制定int类型数的某一位置1
 *
 * @param bit 为指定要置1的位数 0是第一位
 * @param num 为指定要置位的数 为int类型
 * @return int 可以不指定函数返回 默认会变更传入的数
 */
int bitset(int bit, int *num)
{
    int temp = 0x0000, currentbit = 1;
    for (int i = 1; i <= bit; i++)
    {
        currentbit *= 2;
    }
    temp += currentbit;
    *num = *num | temp;
    return *num;
}

/**
 * @brief 将制定int类型数的某一位反转
 *
 * @param bit 为指定要反转的位数 0是第一位
 * @param num 为指定要反转的数 为int类型
 * @return int 可以不指定函数返回 默认会变更传入的数
 */
int bitchange(int bit, int *num)
{
    int temp = 0x0000, currentbit = 1;
    for (int i = 1; i <= bit; i++)
    {
        currentbit *= 2;
    }
    temp += currentbit;
    *num = *num ^ temp;
    return *num;
}
