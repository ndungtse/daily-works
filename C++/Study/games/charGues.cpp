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
    char fruits[10][30] = {"apple", "banana", "orange", "mango", "grapes", "watermelon", "pineapple", "strawberry", "blueberry", "kiwi"};
    char animals[10][30] = {"dog", "cat", "cow", "horse", "elephant", "lion", "tiger", "monkey", "zebra", "giraffe"};
    char colors[10][30] = {"red", "blue", "green", "yellow", "orange", "purple", "pink", "black", "white", "brown"};
    char countries[10][30] = {"india", "usa", "uk", "china", "japan", "russia", "australia", "canada", "germany", "france"};
    char cities[10][30] = {"mumbai", "delhi", "bangalore", "chennai", "kolkata", "hyderabad", "pune", "ahmedabad", "surat", "jaipur"};
    char teams[10][30] = {"chelsea", "manchester united", "manchester city", "liverpool", "arsenal", "tottenham", "real madrid", "barcelona", "bayern munich", "juventus"};

    char guess[30];
    char userAnswer[30];
    int category;
    cout << "Enter a category: " << endl;
    cout << "1. fruits" << endl;
    cout << "2. animals" << endl;
    cout << "3. colors" << endl;
    cout << "4. countries" << endl;
    cout << "5. cities" << endl;
    cout << "6. teams" << endl;

    cin >> category;

    if (category == 3)
    {
        cout << "equal" << endl;
        // guess = colors[rand() % 10];
        strcpy(guess, colors[rand() % 10]);
    }
    else if (category == 6)
    {
        // guess = teams[rand() % 10];
        strcpy(guess, teams[rand() % 10]);
    }
    else if (category == 5)
    {
        // guess = cities[rand() % 10];
        strcpy(guess, cities[rand() % 10]);
    }
    else if (category == 4)
    {
        // guess = countries[rand() % 10];
        strcpy(guess, countries[rand() % 10]);
    }
    else if (category == 2)
    {
        // guess = animals[rand() % 10];
        strcpy(guess, animals[rand() % 10]);
    }
    else if (category == 1)
    {
        // guess = fruits[rand() % 10];
        strcpy(guess, fruits[rand() % 10]);
    }
    else
    {
        cout << "Invalid category: this category doesn't exists in options" << endl;
        return 0;
    }

    int len = strlen(guess);
    char active[30];
    strcpy(active, guess);
    for (int i = 0; i < len; i++)
    {
        active[i] = '_';
    }

    int tries = 0;
    int solved = 0;
    char letter;

    while (tries < strlen(guess)+4)
    {
        cout << "Guess the word: ";
        cout << len - tries << " left" << endl;
        // for (int i = 0; i < len; i++)
        // {
        //     cout << active[i];
        // }
        cout << endl;
        cout << "Enter a letter: ";
        cin >> letter;
        for (int i = 0; i < len; i++)
        {
            if (guess[i] == letter)
            {
                solved++;
                active[i] = letter;
                userAnswer[i] = letter;
            }
        }
        // cout << userAnswer << endl;
        if(areStringsEqual(active, guess)){
            cout << "========== You won! ==========" << endl;
            return 0;
        }
        cout << active << endl;
        cout << guess << endl;
        cout << strlen(active) << endl;
        // if(strcmp(active, guess) == 0){
        //     cout << "========== You won! ==========" << endl;
        //     return 0;
        // }
        // if((len - tries) < ((len - solved) + 1)){
        //     cout << "Wrong guess" << endl;
        //     return 0;
        // }
        tries++;
    }
    if (active == guess)
    {
        cout << "========== You won! ==========" << endl;
        return 0;
    }
    cout << "You lose!" << endl;
    cout << "The word was: " << guess << endl;


    return 0;
}
