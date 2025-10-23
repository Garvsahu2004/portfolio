#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 1, upper = 100, guess, attempts = 0;
    int number;

    // Initialize random number generator
    srand(time(0)); 

    // Generate a random number between 1 and 100
    number = (rand() % (upper - lower + 1)) + lower;

    printf("Welcome to the Guess the Number Game!\n");
    printf("I have selected a number between %d and %d. Try to guess it.\n", lower, upper);

    // Game loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", number, attempts);
        }

    } while (guess != number);

    return 0;
}
