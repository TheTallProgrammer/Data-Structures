/*********************
Name: Logan Falkenberg
Coding 05
Purpose: This file contains the methods of class linkedList. The list can add, delete, get, check, clear, and print nodes inside of it.
**********************/

#include "linkedlist.h"

LinkedList::LinkedList() {

    head = nullptr;

} // End of constructor

LinkedList::~LinkedList() {

    clearList();

} // End of destructor

bool LinkedList::addNode(int id, string *new_data) {

    bool didAdd = false;
    Node *position = head;
    Node *prevPos = head;
    int hasDupe = false;

    if(id >= 0 && new_data->length() > 0 ) {
        while ((head != nullptr) && id > position->data.id && position->next != nullptr && !hasDupe) {// Loops through the list to find a spot for the node
            if (id == position->data.id) { hasDupe = true; }
            prevPos = position;// Makes the prevPos behind the position
            position = position->next;
        } if (head == nullptr && !hasDupe) {// First head node
            Node *newNode = new Node();
            initializeNode(&id, new_data, newNode);
            head = newNode;
            didAdd = true;
        } else if (head != nullptr && !hasDupe){
            Node *newNode = new Node();
            initializeNode(&id, new_data, newNode);
            didAdd = checkOperation(prevPos, position, newNode, &id);
        }
    }
    return didAdd;
} // End of addNode

bool LinkedList::deleteNode(int id){

    bool didDelete = false;
    Node *position = head;

    while(position!=nullptr && !didDelete){
        if (id == position->data.id){
            if (position == head)
                head = head->next;
            if (position->next)
                position->next->prev = position->prev;
            if (position->prev)
                position->prev->next = position->next;
            delete position;
            didDelete = true;
        }
        position = position->next;
    }
    return didDelete;
} // End of deleteNode

bool LinkedList::getNode(int id, Data *struct_data){

    Node *position = head;
    bool gotNode = false;

    while (position != nullptr && !gotNode) {
        if(id == position->data.id){
            struct_data->id = position->data.id;
            struct_data->data = position->data.data;
            gotNode = true;
        } else{
            position = position->next;
        }
    }
    return gotNode;
} // End of getNode

void LinkedList::printList(bool backward){

    Node *position = head;
    int count = 1;

    if(!backward && position!= nullptr) {
        while (position != nullptr) {
            std::cout << "\t" << count << ": " << position->data.id << " : " << position->data.data << std::endl;
            position = position->next;
            count += 1;
        }
    }
    else if (position!=nullptr){
        while(position->next) {
            count += 1;
            position = position->next;
        }
        while(position != nullptr){
            std::cout << "\t" << count << ": " << position->data.id << " : " << position->data.data << std::endl;
            count -=1;
            position = position->prev;
        }
    } else {
        std::cout << "\tList is empty" << std::endl;
    }
} // End of printList

int LinkedList::getCount(){

    int count = 0;
    Node *position = head;

    while (position != nullptr) {
        position = position->next;
        count += 1;
    }
    return count;
} // End of getCount

bool LinkedList::clearList(){

    bool didClear = false;
    Node *position;

    while(head!=nullptr){
        position = head;
        head = head->next;
        delete position;
        didClear = true;
    }
    return didClear;
} // End of clearList

bool LinkedList::exists(int id){

    Node *position = head;
    bool doesExist = false;

    while(position!=nullptr){
        if(id == position->data.id){
            doesExist = true;
        }
        position = position->next;
    }
    return doesExist;
}

void LinkedList::initializeNode(int *id, string *data, Node *newNode){

    newNode->data.id = *id;
    newNode->data.data = *data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

} // End of initializeNode

bool LinkedList::checkOperation(Node *prevPos, Node *position, Node *newNode, int *id){

    bool didAdd = false;

    if(*id == position->data.id){}
    else if(head->data.id > newNode->data.id){// new head
        insertHead(newNode);
        didAdd = true;
    }
    else if(position->data.id > *id) {// Insert middle node
        insertMiddle(prevPos, position, newNode);
        didAdd = true;
    }
    else {
        insertTail(position, newNode);// Adds tail node
        didAdd = true;
    }
    return didAdd;
} // End of checkOperation

void LinkedList::insertHead(Node *newNode){
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
} // End of insertHead

void LinkedList::insertMiddle(Node *prevPos, Node *position, Node *newNode){
    prevPos->next = newNode;
    newNode->prev = prevPos;
    newNode->next = position;
    position->prev = newNode;
} // End of insertMiddle

void LinkedList::insertTail(Node *position, Node *newNode){
    position->next = newNode;
    newNode->prev = position;
} // End of insertTail

