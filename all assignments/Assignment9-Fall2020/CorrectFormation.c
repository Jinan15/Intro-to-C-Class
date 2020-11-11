/*
    Name: Jinan Patel
    Date: 11/5/20
    Assignment: CorrectFormation
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define NUMNUMS 9

void joinNames( char *fname, char *lname, char *completeName )
{
    for ( int i = 0; i < strlen(fname); i++ )
    {
        fname[i] = tolower(fname[i]);
    }
    for ( int i = 0; i < strlen(lname); i++ )
    {
        lname[i] = tolower(lname[i]);
    }
    fname[0] = toupper(fname[0]);
    lname[0] = toupper(lname[0]);

    strcpy(completeName, fname);
    strcat(completeName, " ");
    strcat(completeName, lname);
}

int main()
{
    char fname[200], lname[200], completeName[200];
    printf("Please enter your first name: ");
    scanf("%s", fname);
    printf("Please enter your last name: ");
    scanf("%s", lname);

    joinNames( &fname, &lname, &completeName );

    printf("First name; %s\n", fname);
    printf("Last name: %s\n", lname);
    printf("Complete name: %s\n", completeName);

    return 0;
}
