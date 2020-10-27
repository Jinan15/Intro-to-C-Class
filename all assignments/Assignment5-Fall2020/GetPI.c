/*
    Name: Jinan Patel
    Date: 9/29/2020
    Assignment: GetPI
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float getPI () {
    return M_PI;
}

int main()
{
    float myPI = getPI();
    printf("The value of PI that was returned is: %f\n", myPI);
    return 0;
}
