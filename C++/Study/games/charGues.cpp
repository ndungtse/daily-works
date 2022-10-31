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
    bool tryAgain = true;
    char playAgain;

    cout << "==========Welcome to the game of guessing=========" << endl;

    while (tryAgain)
    {

        cout << "Enter a category: " << endl;
        cout << "1. fruits" << endl;
        cout << "2. animals" << endl;
        cout << "3. colors" << endl;
        cout << "4. countries" << endl;
        cout << "5. cities" << endl;
        cout << "6. teams" << endl;

        cin >> category;
        char chossenCategory[30];

        switch (category)
        {
        case 1:
            strcpy(chossenCategory, "colors");
            strcpy(guess, colors[rand() % 10]);
            break;
        case 2:
            strcpy(chossenCategory, "animals");
            strcpy(guess, animals[rand() % 10]);
            break;
        case 3:
            strcpy(chossenCategory, "fruits");
            strcpy(guess, fruits[rand() % 10]);
            break;
        case 4:
            strcpy(chossenCategory, "countries");
            strcpy(guess, countries[rand() % 10]);
            break;
        case 5:
            strcpy(chossenCategory, "cities");
            strcpy(guess, cities[rand() % 10]);
            break;
        case 6:
            strcpy(chossenCategory, "teams");
            strcpy(guess, teams[rand() % 10]);
            break;
        default:
            cout << "Invalid category: this category doesn't exists in options" << endl;
            return 0;
            break;
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
        char letters[10];

        while (tries < strlen(guess) + 1)
        {
            cout << "Guess the  word in " << chossenCategory << ": ";
            cout << len - tries << " left" << endl;
            cout << endl;
            cout << "Enter a letter: ";
            cin >> letters;
            if (strcmp(letters, "quit") == 0)
            {
                cout << "You quit the game" << endl;
                return 0;
            }
            for (int i = 0; i < len; i++)
            {
                if (guess[i] == letters[0])
                {
                    solved++;
                    active[i] = letters[0];
                    userAnswer[i] = letter;
                }
            }
            if (areStringsEqual(active, guess))
            {
                cout << "========== Hourray!! You won! ==========" << endl;
                cout << "The word was" << guess << " as you guessed!!!"<< endl;
                break;
            }
            else if (tries < 0)
            {
                cout << "You lose!" << endl;
                cout << "The word was: " << guess << endl;
                break;
            }

            if ((len - tries) < (len - solved))
            {
                cout << "You lost the game" << endl;
                cout << "The left number of tries is less than the number of letters left to try" << endl;
                cout << "The word was: " << guess << endl;
                break;
            }
            cout << active << endl;
            tries++;
        }
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        if (playAgain == 'y')
        {
            tryAgain = true;
        }
        else
        {
            tryAgain = false;
        }
    }

    return 0;
}
