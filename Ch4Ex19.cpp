/*
Filename:testFile.cpp
Creation Date: 10-13-2021
Author: Clint Kline
Purpose:
    - desription.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    double sale;
    double bonus;

    cout << "What was the sale amount? " << endl;
    cout << ">> ";
    cin >> sale;

    if (sale > 20000)
    {
        bonus = .10 * sale;
    }
    else if (sale > 10000 && sale <= 20000)
    {
        bonus = .05 * sale;
    }
    else
    {
        bonus = 0;
    }
    cout << "Your bonus is: $" << bonus << "\n"
         << "\n"
         << endl;
    return 0;
}
