#include <stdio.h>
#include <stdlib.h>

int main()
{
    double gallons,liters,milliliters;

    printf("This is a program to convert gallons to liters and milliliters.\n");
    printf("How many gallons would you like to convert? ");
    scanf("%lf", &gallons);
    liters = gallons*3.78541;
    milliliters = gallons*3785.41178;
    printf("Thank You!!!!\n");
    printf("That is %.3lf liters and %.3lf milliliters\n", liters, milliliters);


    return 0;
}
