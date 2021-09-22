/*********************
Name: Logan Falkenberg
Coding 02
Purpose: This is the header file for the shark.cpp file. It holds class Shark which is a child of class Fish.
**********************/

#ifndef CODING02_SHARK_H
#define CODING02_SHARK_H

#define MIN_TEETH 2

#include "fish.h"

class Shark : public Fish{

    public:

        // Constructors
        Shark();
        Shark(int, float, float, int);

        // Destructor
        ~Shark();

        // Getters
        int getTeeth();
        float getWeight();

        // Setters
        void setTeeth(int);

    private:

        int teeth;

};

#endif //CODING02_SHARK_H
