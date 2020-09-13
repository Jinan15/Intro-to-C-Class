#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value,andValue,orValue;
    value = 2345;
    andValue = value & 1010;
    orValue = value | 3124;
    printf("The decimal value is %d and the hex value is %x\n", value, value);
    printf("Anded with 1010 (decimal) the decimal value is %d and the hex value is %x\n", andValue, andValue);
    printf("Ored with 3124 (decimal) the decimal value is 3389 and the hex value is %x\n", orValue, orValue);


    return 0;
}
