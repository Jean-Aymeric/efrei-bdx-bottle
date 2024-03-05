//
// Created by JAD on 05/03/2024.
//
#include <stdio.h>

#ifndef BOTTLE_COLOR_H
#define BOTTLE_COLOR_H

typedef enum {
    BLANC,
    ROUGE,
    ROSE
} Color;

char *colorToString(Color *color);

Color selectColor();

#endif //BOTTLE_COLOR_H
