/*
Filename:Ch3ProgEx1-4.cpp
Creation Date: 10-14-2021
Author: Clint Kline
Purpose:
    - homework.
*/

//  header files

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// variables

string fname;
string lname;
string dept;
double mnthlyGrsSal;
double bonus;
double taxes;
double paycheck;
double distTraveled;
double travelTime;
double avgSpeed;
double cupsSold;
double cost;
double salesAmt;

ifstream inFile;
ofstream outFile;

int main()
{
    outFile << fixed << showpoint;
    outFile << setprecision(2);
    //  open files
    inFile.open("inData.txt");   // opens input file
    outFile.open("outData.txt"); // opens output file

    // code

    // Name : Giselle Robinson
    // Department : Accounting
    // Monthly Gross Salary : $5600 .00 Monthly Bonus : 5.00 %
    // Taxes : 30.00 %
    // Paycheck : $4116 .00
    // Distance Traveled : 450.00 miles
    // Traveling Time : 9.00 hours
    // Average Speed : 50.00 miles per hour
    // Number of Coffee Cups Sold : 75 Cost : $1 .50 per cup
    // Sales Amount = $112 .50

    inFile >> fname >> lname >> dept;
    outFile << "Name : " << fname << " " << lname << ", Department : " << dept << endl;

    inFile >> mnthlyGrsSal >> bonus >> taxes;
    outFile << "Monthly Gross Salary : $" << mnthlyGrsSal << ", Monthly Bonus : " << bonus << "%, Taxes : " << taxes << "% ";

    paycheck = mnthlyGrsSal + ((mnthlyGrsSal + (bonus / 100)) * (taxes / 100));
    outFile << "Paycheck : $" << paycheck << endl;

    inFile >> distTraveled >> travelTime;
    outFile << "Distance Traveled : " << distTraveled << " miles, Traveling Time : " << travelTime << " hours";

    avgSpeed = distTraveled / travelTime;
    outFile << ", Average Speed : " << avgSpeed << " mph" << endl;

    inFile >> cupsSold >> cost;
    outFile << "Number of Coffee Cups Sold : " << cupsSold << " cups, Cost : $" << cost;

    salesAmt = cupsSold * cost;
    outFile << ", Sales Amount : $" << salesAmt << endl;

    // close files
    inFile.close();
    outFile.close();
    cout << "File Created!";
    return 0;
}
