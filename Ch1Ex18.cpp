/*
Filename:Ch1Ex18.cpp
Creation Date: 10-13-2021
Author: Clint Kline
Purpose:
    - week 1, chapter 1, exercise 18.
*/

#include <iostream>
#include <string.h>

using namespace std;

double mow;
double plot;
double mowingTotal;
double frtlyz;
double apps;
double plantings;
double trees;

double mowing(double mow)
{
    // 1 mowing = 5000 sq/yds
    if (mow > 0)
    {
        // divide variable by 5000
        plot = mow / 5000;
        // multiply that value by $35.00
        mowingTotal = plot * 35;
        cout << "\nMowing Subtotal: $" << mowingTotal << "\n\n";
    }
    return mowingTotal;
}

double fertilizing(double apps)
{
    // measured in applicaitons
    if (apps > 0)
    {
        // multiply the number of applications by $30.00
        frtlyz = apps * 30;
        cout << "\nFertilizing Subtotal: $" << frtlyz << "\n\n";
    }
    return frtlyz;
}

double treePlanting(double trees)
{
    // measured per tree
    if (trees > 0)
    {
        // multiply the number of trees by $50.00
        plantings = trees * 50;
        cout << "\nTree Planting Subtotal: $" << plantings << "\n\n";
    }
    return plantings;
}

double orderTotal()
{
    // MOWING
    cout << "\n\nThanks for relying on Tom and Jerry Lawn Service.\n";
    cout << "What can we do for you?\n";
    cout << "\n\n*MOWING*\n";
    cout << "    - Mowing is priced @ $35 per 5000 yds.\n\n";
    cout << "Enter the number of yards being mowed: ";
    cin >> mow;
    mowing(mow);

    // FERTILIZATION
    cout << "\n\n*FERTILIZER*\n";
    cout << "    - One application is equal to 2 acres of fertilizer.\n\n";
    cout << "How many applications do you require? ";
    cin >> apps;
    fertilizing(apps);

    // TREE PLANTING
    cout << "\n\n*TREE PLANTING*\n";
    cout << "    - We only have one kind. \n\n";
    cout << "How many trees would you like planted? ";
    cin >> trees;
    treePlanting(trees);

    // CALCULATE TOTAL
    double total = mowingTotal + frtlyz + plantings;
    cout << "\n**TOTAL**\n\n";
    cout << "Your order total is: $" << total << "\n\n";

    return 0;
}

int main()
{
    orderTotal();
    return 0;
}