#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator

    int random, guess, amp = 0;
    printf("Welcome to the game developed by Kushal\n");

    // Generate a random number between 1 and 100
    random = rand() % 100 + 1;

    do {
        printf("Enter any number between 1 to 100: ");
        scanf("%d", &guess);
        amp++;

        if (random > guess) {
            printf("The generated number is greater than your guess.\n");
        } else if (random < guess) {
            printf("The generated number is smaller than your guess.\n");
        } else {
            printf("Congrats! You have won the game in %d attempts.\n", amp);
        }
    } while (guess != random);

    return 0;
}
