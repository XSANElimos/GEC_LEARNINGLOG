#include "..\elimos_function.h"
#include <string.h>

int defaultfun()
{
    printf("invaild input ! \n plz check your input !\n");
    return 1;
}

/*
猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
以后每天早上都吃了前一天剩下的一半零一个。
到第10天早上想再吃时，见只剩下一个桃子了。
求第一天共摘了多少。
*/
int question1() // [PEACH]
{
    int day = 10;
    int number = 1;
    for (int i = day; i > 0; i--)
    {
        printf("现在是第%d天,有%d个桃子\n", i, number);
        if (i != 1)
            number = (number + 1) * 2;
    }
    printf("第一天摘了%d个桃子", number);
    return 1;
}
/*
两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。
a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
*/
int question2() // [FIND THE MATCHER]
{
    char team2[3] = {'x', 'y', 'z'};
    printf("team1: a b c \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)                                        //遍历所有可能的组合
                if (i != j && i != k && j != k)                                //去除重复的组合
                    if (team2[i] != 'x' && team2[k] != 'x' && team2[k] != 'z') //筛选符合条件的队伍
                        printf("team2: %c %c %c \n", team2[i], team2[j], team2[k]);
    return 2;
}

/*
打印出菱形图案
*/
int question3() // [菱形图案]
{
    printf("[菱形图案]\n");
    int row = 5;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
            printf(" ");
        for (int j = 0; j < i * 2 + 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = 0; j < row - i; j++)
            printf(" ");
        for (int j = 0; j < i * 2 + 1; j++)
            printf("*");
        printf("\n");
    }
    return 3;
}

/*
有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
*/
int question4() // [一分数序列]
{
    printf("[一分数序列]\n");
    double a = 2.0, b = 1.0, sum = 0.0;
    for (int i = 0; i < 20; i++)
    {
        printf("%.0lf/%.0lf ", a, b);
        sum = sum + a / b;
        a = a + b;
        b = a - b;
    }
    printf("\nsum = %.5lf \n", sum);
    return 4;
}

/*
求1+2!+3!+...+20!的和
*/
int question5() // [求1+2!+3!+...+20!的和]
{
    printf("[求1+2!+3!+...+20!的和]\n");
    int sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        int temp = 1;
        for (int j = 1; j <= i; j++)
            temp = temp * j;
        sum = sum + temp;
    }
    printf("sum = %d \n", sum);
    return 5;
}

/*
利用递归方法求5!。
*/
int question6() // [递归]
{
    printf("[递归求5!]\n");
    int n = 5;
    int result = 1;
    for (int i = 1; i <= n; i++)
        result = result * i;
    printf("%d! = %d \n", n, result);
    return 6;
}

/*
利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来
*/
int question7()
{
    printf("[输入n个字符,以相反顺序打印出来]\n");
    char str[100] = {'a'};
    scanf("%s", str);
    int length = strlen(str);
    printf("%s \n", str);
    for (int i = 0; i < length / 2; i++)
        swap(str[i], str[length - i - 1]);
    printf("%s \n", str);
    return 7;
}

/*
题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时
共有5个数相加)，几个数相加有键盘控制。
*/
int question8()
{
    printf("AAAAA!input A and N!:\n");
    int number = 0, times = 0, temp = 0;
    long sum = 0;
    scanf("%d%d", &number, &times);
    sum = number;
    printf("totol=%d", number);
    for (int i = 1; i <= times; i++)
    {
        printf("+");
        temp = number;
        for (int j = 1; j <= i; j++)
        {
            temp *= 10;
            temp += number;
        }
        printf("%d", temp);
        sum += temp;
    }
    printf("\ntotol=%ld", sum);
    return 8;
}

/*
一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
找出1000以内的所有完数
*/
int question9()
{
    int nh = 1000, nl = 1, sum = 0;
    printf("[1000内完数]\n");
    for (int i = nl; i <= nh; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0 && i != j)
            {
                // printf("x%d", j);
                sum += j;
            }
        }
        // printf("\n %d的因子和为%d ", i, sum);
        if (i == sum)
        {
            printf("找到一个完数:%d\n", i);
        }
    }
    return 9;
}

/*
一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
第10次落地时，共经过多少米？第10次反弹多高？
*/
int question10()
{
    int times = 10;
    double height = 100.0, metre = height;
    printf("[BALL!!]\n");
    for (int i = 1; i <= times; i++)
    {
        height /= 2.0;
        metre += height;
        printf("第%-3d次回弹,当前高度%lf米,一共经过%lf米\n", i, height, metre);
    }
    return 10;
}

int main()
{
    int option = 1;
    printf(
        "Input Number to check that question "
        "( 0 to exit)");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        question1();
        break;
    case 2:
        question2();
        break;
    case 3:
        question3();
        break;
    case 4:
        question4();
        break;
    case 5:
        question5();
        break;
    case 6:
        question6();
        break;
    case 7:
        question7();
        break;
    case 8:
        question8();
        break;
    case 9:
        question9();
        break;
    case 10:
        question10();
        break;
    default:
        defaultfun();
        break;
    }

    return 0;
}
