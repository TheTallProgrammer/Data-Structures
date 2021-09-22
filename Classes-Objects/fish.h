/*********************
Name: Logan Falkenberg
Coding 02
Purpose: This is the header file for the fish.cpp file. It holds class Fish which contains various methods and attributes
for future fish instances.
**********************/

#ifndef CLASSES_FISH_H
#define CLASSES_FISH_H

#define MIN_GILLS 4
#define MIN_GIRTH 1.0
#define MIN_LENGTH 1.0

class Fish {

    public:

        // Constructors
        Fish();
        Fish(int, float, float);

        // Destructor
        ~Fish();

        // Getters
        int getGills();
        float getGirth();
        float getLength();
        float getWeight();

        // Setters
        void setGills(int);
        void setGirth(float);
        void setLength(float);


    protected:
        // Variables only the child(ren) have access to
        int gills;
        float girth, length;

}; // End class Fish

#endif //CLASSES_FISH_H