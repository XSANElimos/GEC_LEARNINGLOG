/**
 * @brief 取得给定范围内的质数
 *
 * @param lowarea 范围下限
 * @param higharea 范围上限
 * @return int* 返回这个范围内的质数数组
 */
int *getprimenumber(int lowarea, int higharea)
{
    int result[100] = {};
    int flag, count = 0;
    for (int i = lowarea; i <= higharea; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            result[count] = i;
        }
    }
    return result;
}

/**
 * @brief 分解质因数，返回分解出的质因数列表
 *
 * @param number 需要分解质因数的数
 * @return int*  质因数数组
 */
int *primefactorization(int number)
{
    int i, count = 0;
    int result[100] = {};
    for (i = 2; i <= number; i++)
    {
        while (number != i)
        {
            if (number % i == 0)
            {
                result[count] = i;
                count++;
                number = number / i;
            }
            else
                break;
        }
    }
    return result;
}

/**
 * @brief 判断是否是闰年
 *
 * @param year 传入年份
 * @return true 是闰年
 * @return false 不是闰年
 */
bool isleapyear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

/**
 * @brief 求最大公约数
 *
 * @param a
 * @param b
 * @return int
 */
int GCD(int a, int b)
{
    if (b)
        while ((a %= b) && (b %= a))
            ;
    return a + b;
}

/**
 * @brief 求最小公倍数
 *
 * @param a
 * @param b
 * @return int
 */
int LCM(int a, int b)
{
    return a * b / GCD(a, b);
}