/*
    Name: Jinan Patel
    Date: 10/7/2020
    Assignment: MyName
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100], upperName[100], lowerName[100], initialCappedName[100];

    printf("What is your first name? ");
    scanf("%s", name);
    printf("Original name: %s\n", name);

    for(int i = 0; i < strlen(name); i++) {
        upperName[i] = toupper(name[i]);
        lowerName[i] = tolower(name[i]);
    }
    upperName[strlen(name)] = 0;
    lowerName[strlen(name)] = 0;
    printf("Lower case name: %s\n", lowerName);
    printf("Upper case name: %s\n", upperName);
    initialCappedName[0] = toupper(name[0]);
    for(int i = 1; i < strlen(name); i++) {
        initialCappedName[i] = tolower(name[i]);
    }
    initialCappedName[strlen(name)] = 0;
    printf("Initial capped name: %s\n", initialCappedName);

    return 0;
}
