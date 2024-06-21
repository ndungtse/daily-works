//
// Created by Ishimwe Ndungutse Charles on 21/06/2024.
//

#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

inline string toUpperCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

inline string toLowerCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

#endif //UTILS_H
