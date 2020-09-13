/*
    Name: Jinan Patel
    Date: 9/7/2020
    Assignment: AskForStartEndAndIncrement
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start,end,increment;
    printf("This program demonstrates mastery of for loops. \n");
    printf("At what number would you like to start? ");
    scanf("%d", &start);
    printf("At what number would you like to end? ");
    scanf("%d", &end);
    printf("By what number would you like to increment? ");
    scanf("%d", &increment);
    for(int i = start; i <= end; i = i + increment) {
        printf("The counter value is now %d \n", i);
    }
    return 0;
}
