/*********************
Name: Logan Falkenberg
Coding 01
Purpose: This file contains the function string_length which returns the length a string that is passed into the function.
**********************/

#include "functions.h"

int string_length(const char *str){

    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    return count;

}