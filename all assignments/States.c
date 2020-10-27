/*
    Jinan Patel
    Date: 10/23/2020
    Assignment: States
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Location
{
    char state[200];
    char capital[200];
    float latitude, longitude;
};

FILE *openFile( char filePath[], char mode[] )
{
    FILE *fp;
    fp = fopen( filePath, mode );
    if( fp == NULL )
    {
        printf("The file: %s could not be opened.\n", filePath );
        exit(0);
    }
    return fp;
}

void displayLocationData( struct Location l )
{
    printf("State: %s\nCapital: %s\n", l.state, l.capital );
    printf("Latitude: %f\nLongitude: %f\n", l.latitude, l.longitude );
    printf("\n" );
}

struct Location readNextCity( FILE *fp )
{
    struct Location fred;
    char temp[200];

    fgets( fred.state, sizeof(fred.state), fp );
    strtok( fred.state, "\n" );

    fgets( fred.capital, sizeof(fred.capital), fp );
    strtok( fred.capital, "\n" );

    fgets( temp, sizeof(temp), fp );
    fred.latitude = atof( temp );

    fgets( temp, sizeof(temp), fp );
    fred.longitude = atof( temp );

    return fred;
}

void readLine(char line[], int limit, FILE *fp)
{
    fgets(line, limit, fp );
    strtok(line, "\n");
}

void doSearch( char state[], char capital[])
{
    struct Location temp;
    FILE *fp;
    fp = openFile( "data.txt", "r");
    while( !feof( fp ) )
    {
        temp = readNextCity( fp );
        if( (stricmp( state, temp.state ) == 0) && (stricmp( capital, temp.capital ) == 0) )
        {
            printf("state %s and city %s found\n", state, capital);
            displayLocationData( temp );
            exit(0);
        }
    }
    printf("No results found for state %s and city %s\n", state, capital);
    fclose( fp );
}
int main()
{
    char temp[200];
    char state[200];
    char capital[200];
    int option = 0;

    do
    {
        printf("What state would you like to search for? ");
        gets( state );

        printf("What capital would you like to search for? ");
        gets( capital );

        doSearch(state, capital);

        printf("Would you like to search again: then enter 1, if not, enter 2: ");
        gets( temp );
        option = atof( temp );
    } while ( option != 2);

    printf("Thank you for using this program!");

    return 0;
}
