//
// Created by Ishimwe Ndungutse Charles on 21/06/2024.
//

#ifndef ITEM_SERVICE_H
#define ITEM_SERVICE_H

#include <iostream>
#include <ctime>
#include <fstream>
#include <algorithm>
#include "Item.h"

inline void addItem(const int item_id, const string &item_name, const int item_quantity, tm item_registration_date) {
    // Check if the file exists and if it is empty
    bool file_exists = ifstream("inventory.csv").good();
    ofstream inventoryFile("inventory.csv", ios::app);
    if (!inventoryFile) {
        cerr << "File could not be opened for writing!" << endl;
        return;
    }
    // Write the header if the file does not exist or is empty
    if (!file_exists) {
        inventoryFile << "id,name,quantity,registration_date\n";
    }
    auto item = Item(item_id, item_name, item_quantity, item_registration_date);
    cout << "To write";
    item.display();
    inventoryFile << item.toCSV() << "\n";
    cout << "Item add successfully!" << endl;
    inventoryFile.close();
}

inline void listItems() {
    ifstream inventoryFile("inventory.csv");
    if (!inventoryFile) {
        cerr << "File could not be opened for reading!" << endl;
        return;
    }
    vector<Item> items;
    string line;
    int count = 0; // to investigate the first line (header)
    while (getline(inventoryFile, line)) {
        // skip first line
        if (count == 0) {
            count++;
            continue;
        }
        try {
            Item item = Item::fromCSV(line);
            items.push_back(item);
        } catch (const exception &e) {
            cerr << "Error reading line: " << e.what() << endl;
        }
    }
    // sort the items by name
    sort(items.begin(), items.end(), [](const Item &a, const Item &b) {
        return a.item_name < b.item_name;
    });
    for (const auto &item: items) {
        item.display();
    }
    inventoryFile.close();
}

#endif //ITEM_SERVICE_H
