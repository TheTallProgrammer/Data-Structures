/*********************
Name: Logan Falkenberg
Coding 06
Purpose: This is the header file for hashtable.cpp. It contains the class Hashtable and all of its methods.
**********************/

#include <iostream>
#include "data.h"
#include "linkedlist.h"

#define HASHTABLESIZE 15

class Hashtable {

public:

    // Constructor/Destructor
    Hashtable();
    ~Hashtable();

    // Public methods
    bool insertEntry(int, string *);
    string getData(int);
    bool removeEntry(int);
    int getCount();
    void printTable();
    void clearTable();

private:

    // Private method/variables
    int hash(int);

    LinkedList *hashtable[HASHTABLESIZE];
    int count;
};