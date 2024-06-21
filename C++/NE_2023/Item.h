//
// Created by Ishimwe Ndungutse Charles on 21/06/2024.
//

#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>

using namespace std;

class Item {
public:
    int item_id;
    string item_name;
    int item_quantity;
    tm item_registration_date = {};

    Item(const int id, const string &name, const int quantity, const tm &registration_date) {
        item_id = id;
        item_name = name;
        item_quantity = quantity;
        // const time_t now = time(nullptr);
        // item_registration_date = localtime(&now);
        item_registration_date = registration_date;
    }

    static string toLocalDateString(const tm &date) {
        ostringstream oss;
        oss << (date.tm_year + 1900) << "-" << (date.tm_mon + 1) << "-" << date.tm_mday;
        return oss.str();
    }

    [[nodiscard]] string toCSV() const {
        // return to_string(item_id) + "," + item_name + "," + to_string(item_quantity) + "," + asctime(item_registration_date);
        ostringstream oss;
        oss << item_id << "," << item_name << "," << item_quantity << ","
                << toLocalDateString(item_registration_date);
        return oss.str();
    }

    static Item fromCSV(string &csvLine) {
        istringstream ss(csvLine);
        string token;

        getline(ss, token, ',');
        int id = std::stoi(token);
        getline(ss, token, ',');
        string name = token;
        getline(ss, token, ',');
        int quantity = stoi(token);

        tm date = {};
        getline(ss, token, ',');
        istringstream dateStream(token);
        dateStream >> get_time(&date, "%Y-%m-%d");
        if (dateStream.fail()) {
            throw runtime_error("Failed to parse date.");
        }

        Item item = Item(id, name, quantity, date);
        return item;
    }

    void display() const {
        cout << "Item ID: " << item_id << "\tItem Name: " << item_name << "\tItem Quantity: " << item_quantity <<
                "\tReg Date: " << toLocalDateString(item_registration_date) << endl;
    }
};



#endif //ITEM_H
