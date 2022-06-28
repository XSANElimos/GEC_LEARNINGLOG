#include "..\elimos_function.h"

int defaultfun()
{
    printf("invaild input ! \n plz check your input !\n");
    return 1;
}

int question1() // [RABBIT BIRTH]
{
    long num1 = 1, num2 = 1;
    printf("[RABBIT BIRTH]\n");
    for (int i = 0; i <= 20; i++)
    {

        printf("%12ld %12ld", num1, num2);
        num1 = num2 + num1;
        num2 = num2 + num1;
        if (i % 4 == 0)
            printf("\n");
    }

    return 1;
}

int question2() // [101-200 's Prime Number]
{
    int flag;
    printf("[101-200 's Prime Number]\n");
    for (int i = 101; i <= 200; i++)
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
            printf("%d ", i);
        }
    }
    printf("\n");
    return 2;
}

int question3() // [Narcissistic number]
{
    int i, j, k;
    printf("[Narcissistic number]\n");
    for (int number = 100; number < 1000; number++)
    {
        i = number / 100;     // hundred
        j = number / 10 % 10; // ten
        k = number % 10;      // single
        if (number == i * i * i + j * j * j + k * k * k)
            printf("%-5d", number);
    }
    printf("\n");
    return 3;
}

int question4() // spilit number 分解质数
{
    int number, currentNumber, flag, temp = 1;
    printf("Input number you want to spilit");
    scanf("%d", &number);
    currentNumber = number;
    printf("%d=", number);
    for (int i = 2; i < number / 2; i++)
    {
        flag = 0; // judge is PrimeNumber
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && i != j)
            {

                // printf(" %d:%d ", i, j);
                flag++;
            }
        }
        if (flag == 0 && currentNumber % i == 0)
        {
            getchar();
            temp *= i;
            currentNumber /= i;
            printf("%d", i, temp);
            if (number != temp)
            {
                i = 2;
                printf("x");
            }
            else
            {
                break;
            }
        }
    }
    getchar();
    printf("\n");
    return 4;
    /*
    int n,i;
    printf("\nplease input a number:\n");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<=n;i++)
    {
        while(n!=i)
        {
            if(n%i==0)
            {
                printf("%d*",i);
                n=n/i;
            }
            else
                break;
        }
    }
    printf("%d",n);}
    */
}

/*
利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，
60分以下的用C表示。
*/
int question5() // ?: 's use grade and score
{
    int score;
    char rank;
    printf("input your score then i will give you the rank\n");
    scanf("%d", &score);
    rank = (score >= 90) ? 'A' : (score < 60) ? 'C'
                                              : 'B';
    printf("your score is : %d and the rank is : %c\n", score, rank);
    return 5;
}

/*
题目：输入两个正整数m和n，求其最大公约数(GCD greatest common divisor)和最小公倍数(LCM least common multiple)。
*/
int question6()
{

    printf("plz input two numbers to count \n");
    int a, b;
    scanf("%d%d", &a, &b);

    int x = a, y = b;

    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    printf("最大公约数: %d 最小公倍数:%d\n", a, x * y / a);
    return 6;
}

/*
输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
*/
int question7()
{
    printf("plz input something \n");
    char string[10000] = {' '}, *p;
    p = string;
    int cEnglish = 0, cSpace = 0, cNumber = 0, cOther = 0;
    scanf("%s", &string);

    while (*p)
    {
        printf("%c", *p);
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
        {
            cEnglish++;
        }
        else if (*p == ' ')
        {
            cSpace++;
        }
        else if (*p >= '0' && *p <= '9')
        {
            cNumber++;
        }
        else
        {
            cOther++;
        }

        p++;
    }
    printf("\n");
    printf("英文字母有%d个\n", cEnglish);
    printf("空格有%d个\n", cSpace);
    printf("数字有%d个\n", cNumber);
    printf("其他字符有%d个\n", cOther);
    stop();
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
找出10000以内的所有完数
*/
int question9()
{
    int nh = 10000, nl = 1, sum = 0;
    printf("[10000内完数]\n");
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
        metre += height;
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