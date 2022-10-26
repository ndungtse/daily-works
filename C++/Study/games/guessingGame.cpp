#include <iostream>
#include <string.h>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

bool areStringsEqual(string str, string str1)
{
    if (str.length() != str1.length())
    {
        return false;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str1[i])
        {
            return false;
        }
    }
    return true;
}

string strTrim(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.length() << endl;
        if (str[i] == ' ')
        {
            str[i] = '\0';
        }
        
    }
    return str;
}

int main(int argc, char const *argv[])
{
    srand(time(0));
    string fruits[10] = {"apple", "banana", "orange", "mango", "grapes", "watermelon", "pineapple", "strawberry", "blueberry", "kiwi"};
    string animals[10] = {"dog", "cat", "cow", "horse", "elephant", "lion", "tiger", "monkey", "zebra", "giraffe"};
    string colors[10] = {"red", "blue", "green", "yellow", "orange", "purple", "pink", "black", "white", "brown"};
    string countries[10] = {"india", "usa", "uk", "china", "japan", "russia", "australia", "canada", "germany", "france"};
    string cities[10] = {"mumbai", "delhi", "bangalore", "chennai", "kolkata", "hyderabad", "pune", "ahmedabad", "surat", "jaipur"};
    string teams[10] = {"chelsea", "manchester united", "manchester city", "liverpool", "arsenal", "tottenham", "real madrid", "barcelona", "bayern munich", "juventus"};

    string guess;
    string userAnswer;
    int category;
    cout << "Enter a category: " << endl;
    cout << "1. fruits" << endl;
    cout << "2. animals" << endl;
    cout << "3. colors" << endl;
    cout << "4. countries" << endl;
    cout << "5. cities" << endl;
    cout << "6. teams" << endl;

    cin >> category;

    switch (category)
    {
    case 1:
        guess = fruits[rand() % 10];
        break;
    case 2:
        guess = animals[rand() % 10];
        break;
    case 3:
        guess = colors[rand() % 10];
        break;
        case 4:
        guess = countries[rand() % 10];
        break;
    case 5:
        guess = cities[rand() % 10];
        break;
    case 6:
        guess = teams[rand() % 10];
        break;
    default:
        cout << "Invalid category" << endl;
        break;
    }

    cout << "Guess the word: " << endl;
    cin >> userAnswer;
    userAnswer = strTrim(userAnswer);
    cout << userAnswer << endl;
    if (areStringsEqual(guess, userAnswer))
    {
        cout << "You guessed it right!" << endl;
    }
    else
    {
        cout << "You guessed it wrong!" << endl;
    }

    
    return 0;
}
