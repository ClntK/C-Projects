/*
Filename:Ch5Ex4.cpp
Creation Date: 10-23-2021
Author: Clint Kline
Purpose:
    - description.
*/

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    string letterNumber;
    string numberNumber;
    int count = 0;

    cout << "\n\nEnter a telephone number expressed in letters: " << endl;
    cout << ">> ";

    getline(cin, letterNumber);

    letterNumber.erase(remove_if(letterNumber.begin(), letterNumber.end(), isspace()), letterNumber.end());

    for (int i = 0; i <= 7; i++)
    {
        char digit;

        char letter = toupper(letterNumber[i]);

        switch (letter)
        {
        case 'A':
        case 'B':
        case 'C':
            digit = '2';
            break;

        case 'D':
        case 'E':
        case 'F':
            digit = '3';
            break;

        case 'G':
        case 'H':
        case 'I':
            digit = '4';
            break;

        case 'J':
        case 'K':
        case 'L':
            digit = '5';
            break;

        case 'M':
        case 'N':
        case 'O':
            digit = '6';
            break;

        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            digit = '7';
            break;

        case 'T':
        case 'U':
        case 'V':
            digit = '8';
            break;

        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            digit = '9';
            break;
        // case ' ':
        //     cout << "whitespaace removal initiated" << endl;
        //     letterNumber.erase(remove(letterNumber.begin(), letterNumber.end(), ' '));
        //     break;
        default:
            cout << "Invalid Entry" << endl;
            break;
        }

        if (count == 3)
        {
            numberNumber += '-';
        }
        else
            numberNumber += digit;

        count++;
    }

    cout << numberNumber << endl;
    main();
    return 0;
};
