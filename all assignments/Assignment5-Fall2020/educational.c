#include <stdio.h>
#include <stdlib.h>

double arithGame(int max, int quantity, int op)
{
    int i = quantity;
    int wrong = 0;
    double start = time(0);
    for (i; i > 0; i--)
    {
        if(op == 1)
        {
            int answer;
            int num1 = (rand() % (max + 1));
            int num2 = (rand() % (max + 1));
            printf("What is %d + %d: ", num1, num2);
            scanf("%d", &answer);
            if((num1 + num2) == answer)
            {
                printf("Correct, great job!\n");
            }
            else
            {
                printf("Sorry, that's incorrect, the answer is %d.\n", num1 + num2);
                wrong++;
            }
        }
        else if (op == 2)
        {
            int answer;
            int num1 = (rand() % (max + 1));
            int num2 = (rand() % (max + 1));
            printf("What is %d * %d: ", num1, num2);
            scanf("%d", &answer);
            if((num1 * num2) == answer)
            {
                printf("Correct, great job!\n");
            } else {
                printf("Sorry, that's incorrect, the answer is %d.\n", num1 * num2);
                wrong++;
            }
        }
    }
    double end = time(0);
    return (((end - start) + (wrong * 5))/quantity);
}

double guessGame(int max)
{
    double start = time(0);
    int guess,count=0;

    int randNumber = (rand() % (max + 1));
    do
    {
        printf("Enter your guess! ");
        scanf("%d", &guess);
        if(guess > randNumber)
            {
            printf("Your guess is too high, try again.\n");
            count++;
        }
        else if (guess < randNumber)
        {
            printf("Your guess is too low, try again.\n");
            count++;
        }
        else
        {
            printf("Great, you guessed the correct number %d in %d guesses\n", guess, count);
        }
    } while (randNumber != guess);
    double end = time(0);
    int digits = numDigits(randNumber);
    return ((end - start)/(2*digits));
}

int numDigits(int number)
{
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}

int numPoints(double timesec)
{
    int score;
        if (timesec < 1) {
            return score = 10;
        }
        else if ((timesec >= 1) && (timesec < 2))
        {
            return score = 9;
        }
        else if ((timesec >= 2) && (timesec < 3))
        {
            return score = 8;
        }

        else if ((timesec >= 3) && (timesec < 4))
        {
            return score = 7;
        }
        else if ((timesec >= 4) && (timesec < 5))
        {
            return score = 6;
        }

        else if ((timesec >= 5) && (timesec < 6))
        {
            return score = 5;
        }
        else if ((timesec >= 6) && (timesec < 7))
        {
            return score = 4;
        }
        else if ((timesec >= 7) && (timesec < 8))
        {
            return score = 3;
        }
        else if ((timesec >= 8) && (timesec < 9))
        {
            return score = 2;
        }
        else if ((timesec >= 9) && (timesec < 10))
        {
            return score = 1;
        }
        else if (timesec >= 10)
        {
            return score = 0;
        }
}

int main()
{
    int option;
    int max, quantity;
    int finalScore = 0;
    do
    {
        printf("Please make a selection from the following:\n");
        printf("1) Play Arithmetic Game\n");
        printf("2) Play Guessing Game\n");
        printf("3) Print Score\n");
        printf("4) Quit\n");
        printf("Enter your option: ");
        scanf("%d", &option);
        printf("\n");

        if(option == 1) {
            printf("What kind of arithmetic would you be doing:\n");
            printf("1) Addition\n");
            printf("2) Multiplication\n");
            printf("Enter your option: ");
            scanf("%d", &option);
            printf("What is the maximum number you would like? ");
            scanf("%d", &max);
            printf("How many problems do you want? ");
            scanf("%d", &quantity);
            double timeTaken = arithGame(max, quantity, option);
            finalScore += numPoints(timeTaken);
        }
        else if (option == 2)
        {
            printf("What is the maximum number you would like? ");
            scanf("%d", &max);
            double timeTaken = guessGame(max);
            finalScore += numPoints(timeTaken);
        }
        else if (option == 3)
        {
            printf("Your score is %d\n",finalScore);
        }

    } while (option != 4);
    printf("Thank you for playing!");

    return 0;
}
