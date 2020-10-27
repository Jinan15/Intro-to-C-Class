/*
    Name: Jinan Patel
    Date: 10/7/2020
    Assignment: RandomNumbers
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getChoice(int min, int max)
{
    int number;
    do
    {
        printf("Please enter a choice from %d to %d: ", min, max);
        scanf("%d", &number);
    } while (number < min || number > max);
    return number;
}

int main()
{
    srand(time(0));
    int numbers[200];
    int howManyNumbers;
    int sum = 0, average;
    printf("How many numbers would you like to enter?\n");
    howManyNumbers = getChoice(1,200);
    for (int i = 0; i < howManyNumbers; i++) {
        numbers[i] = (rand() % 10000) + 1;
    }
    for (int i = 0; i < howManyNumbers; i++) {
        printf("Number %d is %d\n", i+1, numbers[i]);
        sum += numbers[i];
    }
    average = sum/howManyNumbers;
    printf("The average is %d", average);

    return 0;
}
