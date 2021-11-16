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

    cout << "**** - 0 or + ****"
         << "\n"
         << endl;
    cout << "Please Enter a Number: " << endl;
    cout << ">> ";

    cin >> num;

    if (num == 0)
    {
        cout << "\n"
             << num << " is 0"
             << "\n"
             << "\n";
    }
    else if (num < 0)
    {
        cout << "\n"
             << num << " is a negative number."
             << "\n"
             << "\n";
    }
    else if (num > 0)
    {
        cout << "\n"
             << num << " is a positive number."
             << "\n"
             << "\n";
    }
    else
    {
        cout << "PLEASE ENTER A NUMBER... " << endl;
    }

    cout << "Again.. "
         << "\n"
         << endl;
    main();
    return 0;
}