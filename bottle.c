//
// Created by JAD on 05/03/2024.
//

#include "bottle.h"

void printBottle(Bottle *bottle) {
    printf("Appellation : %s\n", bottle->label);
    printf("Couleur : %s\n", colorToString(&bottle->color));
    printf("Nom : %s\n", bottle->name);
    printf("Contenance : %f l\n", bottle->capacity);
}

void scanBottle(Bottle *bottle) {
    char temp[255];
    fflush(stdin);
    printf("Appellation :\n");
    scanf("%s", temp);
    bottle->label = (char *) malloc(sizeof(char) * strlen(temp));
    strcpy(bottle->label, temp);
    fflush(stdin);
    printf("Nom :\n");
    scanf("%s", temp);
    bottle->name = (char *) malloc(sizeof(char) * strlen(temp));
    strcpy(bottle->name, temp);
    fflush(stdin);
    bottle->color = selectColor();
    fflush(stdin);
    printf("Contenance :\n");
    scanf("%f", &bottle->capacity);
}