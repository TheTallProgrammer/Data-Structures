/*********************
Name: Logan Falkenberg
Coding 02
Purpose: This file holds all of the display functions. It displays the attributes of the instances of objects that
 have been created in other files.
**********************/

#include "functions.h"

void displayFish(Fish *myFish){

    std::cout << myFish->getGills() << " gill(s)" << std::endl;
    std::cout << myFish->getGirth() << " inch(es)" << std::endl;
    std::cout << myFish->getLength() << " inch(es)" << std::endl;
    std::cout << myFish->getWeight() << " pound(s)" << std::endl;
    std::cout << " " << std::endl;

}

void displayShark(Shark *myShark){

    std::cout << myShark->getGills()<< " gill(s)" << std::endl;
    std::cout << myShark->getGirth()<< " inch(es)" << std::endl;
    std::cout << myShark->getLength()<< " inch(es)" << std::endl;
    std::cout << myShark->getWeight()<< " pound(s)" << std::endl;
    std::cout << myShark->getTeeth()<< " teeth" << std::endl;
    std::cout << " " << std::endl;

}