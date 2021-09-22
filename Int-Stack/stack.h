/*********************
Name: Logan Falkenberg
Coding 03
Purpose: This is the header file for the stack.cpp file. Contains class Stack.
**********************/
#ifndef MYCODE_STACK_H
#define MYCODE_STACK_H

#define MAX_SIZE 10

class Stack {

    public:

        // Constructors
        Stack();

        // Prototype methods
        bool push(int);
        int pop();
        int peek();
        bool isEmpty();


    private:

        int top;
        int stack[MAX_SIZE];

}; // End of class stack{}


#endif //MYCODE_STACK_H
