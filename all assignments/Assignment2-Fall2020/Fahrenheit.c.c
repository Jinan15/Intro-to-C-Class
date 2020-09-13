#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Welcome temperature converter!!!!\n");
    printf("Please enter a temperature in degrees fahrenheit: ");
    scanf("%f", &f);
    c = (f-32)*((float)5/9);
    printf("That is %.2f degrees celsius.\n", c);


    return 0;
}
