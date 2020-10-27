/*
    Name: Jinan Patel
    Date: 9/29/2020
    Assignment: GetRandom
*/
#include <stdio.h>
#include <stdlib.h>

int getRandomNumber () {
    return (rand() % 101);
}

int main()
{
    srand(time(0));
    int rnd = getRandomNumber();
    printf("The random number that was returned from the getRandomNumber function is: %d\n", rnd);
    return 0;
}
