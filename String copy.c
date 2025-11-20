#include <stdio.h>
#include <string.h>

int main() {
    char game[50] = "Badminton";
    char play[50];

    strcpy(play, game);

    printf("Game: %s\n", game);
    printf("Play: %s\n", play);
}
