/*
    Jinan Patel
    Date: 11/11/2020
    Assignment: Swaps
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapValuesInt(int *pone, int *ptwo)
{
   int temp = *pone;
   *pone = *ptwo;
   *ptwo = temp;
}

void swapValuesDouble(double *pone, double *ptwo)
{
   double temp = *pone;
   *pone = *ptwo;
   *ptwo = temp;
}

void swapValuesString(char *str1, char *str2)
{
    char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}


int main()
{
   int one, two;
   double done, dtwo;
   char str1[200], str2[200];

   printf("Enter the first integer: ");
   scanf("%d", &one);
   printf("Enter the second integer: ");
   scanf("%d", &two);

   swapValuesInt(&one, &two);
   printf("First integer after: %d \n", one);
   printf("Second integer after: %d \n", two);

   printf("--------------------------------\n");

   printf("Enter the first double: ");
   scanf("%lf", &done);
   printf("Enter the second double: ");
   scanf("%lf", &dtwo);

   swapValuesDouble(&done, &dtwo);
   printf("First double after: %lf \n", done);
   printf("Second double after: %lf \n", dtwo);

   printf("--------------------------------\n");

   printf("Enter the first string: ");
   scanf("%s", str1);
   printf("Enter the second string: ");
   scanf("%s", str2);

   swapValuesString(&str1, &str2);
   printf("First string after: %s \n", str1);
   printf("Second string after: %s \n", str2);

   return 0;

}
