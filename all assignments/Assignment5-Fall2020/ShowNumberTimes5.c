/*
    Name: Jinan Patel
    Date: 9/29/2020
    Assignment: ShowNumberTimes5
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mult5AndShow (int number) {
    int answer = number * 5;
    printf("%d multiplied by 5 = %d", number, answer);
}

int main()
{
    int input;
    printf("What number would you like to multiply by 5? ");
    scanf("%d", &input);
    mult5AndShow(input);
    return 0;
}
