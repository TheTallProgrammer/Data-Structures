/*********************
Name: Logan Falkenberg
Coding 06
Purpose: This is the test file for my hash table class. It tests all possible cases, hundreds of times.
**********************/
#include "main.h"

int main() {
    //seed the rand function
    srand(time(NULL));

    /*
     * This code makes test data of 6 - 25 entries
     * Note this guarantees at least one non unique id and one bad id
     * Do not modify this code from here to the next comment telling
     * you to "START HERE"
     */
    const int testdatasize = BASE + (rand() % OFFSET + 1);
    int ids[testdatasize];
    string strs[testdatasize];

    char buffer[BUFFERSIZE];
    for (int i = 0; i < testdatasize; i++) {
        ids[i] = rand() % MAXID + 1;
        for (int j = 0; j < BUFFERSIZE - 1; j++) {
            buffer[j] = 'a' + i;
        }
        buffer[BUFFERSIZE - 1] = '\0';
        strs[i] = buffer;
    }
    ids[testdatasize-2] = ids[testdatasize-3];
    strs[testdatasize-2] = "known duplicate";
    ids[testdatasize-1] = - 1;
    strs[testdatasize-1] = "known bad";

    /*
     * Show test data
     */
    cout << "Showing Test Data (" << testdatasize << " entries)..." << endl;
    for (int i = 0; i < testdatasize; i++) {
        cout << ids[i] << " : " << strs[i] << endl;
    }
    cout << endl;

    /*
     * Now you have two parallel arrays with ids and strings for test data.
     * START HERE and create your hash table and use the test data to show
     * it works.
     */
    srand(time(NULL));

    bool didInsert = false;
    bool didRemove = false;
    std::string data;
    int rNumCase = 0;
    int rNumIndex = 0;
    int id = 0;
    int iterationCount = 1;

    // create your hash table object here
    Hashtable table;

    // show it is empty by calling getCount and printTable
    std::cout << "\nCurrent amount of entries: " << table.getCount() << std::endl;
    std::cout << "printing table: " << std::endl;
    table.printTable();

    // try and put ALL the test data into the table and show what happens
    // Testing insert/remove methods
    std::cout << "\n**TESTING INSERT/REMOVE**" << std::endl;
    for(int i =0; i < testdatasize; i++){
        didInsert = table.insertEntry(ids[i], &strs[i]);
        int location = ids[i] % HASHTABLESIZE;
        std::cout << "insert of id " << ids[i] << " at table entry " << location << " successful? ";
        if(didInsert == true){
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
    std::cout << "\nCurrent amount of entries: " << table.getCount() << std::endl;
    std::cout << "printing table: " << std::endl;
    table.printTable();
    std::cout << "" << std::endl;
    for(int i =0; i < testdatasize; i++){
        didRemove = table.removeEntry(ids[i]);
        int location = ids[i] % HASHTABLESIZE;
        std::cout << "removal of id " << ids[i] << " at table entry " << location << " successful? ";
        if(didRemove == true){
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
    std::cout << "\nCurrent amount of entries: " << table.getCount() << std::endl;
    std::cout << "printing table: " << std::endl;
    table.printTable();

    // Main testing for loop
    std::cout << "\n**TESTING ALL METHODS**" << std::endl;
    for(int i =0; i < 1000; i++){
        // Picks random index
        rNumIndex = (rand() % testdatasize);
        rNumCase = (rand()%3)+1;
        int location = 0;
        std::cout<<"\nIteration: " << iterationCount << std::endl;

        switch(rNumCase){
            case 1:
                didInsert = table.insertEntry(ids[rNumIndex], &strs[rNumIndex]);
                location = ids[rNumIndex] % HASHTABLESIZE;
                std::cout << "insert of id " << ids[rNumIndex]<< " at table entry " << location << " successful? ";;
                if(didInsert == true){
                    std::cout << "yes" << std::endl;
                } else {
                    std::cout << "no" << std::endl;
                }
                std::cout << "Current amount of entries: " << table.getCount() << std::endl;
                std::cout << "printing table: " << std::endl;
                table.printTable();
                break;

            case 2:
                didRemove = table.removeEntry(ids[rNumIndex]);
                location = ids[rNumIndex] % HASHTABLESIZE;
                std::cout << "removal of id " << ids[rNumIndex] << " at table entry " << location << " successful? ";
                if(didRemove == true){
                    std::cout << "yes" << std::endl;
                } else {
                    std::cout << "no" << std::endl;
                }
                std::cout << "Current amount of entries: " << table.getCount() << std::endl;
                std::cout << "printing table: " << std::endl;
                table.printTable();
                break;

            case 3:
                id = ids[rNumIndex];
                data = table.getData(id);
                std::cout << "data from id: " << id << ": " << data << std::endl;
                break;
        }
        iterationCount++;
    }

    std::cout << "\n====== CLEARING TABLE ======" << std::endl;
    table.clearTable();
    std::cout << "TABLE CLEARED" << std::endl;
    std::cout << "\nprinting table: " << std::endl;
    table.printTable();

    std::cout << "\n***************\nTESTS CONCLUDED\n***************" << std::endl;



    // continue using and testing your table, add and remove data,
    // do whatever it takes to full test your object and prove it
    // is robust and can handle all use cases.

    return 0;
}