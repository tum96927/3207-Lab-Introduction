#include <stdlib.h>
#include "random.h"
//Function Prototype
int randchar();

int randchar(){
    //ASCII A -> Z : 65 - 90
    int random = 65 + (rand() % 26);
    return random;
}
