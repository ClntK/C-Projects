/*
Filename:testFile.cpp
Creation Date: 10-13-2021
Author: Clint Kline
Purpose:
    - desription.

    Reply to Prof. Miller: this heavier version of the program is built to be able to accept
    more entries for each letter and also of course to be able to add letters as they
    become necessary.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

enum flowerType
{
    ALLIUM,
    CARNATION,
    DAISY,
    FREESIA,
    GARDENIA,
    IRIS,
    LILAC,
    ORCHID,
    ROSE,
    SUNFLOWER,
    TULIP
};

void extractValue(char ch)
{
    flowerType flower;

    switch (ch)
    {
    case 'a':
        flower = ALLIUM;
        cout << flower;
        break;
    case 'c':
        flower = CARNATION;
        cout << flower;
        break;
    case 'd':
        flower = DAISY;
        cout << flower;
        break;
    case 'f':
        flower = FREESIA;
        cout << flower;
        break;
    case 'g':
        flower = GARDENIA;
        cout << flower;
        break;
    case 'i':
        flower = IRIS;
        cout << flower;
        break;
    case 'l':
        flower = LILAC;
        cout << flower;
        break;
    case 'o':
        flower = ORCHID;
        cout << flower;
        break;
    case 'r':
        flower = ROSE;
        cout << flower;
        break;
    case 's':
        flower = SUNFLOWER;
        cout << flower;
        break;
    case 't':
        flower = TULIP;
        cout << flower;
        break;
    default:
        cout << "Sorry, we currently have no flowers beginning with that letter in stock." << endl;
        break;
    }
}

int main()
{
    char ch;

    cout << "enter the first letter of your favorite flower: " << endl;
    cout << ">> ";
    cin >> ch;

    extractValue(ch);
    cout << endl;
    cout << endl;
    main();
    return 0;
};
