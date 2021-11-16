/*
Filename:Ch5Ex20.cpp
Creation Date: 10-20-2021
Author: Clint Kline
Purpose:
    - desription.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    int accumulator;

    cout << "****WELCOME TO THE ACCUMULATOR****" << endl;

    for (num = 0; num <= 1000; num++)
    {

        if (num % 3 == 0 || num % 5 == 0 && num >= 0 && num <= 1000)
        {
            cout << " + " << num;
            accumulator += num;
        }
    };
    cout << endl;
    cout << "\n";
    cout << "The ACCUMULATOR equals : " << accumulator << endl;
    return 0;
}