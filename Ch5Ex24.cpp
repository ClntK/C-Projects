
// Filename: Ch5Ex24.cpp
// Author: Clint Kline
// Created Date: 10-26-2021
// purpose: Write a complete program to test the code in Example 5-23.

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    ifstream inData;
    int counter = 0;

    inData.open("Exp_5_23.txt");

    while (counter < 5)
    {
        int num;
        int sum = 0;
        inData >> num;

        while (num != -999)
        {
            sum += num;
            inData >> num;
        }

        cout << "Line " << counter << ": Sum = " << sum << endl;
        counter++;
    }
};