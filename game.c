#include <stdio.h>
int main()
{
    int n = 25;
    int no_of_guesses = 9;
    int guess;
    printf("Welcome to the Number Guessing Game!\n");
    printf("You have %d attempts to guess the correct number between 1 and 100.\n", no_of_guesses);
    while(no_of_guesses > 0)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess > n)
        {
            printf("Your guess is too high!\n");
        }
        else if(guess < n)
        {
            printf("Your guess is too low!\n");
        }
        else
        {
            printf("Congratulations! You've guessed the correct number %d in %d attempts\n", n, 10 - no_of_guesses );
            break;
        }
        no_of_guesses--;
        if(no_of_guesses == 0)
        {
            printf("Sorry, you've used all your attempts. The correct number was %d.\n", n);
        }
        else
        {
            printf("You have %d attempts left.\n", no_of_guesses);
        }
    }
    return 0;
}