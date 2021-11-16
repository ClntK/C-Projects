#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{

    char str[81];
    int len;
    int i;

    cout << "Enter a lowercase string : ";

    cin.get(str, 81);
    cout << endl;
    cout << "String in uppercase letters is : " << endl;

    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        cout << static_cast<char>(toupper(str[i]));
    }

    return 0;
}