/*
    Name: Jinan Patel
    Date: 11/5/20
    Assignment: SearchArray
*/
#include <stdio.h>
#include <stdlib.h>

#define NUMNUMS 9

void findNum (int d[])
{
    int temp;
    printf("Please enter a number for which you would like to search: ");
    scanf("%d", &temp);
    int isFound = 0;
    for( int i = 0; i < sizeof(d); i++ )
    {
        if(d[i] == temp)
        {
            isFound = 1;
            break;
        }
    }

    if(isFound == 1) {
        printf("number found");
    }
    else
    {
        printf("number not found");
    }
}

int main()
{
    int data[] = { 4, 5, 8, 9, 13, 22, 44, 55, 65 };

    findNum(data);

    return 0;
}
