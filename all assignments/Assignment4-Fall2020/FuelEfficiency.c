/*
    Name: Jinan Patel
    Date: 9/14/2020
    Assignment: FuelEfficiency
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int radius;
    float revolutions, gallons, mpg;

    printf("What is the radius of your tires in inches?");
    scanf("%d", &radius);
    printf("How many revolutions did your car's tires make?");
    scanf("%f", &revolutions);
    printf("How many gallons of gas did your car use?");
    scanf("%f", &gallons);
    float circumference = 2 * radius * M_PI;
    float inches = 5280 * 12;
    mpg = ((circumference * revolutions) / inches) / gallons;

    printf("Your car averaged %f miles per gallon. \n", mpg);

    if((mpg >= 0) & (mpg <= 20)) {
        printf("Your car got poor millage.");
    } else if ((mpg > 20) & (mpg <= 30)) {
        printf("Your car got average millage.");
    } else if ((mpg > 30) & (mpg <= 40)) {
        printf("Your car got good millage.");
    } else if (mpg > 40) {
        printf("Your car got excellent millage.");
    }

}
