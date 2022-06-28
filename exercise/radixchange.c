#include <stdio.h>
#include <stdlib.h>

/**
 * @brief change Dec number to Bin number and print
 *
 * @param num
 */
void Dec2Bin(int num)
{
    int i, j = 0, bit = 1;
    for (i = 16; i >= 0; i--)
    {
        unsigned int x = (((bit << i) & num) != 0);
        printf("%d", x);
    }
}

int main()
{
    int num = 11123;
    printf("Dec: %d\n", num); // output DecNumer
    printf("Oct: %o\n", num); // output OctNumber
    printf("Hex: %X\n", num); // output HexNumber
    printf("Bin: ");
    Dec2Bin(num); // output BinNumber
    printf("\n");
    return 0;
}