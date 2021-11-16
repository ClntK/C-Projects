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