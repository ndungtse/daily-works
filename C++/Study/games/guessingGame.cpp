#include <iostream>
#include <string.h>
#include <cmath>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    string fruits[10] = {"apple", "banana", "orange", "mango", "grapes", "watermelon", "pineapple", "strawberry", "blueberry", "kiwi"};
    string animals[10] = {"dog", "cat", "cow", "horse", "elephant", "lion", "tiger", "monkey", "zebra", "giraffe"};
    string colors[10] = {"red", "blue", "green", "yellow", "orange", "purple", "pink", "black", "white", "brown"};
    string countries[10] = {"india", "usa", "uk", "china", "japan", "russia", "australia", "canada", "germany", "france"};
    string cities[10] = {"mumbai", "delhi", "bangalore", "chennai", "kolkata", "hyderabad", "pune", "ahmedabad", "surat", "jaipur"};
    string teams[10] = {"chelsea", "manchester united", "manchester city", "liverpool", "arsenal", "tottenham", "real madrid", "barcelona", "bayern munich", "juventus"};
    
    string guess, category;
    cout << "Enter a category: ";
    cin >> category;
    int l = category.length();

    for (int i = 0; i < l; i++)
    {
        category[i] = tolower(category[i]);
    }

    // get random word
    int random = rand() % 10;
    cout << random << endl;
    cout << category[random] << endl;
    
    return 0;
}
