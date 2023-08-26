#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts;

    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("Guess a random number between 1 and 100\n");
    do
    {
        printf("Your guess >> ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 100)
            printf("Out of range!\n");
        else
        {
            if (guess > number)
                printf("Too high!!\n");
            if (guess < number)
                printf("Too low!\n");
            attempts++;
        }
    } while (guess != number);
    printf("YOU WIN!! The correct answer was: %d\n", number);
    printf("You guessed the number in %d attempts.\n", attempts);

    return 0;
}