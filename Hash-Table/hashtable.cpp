/*********************
Name: Logan Falkenberg
Coding 06
Purpose: This is the cpp file for my Hashtable class. It contains all methods of the class. Includes the header file.
**********************/

#include "hashtable.h"

Hashtable::Hashtable() {
    count = 0;
    for (int i =0; i < HASHTABLESIZE; i++){
        LinkedList *list = new LinkedList();
        hashtable[i] = list;
    }
} // End of constructor

Hashtable::~Hashtable() {
    for(int i = 0; i < count; i++){delete(hashtable[i]);}
} // End of destructor

bool Hashtable::insertEntry(int id, string *data) {
    bool didInsert = false;
    int location = hash(id);
    if(id >= 0 && data->length() > 0 && count != HASHTABLESIZE) {
        didInsert = hashtable[location]->addNode(id, data);
        if(didInsert == true){count++;}
    }
    return didInsert;
} // End of insertEntry

string Hashtable::getData(int id) {
    std::string data = "";
    Data data_struct;
    for(int i =0; i < HASHTABLESIZE; i++){
        hashtable[i]->getNode(id, &data_struct);
        if(data_struct.id == id){data = data_struct.data;}
    }
    return data;
} // End of getData

bool Hashtable::removeEntry(int id) {
    bool didRemove = false;
    int location = hash(id);
    if(id >= 0) {
        didRemove = hashtable[location]->deleteNode(id);
        if (didRemove == true) {count--;}
    }
    return didRemove;
} // End of removeEntry

int Hashtable::getCount() {return count;} // End of getCount

void Hashtable::printTable() {
    for (int i = 0; i < HASHTABLESIZE; i++) {
        std::cout << "\tTable Entry: " << i << " : ";
        hashtable[i]->printList();
        std::cout << "" << std::endl;
    }
} // End of printTable

int Hashtable::hash(int id) {return id % HASHTABLESIZE;} // End of hash

void Hashtable::clearTable() {
    for(int i = 0; i < HASHTABLESIZE; i++){
        hashtable[i]->clearList();
    }
} // End of clear table