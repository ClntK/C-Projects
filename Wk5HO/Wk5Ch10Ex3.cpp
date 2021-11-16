#include <iostream>
using namespace std;

int main()
{
    class syntaxErrors2 // Line 1
    {                   // Line 2

    public:                 // Line 3
        bool canGraduate(); // Line 4
        void print() const; // Line 5

        // void syntaxErrors2(int = 0, double = 0); // correction: old Line 6
        syntaxErrors2() { ID = 0, gpa = 0; }; // new Line 6

    private:        // Line 7 << correction: replaced semicolon with a colon
        int ID;     // Line 8
        double gpa; // Line 9
                    // Line 10
    };

    return 0;
};