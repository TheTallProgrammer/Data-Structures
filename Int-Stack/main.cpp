/*********************
Name: Logan Falkenberg
Coding 03
Purpose: Strictly the test file for testing instances a stack created in stack.h/.cpp.
         Contains 9 test cases that use a switch statement to test possibilities in the stack.
**********************/

#include "main.h"

int main(int argc, char** argv) {

    for (int tests = 1; tests <= 9; tests++){

        switch(tests){

            // ======= CASE 1 =======
            // Pushed elements to the max stack size, then pops till emtpy, confirms isEmpty()
            // Calling peek after pushing/popping every element.
            case 1:

                std::cout << "\n======= CASE 1 =======" << std::endl;

                try {

                    Stack s1;
                    Stack s2;

                    int dataC1 = 10;
                    int dataC12 = 1;

                    // Pushes data to stack size limit
                    for (int i = 0; i < MAX_SIZE; i++){

                        std::cout << "\nCan Add to Stack? (1=true/0=false) : " << s1.push(dataC1) << std::endl;
                        std::cout << "Pushing Element: " << dataC1 << " into top position: " << i << std::endl;

                        std::cout << "\nCan Add to Stack? (1=true/0=false) : " << s2.push(dataC12) << std::endl;
                        std::cout << "Pushing Element: " << dataC12 << " into top position: " << i << std::endl;

                        std::cout << "\nPeeking Element: " << s1.peek() << " at top position: " << i << std::endl;
                        std::cout << "Peeking Element: " << s2.peek() << " at top position: " << i << std::endl;
                        std::cout << "------------------------------------------------------------------" << std::endl;

                        dataC1 *= 10;
                        dataC12 += 2;

                    }

                    // Pops data until the stack is empty
                    while(!s1.isEmpty()) {

                        std::cout << "\nPeeking Element: " << s1.peek() << " : Stack 1" << std::endl;
                        std::cout << "Peeking Element: " << s2.peek() << " : Stack 2" << std::endl;

                        std::cout << "\nPop Element: " << s1.pop() << " : Stack 2" << std::endl;
                        std::cout << "Pop Element: " << s2.pop() << " : Stack 1" << std::endl;

                    }

                    std::cout << "\nStack 1 is empty? (1=true/0=false) : " << s1.isEmpty() << std::endl;
                    std::cout << "Stack 2 is empty? (1=true/0=false) : " << s2.isEmpty() << std::endl;

                }

                catch (int x) {

                    std::cout << "Exception Error: Stack is empty." << std::endl;

                }

                break;


            // ======= CASE 2 =======
            // Pushed single element, peeked, popped, checked that it was indeed empty
            case 2:

                std::cout << "\n======= CASE 2 =======" << std::endl;

                try {

                    Stack s1;

                    int dataC2 = 10;

                    s1.push(dataC2);
                    std::cout << "Pushed Element: " << dataC2 << std::endl;

                    std::cout << "Peeking Element: " << s1.peek() << std::endl;
                    std::cout << "Is Stack Empty? (1=true/0=false) : " << s1.isEmpty() << std::endl;
                    std::cout << "\nPop Element: " << s1.pop() << std::endl;
                    std::cout << "Is Stack Empty? (1=true/0=false) : " << s1.isEmpty() << std::endl;

                }

                catch (int x) {

                    std::cout << "Exception Error: Stack is empty." << std::endl;

                }

                break;

            // ======= CASE 3 =======
            // Peek an empty stack to see if it catches the error
            case 3:

                std::cout << "\n======= CASE 3 =======" << std::endl;

                try {

                    Stack s1;

                    s1.peek();

                }

                catch (int x){

                    std::cout << "Exception Error: Stack is empty." << std::endl;

                }

                break;

            // ======= CASE 4 =======
            // Underflowing the stack
            case 4:

                std::cout << "\n======= CASE 4 =======" << std::endl;

                try {

                    Stack s1;

                    int dataC4 = 10;

                    s1.push(dataC4);
                    std::cout << "Pushed Element: " << dataC4 << std::endl;

                    s1.push(dataC4);
                    std::cout << "Pushed Element: " << dataC4 << std::endl;

                    std::cout << "Pop Element: " << s1.pop() << std::endl;
                    std::cout << "Pop Element: " << s1.pop() << std::endl;
                    std::cout << "Pop Element: " << s1.pop() << std::endl;

                }

                catch (int x) {

                    std::cout << "\nException Error: Stack is empty." << std::endl;

                }

                break;

            // ======= CASE 5 =======
            // Overflowing the stack
            case 5:

                std::cout << "\n======= CASE 5 =======" << std::endl;

                try{

                    Stack s1;

                    int dataC5 = 10;

                    // Pushes data to stack size limit + 1
                    for (int i = 0; i < MAX_SIZE + 1; i++){

                        std::cout << "\nAttempt to Push Element: " << dataC5 << std::endl;
                        std::cout << "Is Push Successful? : (true=1/false=0): " << s1.push(dataC5) << std::endl;


                        dataC5 += 10;

                    }

                }

                catch (int x){

                    std::cout << "Exception Error." << std::endl;

                }

                break;

            // ======= CASE 6 =======
            // replaces the value of the data in the current position of top
            case 6:

                std::cout << "\n======= CASE 6 =======" << std::endl;

                try {
                    
                    Stack s1;
                    
                    int dataC6 = 10;

                    s1.push(dataC6);
                    std::cout << "\nPushed Element: " << dataC6 << std::endl;
                    std::cout << "Peeking Element: " << s1.peek() << std::endl;
                    std::cout << "Pop Element: " << s1.pop() << std::endl;

                    s1.push(dataC6);
                    std::cout << "\nPushed Element: " << dataC6+1 << std::endl;
                    std::cout << "Peeking Element: " << s1.peek() << std::endl;
                    std::cout << "Pop Element: " << s1.pop() << std::endl;

                    std::cout << "Is Stack Empty? (1=true/0=false) : " << s1.isEmpty() << std::endl;
                    
                }

                catch (int x) {

                    std::cout << "Exception Error" << std::endl;
                    
                }

                break;

            // ======= CASE 7 =======
            // Checks for incorrect input in the stack
            case 7:

                std::cout << "\n======= CASE 7 =======" << std::endl;

                try {

                    Stack s1;

                    float testFloat = 2.63;

                    s1.push(testFloat);
                    std::cout << "Pushed Element: " << testFloat << std::endl;

                    std::cout << "Peeking Element: " << s1.peek() << std::endl;

                }

                catch (int x) {

                    std::cout << "Exception Error" << std::endl;

                }

                break;

            // ======= CASE 8 =======
            // Testing to see if wrong data type is entered in test above if program will still run
            case 8:

                std::cout << "\n======= CASE 8 =======" << std::endl;

                try {

                    Stack s1;

                    int dataC8 = 10;

                    s1.push(dataC8);
                    std::cout << "Pushed Element: " << dataC8 << std::endl;
                    std::cout << "Peeking Element: " << s1.peek() << std::endl;
                    std::cout << "Pop Element: " << s1.pop() << std::endl;

                    s1.push(dataC8);
                    std::cout << "\nPushed Element: " << dataC8+1 << std::endl;
                    std::cout << "Peeking Element: " << s1.peek() << std::endl;
                    std::cout << "Pop Element: " << s1.pop() << std::endl;

                    std::cout << "Is Stack Empty? (1=true/0=false) : " << s1.isEmpty() << std::endl;

                }

                catch (int x) {

                    std::cout << "Exception Error" << std::endl;

                }

                break;

            // ======= CASE 9 =======
            // Fills stack half way, randomly calls pop, push, peek, isEmpty() hundreds of times
            case 9:

                std::cout << "\n======= CASE 9 =======" << std::endl;

                try {

                    Stack s1;

                    int dataC9 = 1;
                    int rNum, didPush, stackEmpty;

                    // Initializes the random number gen that starts the initial num at a
                    // different value each pass through with no timer
                    srand(time(NULL));

                    // Initial push to half stack size
                    for (int i = 0; i < MAX_SIZE/2; i++){

                        std::cout << "Stack Index: " << i << std::endl;
                        s1.push(dataC9);
                        dataC9 += 1;
                    }

                    std::cout << "\n-- STACK HALF FILLED --" << std::endl;

                    // Random method call loop
                    for (int i = 0; i < 500; i++) {

                        // Picks random number between 1-3
                        rNum = (rand() % 3) + 1;

                        dataC9 += 1;

                        switch (rNum) {

                            case 1:

                                std::cout << "\nIteration: " << i << std::endl;

                                didPush = s1.push(dataC9);
                                std::cout << "Attempted to Push. Push Successful? : (true=1/false=0): " << didPush << std::endl;

                                break;

                            case 2:

                                std::cout << "\nIteration: " << i << std::endl;

                                stackEmpty = s1.isEmpty();
                                std::cout << "Is Stack Empty? (1=true/0=false) : " << stackEmpty << std::endl;

                                std::cout << "Pop Element: " << s1.pop() << std::endl;

                                break;

                            case 3:

                                std::cout << "\nIteration: " << i << std::endl;

                                std::cout << "Peeking Element: " << s1.peek() << std::endl;

                                break;

                        }

                    } // End of for loop

                } // End of try

                catch (int x) {

                    std::cout << "Exception Error: Stack is empty." << std::endl;

                }

                break;

        } // End of switch

    } // End of for loop

    return 0;
} // End of main
