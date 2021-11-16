

// Author: Clint Kline
// Filename: Ch10ProgEx1.cpp
// Date Created: 11-12-2021
// Purpose: homework

#include <iostream>
#include <string>

using namespace std;

class studentType
{
public:
    string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;
};

//variables
studentType student;
studentType newStudent;

string firstName()
{
    cout << "First name: " << endl;
    cout << ">> ";
    cin >> newStudent.firstName;
    return newStudent.firstName;
}

string lastName()
{
    cout << "Last name: " << endl;
    cout << ">> ";
    cin >> newStudent.lastName;
    return newStudent.lastName;
}

int testScore()
{
    cout << "Enter test score : " << endl;
    cout << ">> ";
    cin >> newStudent.testScore;
    return newStudent.testScore;
}

int programmingScore()
{

    cout << "Enter programming score : " << endl;
    cout << ">> ";
    cin >> newStudent.programmingScore;
    return newStudent.programmingScore;
}

char courseGrade(int testScore, int programmingScore)
{
    int score;

    score = (testScore + programmingScore) / 2;

    if (score >= 90)
        newStudent.courseGrade = 'A';
    else if (score >= 80)
        newStudent.courseGrade = 'B';
    else if (score >= 70)
        newStudent.courseGrade = 'C';
    else if (score >= 60)
        newStudent.courseGrade = 'D';
    else
        newStudent.courseGrade = 'F';

    return newStudent.courseGrade;
}

double GPA()
{
    cout << "Enter the students current GPA: " << endl;
    cout << ">> ";
    cin >> newStudent.GPA;
    return newStudent.GPA;
}

void print(studentType student)
{
    cout << "\n\nStudent Name: " << student.firstName << " "
         << student.lastName << "\n"
         << "Current Grade: " << student.courseGrade << "\n"
         << "Test Score: " << student.testScore << "\n"
         << "Programming Score: " << student.programmingScore << "\n"
         << "Student's GPA: " << student.GPA << endl;
}

int main()
{
    firstName();
    lastName();
    testScore();
    programmingScore();
    courseGrade(newStudent.testScore, newStudent.programmingScore);
    GPA();

    print(newStudent);

    // cout << newStudent.firstName << ' ' << newStudent.lastName << endl;
    // cout << newStudent.courseGrade << ' ' << newStudent.testScore << ' ' << newStudent.GPA << endl;
    return 0;
}