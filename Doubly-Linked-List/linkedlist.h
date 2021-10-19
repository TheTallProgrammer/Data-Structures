/*********************
Name: Logan Falkenberg
Coding 05
Purpose: Contains the prototype attributes/methods to manipulate a doubly linked list.
**********************/

#include "data.h"
#include <iostream>

class LinkedList{

public:

    // Constructor/Destructor
    LinkedList();
    ~LinkedList();

    //Methods
    bool addNode(int, string*);
    bool deleteNode(int);
    bool getNode(int, Data*);
    void printList(bool = false);
    int getCount();
    bool clearList();
    bool exists(int);

private:

    // Pointer to the first node
    Node *head;

    // Private methods
    void initializeNode(int *, string*, Node*);
    bool checkOperation(Node *, Node *, Node *, int *);
    void insertHead(Node *);
    void insertMiddle(Node *, Node *, Node *);
    void insertTail(Node *, Node *);

}; // End of class LinkedList