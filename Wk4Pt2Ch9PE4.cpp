//  Filename: Wk4Pt2Ch9PE4.cpp
// Creation Date: 11-4-2021
// Author: Clint Kline
// Purpose:
//  - 4. Write a program to help a local restaurant automate
// its ast billing system. The program should do the following:

// a. Show the customer the different ast items offered by the  restaurant.

// b. Allow the customer to select more than one item from the menu.

// c. Calculate and print the bill.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void menu();
void order();
void finalize();

double total = 0;

int main()
{

    menu();
    return 0;
}

void menu()
{
    cout << "**********************************************************" << endl;
    cout << "*                                                        *" << endl;
    cout << "*            Clint's Breakfast Burrito Bodega!!          *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*                       *** MENU ***                     *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*   code   item                                  price   *" << endl;
    cout << "*   ----   ----                                  -----   *" << endl;
    cout << "*                      -- BURRITOs --                    *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*    b1 - Clint's Brek Bomb -------------------- $5.00   *" << endl;
    cout << "*    b2 - Tex-Mex Breks ------------------------ $5.00   *" << endl;
    cout << "*    b3 - Hash Wrap ---------------------------- $5.00   *" << endl;
    cout << "*    b4 - Heart Attack in a Wrap --------------- $5.00   *" << endl;
    cout << "*    b5 - The FlapStack ------------------------ $5.00   *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*                      -- OMELETs --                     *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*    o1 - The good, The bad, and the eggy ------ $4.00   *" << endl;
    cout << "*    o2 - New England Omelet ------------------- $4.00   *" << endl;
    cout << "*    o3 - Lobster Omelet ----------------------- $4.00   *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*                       -- SIDEs --                      *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*    s1 - Toast and Jam ------------------------ $1.50   *" << endl;
    cout << "*    s2 - Hashbrowns --------------------------- $2.00   *" << endl;
    cout << "*    s3 - The Muffin, man. --------------------- $4.00   *" << endl;
    cout << "*    s4 - Regular Muffin ----------------------- $2.00   *" << endl;
    cout << "*    s5 - Fruit -------------------------------- $0.50   *" << endl;
    cout << "*    s6 - Bag Cereal d'jour -------------------- $1.50   *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*                      -- DRINK's --                     *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*    d1 - Cowboy Coffee ------------------------ $1.00   *" << endl;
    cout << "*    d2 - Bloody Gary -------------------------- $5.00   *" << endl;
    cout << "*    d3 - Orange Joose ------------------------- $1.50   *" << endl;
    cout << "*    d4 - NutMilk ------------------------------ $2.00   *" << endl;
    cout << "*                                                        *" << endl;
    cout << "*                                                        *" << endl;
    cout << "**********************************************************" << endl;

    order();
}

void order()
{

    string item;

    cout << fixed << showpoint << setprecision(2);

    cout << "\nPlease enter the code for the item youd like to order >> ";
    cin >> item;
    cout << "Code Entered : " << item << endl;

    if (item == "s5")
        total += 0.50;

    else if (item == "d1")
        total += 1.00;

    else if (item == "s1" || item == "s6" || item == "d3")
        total += 1.50;

    else if (item == "s2" || item == "s4" || item == "d4")
        total += 2.00;

    else if (item == "o1" || item == "o2" || item == "o3" || item == "s3")
        total += 4.00;

    else if (item == "b1" || item == "b2" || item == "b3" || item == "b4" || item == "b5" || item == "d2")
        total += 5.00;

    else
        cout << "Please check the code and enter it again. " << endl;

    cout << "Subtotal : $" << total << endl;
    finalize();
}

void finalize()
{

    string yesOrNo;

    cout << "Can we get you anything else? (y/n)" << endl;
    cout << ">> ";

    cin >> yesOrNo;

    if (yesOrNo == "y" || yesOrNo == "n")
    {
        if (yesOrNo == "y")
        {
            order();
        }
        else if (yesOrNo == "n")
        {
            cout << "Your Total is : $" << total << endl;
        }
    }
    else
    {
        cout << "Please enter 'y' for yes or 'n' for no.. ";
        finalize();
    }
}
