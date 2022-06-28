#include "elimos_function.h"

int main()
{
    unsigned int number = 0, result = 0, theone = 1;
    printf("plz input the number that you want to check it is \n");
    scanf("%d", number);
    result = number & 0b00000001;
    printf("result:%d", result);
    return 0;
}