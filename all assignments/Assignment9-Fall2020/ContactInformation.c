/*
    Name: Jinan Patel
    Date: 11/6/20
    Assignment: CorrectInformation
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define NUMNUMS 9

struct personalInfo
{
    char fname[200];
    char lname[200];
    char city[200];
    char state[25];
    char zip[10];
    char phone[10];
};

void input( struct personalInfo *PI )
{
    printf("Please enter your contact information below \n");
    printf("First Name: ");
    fgets(PI->fname, sizeof(PI->fname), stdin);
    strtok(PI->fname, "\n");

    printf("Last Name: ");
    fgets(PI->lname, sizeof(PI->lname), stdin);
    strtok(PI->lname, "\n");

    printf("City: ");
    fgets(PI->city, sizeof(PI->city), stdin);
    strtok(PI->city, "\n");

    printf("State: ");
    fgets(PI->state, sizeof(PI->state), stdin);
    strtok(PI->state, "\n");

    printf("Zip: ");
    fgets(PI->zip, sizeof(PI->zip), stdin);
    strtok(PI->zip, "\n");

    printf("Phone: ");
    fgets(PI->phone, sizeof(PI->phone), stdin);
    strtok(PI->phone, "\n");
}

void output ( struct personalInfo *PI )
{
    printf("Here is the information you entered\n");
    printf("First Name: %s\n", PI->fname);
    printf("Last Name: %s\n", PI->lname);
    printf("City: %s\n", PI->city);
    printf("State: %s\n", PI->state);
    printf("Zip: %s\n", PI->zip);
    printf("Phone: %s\n", PI->phone);
}

int main()
{
    struct personalInfo PI;
    input(&PI);
    output(&PI);
    return 0;
}
