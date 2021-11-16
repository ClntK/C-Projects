#include <iostream>
#include <string>
#include <iomanip>
#include <istream>

using namespace std;

struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    string ram;
    string hardDriveSize;
    string yearBuilt;
    string price;
};

int main()
{
    computerType computer;

    // cout << fixed << showpoint << setprecision(2);

    cout << "Enter the name of the Manufacturer: ";
    cin >> computer.manufacturer;
    cout << endl;

    cout << "Enter the name of the Model: ";
    cin >> computer.modelType;
    cout << endl;

    cout << "Enter the type of the Processor: ";
    cin >> computer.processorType;
    cout << endl;

    cout << "Enter the amount of the RAM in GB: ";
    cin >> computer.ram;
    cout << endl;

    cout << "Enter the hard-drive capacity: ";
    cin >> computer.hardDriveSize;
    cout << endl;

    cout << "Enter the year the computer was built: ";
    cin >> computer.yearBuilt;
    cout << endl;

    cout << "Enter the computer's price: ";
    cin >> computer.price;
    cout << endl;

    cout << "manufacturer: " << computer.manufacturer << endl;
    cout << "model: " << computer.modelType << endl;
    cout << "processor: " << computer.processorType << endl;
    cout << "RAM: " << computer.ram << endl;
    cout << "harddrive space: " << computer.hardDriveSize << endl;
    cout << "year built: " << computer.yearBuilt << endl;
    cout << "proce: " << computer.price << endl;

    return 0;
}
