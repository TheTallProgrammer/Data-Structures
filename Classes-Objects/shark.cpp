/*********************
Name: Logan Falkenberg
Coding 02
Purpose: This file holds the code for the headers file class Shark. Contains setters/getters for the instances of the class.
**********************/

#include "shark.h"

Shark::Shark(){

    setGills(MIN_GILLS);
    setGirth(MIN_GIRTH);
    setLength(MIN_LENGTH);

}

Shark::Shark(int gl, float gr, float ln, int t){

    setGills(gl);
    setGirth(gr);
    setLength(ln);
    setTeeth(t);

}

Shark::~Shark(){
}

int Shark::getTeeth(){

    return teeth;

}

float Shark::getWeight() {

    return ((length * girth * girth) + (girth * girth * .509)) / 800;

}

void Shark::setTeeth(int t) {

    if (t > MIN_TEETH){
        teeth = t;
    } else {
        teeth = MIN_TEETH;
    }

}
