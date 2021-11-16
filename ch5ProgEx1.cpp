/*
Filename:testFile.cpp
Creation Date: 10-13-2021
Author: Clint Kline
Purpose:
    - desription.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

string num;
int number;

void removeWhitespace(string input);
void stringToInt(string str);
// void reverseString(string input);
void testPos(int num);
void reverseInt(int num);
void counter(int num);
void seperator(int num, int count);
void printDigits(int num);
void theSum(int num);

int main()
{
    cout << "\n| | | | | THE SEPERATOR | | | | |" << endl;
    cout << "\n\nPlease, present an offering to the SEPERATOR in the form of an integer : " << endl;
    cout << ">> ";
    cin >> num;
    cout << "\n";

    // reverseString(num);
    removeWhitespace(num);
    main();
    return 0;
};

void removeWhitespace(string input)
{
    input.erase(remove(input.begin(), input.end(), ' '));
    cout << input << endl;
    stringToInt(input);
};

// void reverseString(string input)
// {
//     int ch = input.length();
//     for (int i = 0; i < ch / 2; i++)
//     {
//         swap(input[i], input[ch - i - 1]);
//     }
//     stringToInt(input);
// };

void stringToInt(string str)
{
    int theInt;

    stringstream toInt;
    toInt << str;
    toInt >> theInt;

    testPos(theInt);
};

void testPos(int num)
{

    if (num > 0)
    {
        counter(num);
    }
    else if (num < 0)
    {
        num = num * -1;
        cout << "the SEPERATOR does not deal in negatives. Your number shall be: " << num << "\n"
             << endl;
        reverseInt(num);
        theSum(num);
    }
    else
        cout << "Do not trifle. The SEPERATOR accepts strictly integers!"
             << "\n\n"
             << "AGAIN!!" << endl;
};

void reverseInt(int num)
{
    int remainder;
    int reversedNum = 0;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    counter(reversedNum);
};

void counter(int num)
{
    int count = 1;

    // cout << num << endl;

    cout << "\n"
         << "The SEPERATOR speaks! Behold, your digits : " << endl;

    while (num)
    {
        cout << count << ". " << num % 10 << endl;
        num = num / 10;
        count++;
    }

    seperator(num, count);
};

void seperator(int num, int count)
{

    cout << "\nThe SEPERATOR has counted " << count - 1 << " digits. " << endl;
    cout << "The SEPERATOR does not lie!" << endl;

    printDigits(num);
};

void printDigits(int num)
{

    int digit;

    while (num > 0)
    {
        digit = num % 10;
        num /= 10;
        cout << digit << endl;
    }
};

void theSum(int num)
{

    int sumOfaDig = 0;

    while (num > 0)
    {
        sumOfaDig += num % 10;
        num /= 10;
    };

    cout << "\n>> Your digits, COMBINED!! = " << sumOfaDig << endl;
    cout << "\n||| ALL HAIL THE SEPERATOR |||" << endl;
};
