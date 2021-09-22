/*********************
Name: Logan Falkenberg
Coding 03
Purpose: Contains the methods to manipulate a stack that will be instantiated in main.cpp (test file).
**********************/

#include "stack.h"

// Constructor
Stack::Stack(){

    top = -1;

} // End of constructor

bool Stack::push(int x){

    bool success = false;

    if (top < MAX_SIZE - 1){

        // Executes code, increments to next index, pushes x element onto the stack
        stack[++top] = x;

        success = true;

    }

    return success;

} // End of push()

int Stack::pop(){

    if (top < 0){

        throw -1;

    }

    return stack[top--];

} // End of pop()

int Stack::peek(){

    if (top < 0){

        throw -1;

    }

    return stack[top];

} // End of peek()

bool Stack::isEmpty() {

    return top < 0;

} // End of isEmpty()

