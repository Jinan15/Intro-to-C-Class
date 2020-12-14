/*
    Name: Jinan Patel
    Date: 12/1/2020
    Assignment: Linked List
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

struct ContactInfo
{
    char name[100], phoneNumber[100];
    int age, height, weight;
    struct ContactInfo *next;
};

void getInfo( struct ContactInfo *info )
{
    char temp[100];

    printf("What is your name? " );
    gets( info->name );

    printf("What is your age? " );
    gets( temp );
    info->age = atoi( temp );

    printf("What is your height? " );
    gets( temp );
    info->height = atoi( temp );

    printf("What is your weight? " );
    gets( temp );
    info->weight = atoi( temp );

    printf("What is your phone number? " );
    gets( info->phoneNumber );
}

void displayInfo( struct ContactInfo *info )
{
    printf("name:   %s\n", info->name );
    printf("age:    %d\n", info->age );
    printf("height: %d\n", info->height );
    printf("weight: %d\n", info->weight );
    printf("phone:  %s\n", info->phoneNumber );
}

void addInfoStructAndGetAndShowData( struct ContactInfo *root )
{
    struct ContactInfo *temp = root;

    while( temp->next != NULL )
    {
        temp = temp->next;
    }
    temp->next = calloc( 1, sizeof(struct ContactInfo ) );
    getInfo( temp->next );
}

void displayAll( struct Info *root )
{
    struct ContactInfo *temp = root;
    do
    {
        displayInfo( temp );
        temp = temp->next;
    }
    while( temp != NULL );

}

int main()
{
    struct ContactInfo root;
    root.next = NULL;

    getInfo( &root );

    for (int i = 0; i < 10; i++) {
        addInfoStructAndGetAndShowData( &root );
    }

    displayAll( &root );

    return 0;
}
