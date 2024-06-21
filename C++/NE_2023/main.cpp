/**
 * must be compiled by g++ 17 or later
 */

#include <iostream>
#include <ctime>
#include <fstream>
#include <sstream>
#include "utils.h"
#include "item.service.h"

using namespace std;


struct Command {
    string name;
    string description;
};



int main() {
    // Command exit = {"q", "Exit Program"};
    vector<Command> commands = {
        {"q", "Exit Program"},
        {"itemadd", "<item_id> <item_name> <item_quantity>"},
        {"itemlist", "List items in file"}
    };

    string inCommand;

    cout << "Welcome to inventory management system, type 'help' to view available commands" << endl;
    int id, quantity;
    string name;
    while (true) {
        cout << "Enter Command: ";
        cin >> inCommand;
        string _command = toLowerCase(inCommand);
        if (_command == "q") break;
        if (_command == "help") {
            cout << "-------------------------------" << endl;
            cout << "*      Commands syntaxes      *" << endl;
            cout << "-------------------------------" << endl;
            // for (auto &[name, description]: commands) {
            //     cout << name << "\t" << description << endl;
            // }
            for (auto &[name, description] : commands) {
                cout << name << "\t" << description << endl;
            }
        } else if (_command == "itemadd") {
            cout << "Enter item id, name, quantity: ";
            cin >> id >> name >> quantity;
            // Get current time
            const time_t now = time(nullptr);
            const tm *localTime = localtime(&now);
            addItem(id, name, quantity, *localTime);
        } else if (_command == "itemlist") {
            listItems();
        } else {
            cout << "Invalid Command, type help to view available commands " << endl;
        }
    }
    return 0;
}
