
#include <iostream>
#include <string>

using namespace std;

int main()
{

    struct houseType
    {
        string style;
        int numOfBedrooms;
        int numOfBathrooms;
        int numOfCarsGarage;
        int yearBuilt;
        int finishedSquareFootage;
        double price;
        double tax;
    };

    houseType firstHouse;
    houseType secondHouse;

    firstHouse.style = "Colonial";
    // firstHouse.numOfBedrooms = 3;
    // firstHouse.numOfBathrooms = 2;
    // firstHouse.numOfCarsGarage = 2;
    // firstHouse.yearBuilt = 2005;
    // firstHouse.finishedSquareFootage = 2250;
    firstHouse.price = 290000;
    // firstHouse.tax = 5000.50;

    secondHouse.style = "Colonial";
    // secondHouse.numOfBedrooms = 3;
    // secondHouse.numOfBathrooms = 2;
    // secondHouse.numOfCarsGarage = 2;
    // secondHouse.yearBuilt = 2005;
    // secondHouse.finishedSquareFootage = 2250;
    secondHouse.price = 300000;
    // secondHouse.tax = 5000.50;

    // compare house styles
    if (firstHouse.style == secondHouse.style)
    {
        cout << "These house's share the same style." << endl;
    }
    else
    {
        cout << "The first houses style is " << firstHouse.style << endl;
        cout << "The second houses style is " << secondHouse.style << endl;
    }
    // compare house prices
    firstHouse.price == secondHouse.price;
    if (firstHouse.price == secondHouse.price)
    {
        cout << "These house's have the same value." << endl;
    }
    else
        cout << "The first houses price is " << firstHouse.price << endl;
    cout << "The second houses price is " << secondHouse.price << endl;
};
