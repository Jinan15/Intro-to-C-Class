/*
    Name: Jinan Patel
    Date: 9/14/2020
    Assignment: AskStartStopAndIncrement
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start,end,increment;
    printf("At what number would you like to start counting?");
    scanf("%d", &start);
    printf("At what number would you like to end counting?");
    scanf("%d", &end);
    printf("By what number would you like to increment the counter each iteration?");
    scanf("%d", &increment);

    while(start <= end )
    {
        printf("The counter value is %d\n", start);
        start = start + increment;
    }

}
