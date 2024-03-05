#include <stdio.h>
#include "bottle.h"

int main() {
    Bottle myBottle;

    scanBottle(&myBottle);
    printBottle(&myBottle);
    
    return 0;
}
