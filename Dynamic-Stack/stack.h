/*********************
Name: Logan Falkenberg
Coding 02
Purpose: This is the header file for the stack.cpp file. Contains class Stack.
**********************/


#ifndef STACK_H
#define STACK_H

/*
 * notice there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */

#include "data.h"
#define STACK_SIZE 10 // do not modify this define

class Stack {

public:

    // Constructor
    Stack();

    // Destructor
    ~Stack();

    // Prototype methods
    bool push(int, const string *);
    bool pop(Data *);
    bool peek(Data *);
    bool isEmpty();
    
private:

    /* 
     * write all your private method prototypes here
     */

    // these are the only attributes you need. do not modify them or add any
    int top; // this is your top index
    Data *stack[STACK_SIZE]; // this is your stack, it is an array of Data pointers
};

#endif //STACK_H