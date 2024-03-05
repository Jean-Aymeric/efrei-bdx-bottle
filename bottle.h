//
// Created by JAD on 05/03/2024.
//
#include "color.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef BOTTLE_BOTTLE_H
#define BOTTLE_BOTTLE_H

typedef struct {
    Color color;
    float capacity;
    char *label;
    char *name;
} Bottle;

void printBottle(Bottle *bottle);

void scanBottle(Bottle *bottle);

#endif //BOTTLE_BOTTLE_H
