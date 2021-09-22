/*********************
Name: Logan Falkenberg
Coding 02
Purpose: This file holds the code for the headers file class Fish. Contains setters/getters for the instances of the class.
**********************/

#include "fish.h"

Fish::Fish(){

    setGills(MIN_GILLS);
    setGirth(MIN_GIRTH);
    setLength(MIN_LENGTH);

} // End of default constructor

Fish::Fish(int gl, float gr, float ln){

    setGills(gl);
    setGirth(gr);
    setLength(ln);

} // End of constructor

Fish::~Fish(){
}

int Fish::getGills() {
    return gills;
}

float Fish::getGirth() {
    return girth;
}

float Fish::getLength() {
    return length;
}

float Fish::getWeight(){
    return (length * girth * girth) / 800;
}

void Fish::setGills(int gl) {
    if (gl > MIN_GILLS){
        gills = gl;
    } else {
        gills = MIN_GILLS;
    }
}

void Fish::setGirth(float gr) {
    if (gr > MIN_GIRTH){
        girth = gr;
    } else {
        girth = MIN_GIRTH;
    }
}

void Fish::setLength(float ln) {
    if (ln > MIN_LENGTH){
        length = ln;
    } else {
        length = MIN_LENGTH;
    }
}