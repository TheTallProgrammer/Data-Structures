/*********************
Name: Logan Falkenberg
Coding 04
Purpose: Contains the methods to manipulate a pointer stack that will be instantiated in main.cpp (test file).
**********************/

#include "stack.h"

// Constructor
Stack::Stack(){

    top = -1;

} // End of constructor

// Destructor
Stack::~Stack(){

    while(top > -1) {

        delete stack[top--];

    }

}


bool Stack::push(int id, const string *data){

    bool success = false;

    if (top < STACK_SIZE - 1) {

        if (id >= 0 && data->length() > 0) {

            // Dynamically create a struct newData and add id, data to it
            Data *newData = new Data;

            newData->id = id;

            // Dereference data
            newData->information = *data;

            // Executes code, increments to next index, pushes new data struct onto the stack
            stack[++top] = newData;

            success = true;

        }

    }

    return success;

} // End of push()

bool Stack::pop(Data *data_struct){

    bool popBool = false;

    if (top >= 0) {

        // Copying data from top of stack to passed in struct by de-referencing
        *data_struct = *stack[top];

        // Deallocating and decrementing stack
        delete stack[top--];

        popBool = true;

    } else {

        data_struct->id = -1;
        data_struct->information = "";

    }

    return popBool;

} // End of pop()

bool Stack::peek(Data *data_struct){

    bool peekBool = false;

    if (top >= 0) {

        // Copying data from top of stack to passed in struct
        *data_struct = *stack[top];

        peekBool = true;

    } else {

        data_struct->id = -1;
        data_struct->information = "";

    }

    return peekBool;

} // End of peek()

bool Stack::isEmpty() {

    return (top < 0);

} // End of isEmpty()