/*********************
Name: Logan Falkenberg
Coding 02
Purpose: This is the driver file for my project. It creates instances of class objects and calls display functions
 to display their attributes.
**********************/

#include "main.h"

int main(int argc, char** argv) {

    Fish myFish;
    Fish myFish2(5, 29.0, 11.3);

    Shark myShark;
    Shark myShark2(6, 29.0, 11.3, 400);

    displayFish(&myFish);
    displayFish(&myFish2);

    displayShark(&myShark);
    displayShark(&myShark2);

    return 0;
}