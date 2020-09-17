/*
    Name: Jinan Patel
    Date: 9/14/2020
    Assignment: Forgetful
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    float HomeToWork, AllowedTime, TimePassed;
    printf("Please enter the amount of time (in minutes) that it takes to drive from home to work:");
    scanf("%f", &HomeToWork);

    do{
        printf("Please enter the amount of time (in minutes) that you allow for your drive from home to work:");
        scanf("%f", &AllowedTime);
    } while (AllowedTime < HomeToWork);

    printf("Please enter the amount of time since you left home:");
    scanf("%f", &TimePassed);

    printf("Under normal circumstances you would have %.2f minutes to spare when arriving at work. \n", AllowedTime - HomeToWork);
    float TimePassedWithItem = HomeToWork + (TimePassed * 2);

    printf("If you go home now, it will take you %.2f minute(s) to get back home, then another %.2f minutes to get to work. \n", TimePassed, HomeToWork);

    printf("That will make your total travel time %.2f \n", TimePassedWithItem);

    if(TimePassedWithItem < AllowedTime) {
        printf("you will arrive at work on time if you turn around and go home to get the forgotten item! \n");
    } else {
        printf("You will arrive at work late if you turn around and go home to get the forgotten item! \n");
    }

}
