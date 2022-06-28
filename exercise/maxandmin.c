#include <stdio.h>

int main()
{
    int nums[5] = {5, 2, 8, 59, 0}, max = -65535, min = 65535;
    printf("input 5 numbers:\n");
    scanf("%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
    for (int i = 1; i <= 5; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
        else if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    printf("MAX is %d\nMIN is %d\n", max, min);
    return 0;
}