#include "..\elimos_function.h"

int defaultfun()
{
    printf("invaild input ! \n plz check your input !\n");
    return 1;
}

int question1() // get 1,2,3,4 's list
{
    printf("get 1,2,3,4 \'s list ");
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            for (int k = 1; k < 5; k++)
            {
                if (i != j && j != k && i != k)
                {
                    printf("%d%d%d  ", i, j, k);
                }
            }
            printf("\n");
        }
    }

    return 1;
}

int question2() // count money
{
    int tw = 100000;
    printf("count money\nInput origin money\n");
    long int money = 0;
    scanf("%ld", &money);
    int bonus = 0, bonus1, bonus2, bonus4, bonus6, bonu10;
    bonus1 = tw * 0.1;
    bonus2 = bonus1 + tw * 0.075;
    bonus4 = bonus2 + 2 * tw * 0.05;
    bonus6 = bonus4 + 2 * tw * 0.03;
    bonu10 = bonus6 + 4 * tw * 0.015;
    if (money < tw)
        bonus = money * 0.1;
    else if (money < 2 * tw)
        bonus = bonus1 + (money - tw) * 0.075;
    else if (money < 4 * tw)
        bonus = bonus2 + (money - 2 * tw) * 0.05;
    else if (money < 6 * tw)
        bonus = bonus4 + (money - 4 * tw) * 0.03;
    else if (money < 10 * tw)
        bonus = bonus6 + (money - 6 * tw) * 0.015;
    else
        bonus = bonu10 + (money - 10 * tw) * 0.01;
    printf("the bonus is : %ld\n", bonus);
    return 2;
}

int question3() // find the number
{
    printf("find the number\n");
    for (int number = 1; number < 10000; number++)
    {
        double tempnumber = number + 100;
        double result = sqrt(tempnumber);
        if (floor(result + 0.5) == result)
        {
            tempnumber = number + 268;
            result = sqrt(tempnumber);
            if (floor(result + 0.5) == result)
            {
                printf("%d  ", number);
            }
        }
    }
    printf("\n");
    return 3;
}

int question4() // count days throught in year
{
    int year, month, day, days = 0;
    printf("count days throught in year(spilit with space such as \"2000 1 2\")\n");
    scanf("%d%d%d", &year, &month, &day);
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year < 0)
    {
        printf("year input error!");
        return 4;
    }
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        months[2]++;
    }
    if (month > 0 && month <= 12 || day > 0 && day < months[month])
    {
        for (int i = 0; i < month; i++)
        {
            days += months[i];
        }
        days += day;
        printf("%d\n", days);
    }
    else
    {
        printf("date input error!");
    }
    return 4;
}

int question5() // compare xyz from small to big
{
    int x, y, z, temp;
    printf("compare xyz from small to big\n plz input x y z such as (\"1 2 3\")\n");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y)
    {
        swap(&x, &y);
    }
    if (y > z)
    {
        swap(&y, &z);
    }
    printf("%d %d %d\n", x, y, z);
    return 5;
}

int question6() // print a C with *
{
    printf("print a C with *\n");
    printf(" *********\n");
    printf("**       **\n");
    printf("**         \n");
    printf("**         \n");
    printf("**       **\n");
    printf(" *********\n");
}

int question7() // print a partten
{
    char a = '-', b = '@';
    printf("print a partten\n");
    printf("%c%c%c%c%c\n", b, a, a, a, b);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", a, a, b, a, a);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", b, a, a, a, b);
}

int question8() // 9x9 mutiply table
{
    printf("9x9 mutiply table\n");
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%dx%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}

int question9() // [chess board]
{
    printf("[chess board]\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("$");
            }
        }
        printf("\n");
    }
}

int question10() // [stair]
{
    printf("[stair]\n");
    printf("^_^ ^_^\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("##");
        }
        printf("\n");
    }
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