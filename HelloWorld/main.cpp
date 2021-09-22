/*********************
Name: Logan Falkenberg
Coding 01
Purpose: This program takes a set of parameters and displays the length of the name of the exe of the file,
         the length of each parameter, as well as the number of parameters that were inputted.
**********************/

#include "main.h"

int main(int argc, char *argv[]) {

    std::cout << "My Command line analyzer..." << std::endl;

    std::cout << "The number of command line parameters are: " << argc << std::endl;
    std::cout << "The length of the name of the program is: " << string_length(argv[0]) << std::endl;


    for (int i = 1; i < argc; i++){
        std::cout << "The length of parameter " << i << " is " << string_length(argv[i]) << std::endl;
    }


    return 0;

} // End of main()