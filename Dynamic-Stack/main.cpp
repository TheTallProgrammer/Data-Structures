/*
 * COSC 2436
 * Stacks Assignment
 * Do not modify this comment
 * 
 * You may modify this file ONLY where indicated below
 */

#include "main.h"

int main() {
    /**************************************************************/
    /* DO NOT MODIFY ANYTHING BETWEEN THIS LINE AND THE ONE BELOW */
    /**************************************************************/

    //this program uses rand, this is the seed (do this only once!)
    srand(time(NULL));

    // making 5 - 25 test cases
    int number_test_cases = rand() % (TEST_CASE_BASE + 1) + TEST_CASE_OFFSET;

    //making test case parallel arrays to hold test data
    int ids[number_test_cases];
    char *data[number_test_cases];
    for (int i = 0; i < number_test_cases; i++) {
        data[i] = new char[BUFFER_SIZE];
    }

    //filling arrays with test case data
    cout << "Making " << number_test_cases << " test cases..." << endl;
    make_test_cases(ids, data, number_test_cases);
    cout << "Test cases done" << endl << endl;
    display_test_cases(ids, data, number_test_cases);

    /**************************************************************/
    /* MODIFY THE FILE FROM HERE DOWN */
    /**************************************************************/

    std::cout << "\n======================\n" << std::endl;

    // ------------------- INITIAL TESTS ------------------- //

    // declare the stack
    Stack stack;
    bool tempBool;
    Data data1;

    tempBool = stack.isEmpty();
    std::cout << "\nStack empty? (true=1/false=0): " << tempBool << std::endl;

    tempBool = stack.peek(&data1);
    std::cout << "Stack peek? (true=1/false=0): " << tempBool << std::endl;

    tempBool = stack.pop(&data1);
    std::cout << "Can pop? (true=1/false=0): " << tempBool << "\n" << std::endl;


    // ------------------- MAIN TESTS ------------------- //

    // Initializing variables
    Data testData;
    Stack testStack;

    for (int tests = 1; tests <= 6; tests++){

        switch(tests) {

            // ======= CASE 1 =======
            // Pushed elements as large as the number of test cases, sometimes overflowing, then pops till emtpy, confirms isEmpty()
            // Calling peek after pushing/popping every element.
            case 1:

                std::cout << "\n======= CASE 1 =======" << std::endl;
                std::cout << "Filling as large as number cases, pops till empty" << std::endl;
                std::cout << "======================" << std::endl;

                // Pushes data to stack size limit
                for (int i = 0; i < number_test_cases; i++) {

                    // Pulling strings from the char data array
                    const std::string tempString = data[i];
                    tempBool = testStack.push(ids[i], &tempString);
                    std::cout << "Pushed struct. Successful? (true=1/false=0): " << tempBool << ", Iteration: " << i + 1
                              << std::endl;

                }

                // Pops data until the stack is empty
                while (!testStack.isEmpty()) {

                    tempBool = testStack.peek(&data1);
                    std::cout << "\nStack peek? (true=1/false=0): " << tempBool << std::endl;
                    std::cout << "Peeking data in stack: " << testData.id << ", " << testData.information << std::endl;

                    tempBool = testStack.pop(&testData);
                    std::cout << "Can pop? (true=1/false=0): " << tempBool << std::endl;
                    std::cout << "Popped data: " << testData.id << ", " << testData.information << std::endl;

                }

                tempBool = testStack.pop(&testData);
                std::cout << "\nCan pop? (true=1/false=0): " << tempBool << std::endl;
                std::cout << "Popped data: " << testData.id << ", " << testData.information << std::endl;

                tempBool = testStack.isEmpty();
                std::cout << "Stack empty? (true=1/false=0): " << tempBool << std::endl;

                break;

                // ======= CASE 2 =======
                // Pushed single element, peeked, popped, checked that it was indeed empty
            case 2:

                std::cout << "\n======= CASE 2 =======" << std::endl;
                std::cout << "Pushed single element, peeked, popped, checked that it was indeed empty" << std::endl;
                std::cout << "======================" << std::endl;

                if(NULL) {
                } else {

                    const std::string tempString = data[0];
                    tempBool = testStack.push(ids[0], &tempString);
                    std::cout << "Pushed struct. Successful? (true=1/false=0): " << tempBool << std::endl;

                    tempBool = testStack.peek(&testData);
                    std::cout << "\nStack peek? (true=1/false=0): " << tempBool << std::endl;
                    std::cout << "Peeking data in stack: " << testData.id << ", " << testData.information << std::endl;

                    tempBool = testStack.isEmpty();
                    std::cout << "Stack empty? (true=1/false=0): " << tempBool << std::endl;

                    tempBool = testStack.pop(&testData);
                    std::cout << "Can pop? (true=1/false=0): " << tempBool << std::endl;
                    std::cout << "Popped data: " << testData.id << ", " << testData.information << std::endl;

                    tempBool = testStack.isEmpty();
                    std::cout << "Stack empty? (true=1/false=0): " << tempBool << std::endl;
                }

                break;

            // ======= CASE 3 =======
            // Peek an empty stack to see if it passes back correct values
            case 3:

                std::cout << "\n======= CASE 3 =======" << std::endl;
                std::cout << "Peek an empty stack to see if it passes back correct values" << std::endl;
                std::cout << "======================" << std::endl;

                tempBool = stack.peek(&testData);
                std::cout << "Stack peek? (true=1/false=0): " << tempBool << std::endl;

                break;

            // ======= CASE 4 =======
            // Underflowing the stack
            case 4:

                std::cout << "\n======= CASE 4 =======" << std::endl;
                std::cout << "Underflowing the stack" << std::endl;
                std::cout << "======================" << std::endl;

                if(NULL) {
                } else {

                    const std::string tempString = data[0];
                    tempBool = testStack.push(ids[0], &tempString);
                    std::cout << "Pushed struct. Successful? (true=1/false=0): " << tempBool << std::endl;

                    const std::string tempString2 = data[1];
                    tempBool = testStack.push(ids[1], &tempString2);
                    std::cout << "Pushed struct. Successful? (true=1/false=0): " << tempBool << "\n" << std::endl;

                    for (int k = 0; k < 3; k++){

                        tempBool = testStack.pop(&testData);
                        std::cout << "Can pop? (true=1/false=0): " << tempBool << std::endl;
                        std::cout << "Popped data: " << testData.id << ", " << testData.information << std::endl;

                    }

                }

                break;

            // ======= CASE 5 =======
            // Overflowing the stack
            case 5:

                std::cout << "\n======= CASE 5 =======" << std::endl;
                std::cout << "Overflowing the stack" << std::endl;
                std::cout << "======================" << std::endl;

                // Pushes data to stack size limit + 1
                for (int i = 0; i < number_test_cases; i++) {

                    const std::string tempString = data[i];
                    tempBool = testStack.push(ids[i], &tempString);
                    std::cout << "Pushed struct. Successful? (true=1/false=0): " << tempBool << std::endl;

                }

                break;

            // ======= CASE 6 =======
            // Fills stack half way, randomly calls pop, push, peek, isEmpty() hundreds of times
            case 6:

                std::cout << "\n======= CASE 6 =======" << std::endl;
                std::cout << "Fills stack half way, randomly calls pop, push, peek, isEmpty() hundreds of times" << std::endl;
                std::cout << "======================" << std::endl;

                    int rNum;
                    Data dataC6;
                    Stack stackC6;
                    int count = 0;

                    // Initializes the random number gen that starts the initial num at a
                    // different value each pass through with no timer
                    srand(time(NULL));

                    std::cout << "Number of test cases: " << number_test_cases << std::endl;
                    // Initial push to half stack size
                    for (int i = 0; i < number_test_cases/2; i++){

                        std::cout << "\nIteration: " << i << std::endl;

                        const std::string tempString = data[i];
                        tempBool = stackC6.push(ids[i], &tempString);
                        std::cout << "Pushed struct. Successful? (true=1/false=0): " << tempBool << std::endl;
                        count += 1;

                    }

                    std::cout << "\n-- DATA PUSHED TO STACK --" <<  std::endl;

                    // Random method call loop
                    for (int i = 0; i < 1001; i++) {

                        // Picks random number between 1-3
                        rNum = (rand() % 3) + 1;

                        // Push case
                        if(rNum == 1 && count < number_test_cases) {

                            if (count < 10) {

                                std::cout << "\nIteration: " << i << std::endl;

                                const std::string tempString = data[count];
                                tempBool = stackC6.push(ids[count], &tempString);
                                std::cout << "Pushed struct. Successful? (true=1/false=0): " << tempBool
                                          << std::endl;

                            }

                            if (count < 9){
                                count += 1;
                            }

                        } else if (count >= number_test_cases) {
                            std::cout << "Exception Error: Can't surpass number of test cases." << std::endl;
                        }

                        // Pop/isEmpty case
                        if(rNum == 2) {

                            std::cout << "\nIteration: " << i << std::endl;

                            tempBool = stackC6.isEmpty();
                            std::cout << "Stack empty? (true=1/false=0): " << tempBool << std::endl;

                            tempBool = stackC6.pop(&dataC6);
                            std::cout << "Can pop? (true=1/false=0): " << tempBool << std::endl;
                            std::cout << "Popped data: " << dataC6.id << ", " << dataC6.information << std::endl;

                            if (count > 0) {
                                count -= 1;
                            } else if (count == 0){
                                NULL;
                            }

                        }

                        // Peek case
                        if(rNum == 3){

                            std::cout << "\nIteration: " << i << std::endl;

                            tempBool = stack.peek(&dataC6);
                            std::cout << "Stack peek? (true=1/false=0): " << tempBool << std::endl;
                        }

                    }

                    std::cout << "\n== EMPTYING STACK ==" << std::endl;

                    while (!stackC6.isEmpty()){
                        tempBool = stackC6.isEmpty();
                        std::cout << "\nStack empty? (true=1/false=0): " << tempBool << std::endl;

                        tempBool = stackC6.pop(&dataC6);
                        std::cout << "Can pop? (true=1/false=0): " << tempBool << std::endl;
                        std::cout << "Popped data: " << dataC6.id << ", " << dataC6.information << std::endl;
                    }

                    tempBool = stackC6.isEmpty();
                    std::cout << "\nStack empty? (true=1/false=0): " << tempBool << std::endl;

                    std::cout << "\n---------------------------- TESTS CONCLUDED ----------------------------" << std::endl;

                break;

        } // End of switch

    } // End of for loop

    return 0;

} // End of main()
