//
// Created by JAD on 05/03/2024.
//
#include "color.h"

char *colorToString(Color *color) {
    switch (*color) {
        case BLANC:
            return "Blanc";
        case ROUGE:
            return "Rouge";
        case ROSE:
            return "Rosé";
        default:
            return "ERROR";
    }
}

Color selectColor() {
    printf("Sélectionnez une couleur\n");
    printf("\t1\t Blanc\n");
    printf("\t2\t Rouge\n");
    printf("\t3\t Rosé\n");
    int userChoice;
    do {
        scanf("%d", &userChoice);
    } while (userChoice < 1 || userChoice > 3);
    return userChoice - 1;
}