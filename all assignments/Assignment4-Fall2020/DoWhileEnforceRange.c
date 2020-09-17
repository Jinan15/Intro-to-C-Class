/*
    Name: Jinan Patel
    Date: 9/14/2020
    Assignment: DoWhileEnforceRange
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    do{
        printf("Please enter a number from 1 to 5:");
        scanf("%d", &number);
    } while(number <= 1 || number >= 5);

    printf("Thanks, you chose %d", number);
}
