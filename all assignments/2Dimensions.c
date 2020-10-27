/*
    Name: Jinan Patel
    Date: 10/13/2020
    Assignment: Two Dimensional Arrays
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main()
{
    srand(time(0));
    int value[10][5];
    int total = 0;
    int temp = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Enter a number (int) for position %d and %d: ", i, j);
            scanf("%d", &temp);
            value[i][j] = temp;
            total += temp;
            total++;
        }
    }
    printf("the total is %d", total);
    return 0;
}
