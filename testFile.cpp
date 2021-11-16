#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{

    counter = 0;
    while (counter < 5)
    {
        sum = 0;
        infile >> num;

        while (num != -999)
        {
            sum += num;
            infile >> num;
        }

        cout << "Line " << counter << ": Sum = " << sum << endl;
        counter++;
    }
};

main();