#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, comp;

    // Seed random number generator
    srand(time(0));

    printf("Rock Paper Scissors Game\n");
    printf("0 = Rock\n1 = Paper\n2 = Scissors\n");

    // User input
    printf("Enter your choice (0/1/2): ");
    scanf("%d", &user);

    if (user < 0 || user > 2) {
        printf("Invalid input!\n");
        return 0;
    }

    // Computer choice
    comp = rand() % 3;

    printf("You chose: %d\n", user);
    printf("Computer chose: %d\n", comp);

    // Result logic
    if (user == comp) {
        printf("It's a draw!\n");
    } 
    else if ((user == 0 && comp == 2) ||
             (user == 1 && comp == 0) ||
             (user == 2 && comp == 1)) {
        printf("You WIN!\n");
    } 
    else {
        printf("You LOSE!\n");
    }

    return 0;
}