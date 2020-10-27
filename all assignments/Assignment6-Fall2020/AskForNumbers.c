/*
    Name: Jinan Patel
    Date: 10/7/2020
    Assignment: AskForNumbers
*/
#include <stdio.h>
#include <stdlib.h>

int getChoice(int min, int max)
{
    int number;
    do
    {
        scanf("%d", &number);
    } while (number < min || number > max);
    return number;
}

int main()
{
    int numbers[200];
    int howManyNumbers;
    int sum = 0, average;
    printf("How many numbers would you like to enter? ");
    howManyNumbers = getChoice(1,200);
    for (int i = 0; i < howManyNumbers; i++) {
        printf("Please enter a number: ");
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < howManyNumbers; i++) {
        printf("Number %d is %d\n", i+1, numbers[i]);
        sum += numbers[i];
    }
    average = sum/howManyNumbers;
    printf("The average is %d", average);

    printf("Hello world!\n");
    return 0;
}
