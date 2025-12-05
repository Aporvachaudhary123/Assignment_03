#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp) {
    if (you == comp) 
        return 0;
    if (you == 's' && comp == 'w')
        return 1;
    if (you == 'w' && comp == 's')
        return -1;

    if (you == 's' && comp == 'g')
        return -1;
    if (you == 'g' && comp == 's')
        return 1;

    if (you == 'g' && comp == 'w')
        return 1;
    if (you == 'w' && comp == 'g')
        return -1;

    return 0;
}

int main() {
    char you, comp, playAgain;

    srand(time(0));

    do {
        int number = rand() % 100 + 1;

        if (number < 33)
            comp = 's';
        else if (number < 66)
            comp = 'w';
        else
            comp = 'g';

        printf("Enter 's' for snake, 'w' for water and 'g' for gun: ");
        scanf(" %c", &you);

        int result = snakeWaterGun(you, comp);

        printf("You chose %c and computer chose %c. ", you, comp);

        if (result == 0)
            printf("Game draw!\n");
        else if (result == 1)
            printf("You win!\n");
        else
            printf("You lose!\n");

        printf("Play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while(playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing! ⭐\n");
    return 0;
}
