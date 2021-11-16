
// Author: Clint Klename: Wk5Pt2.cpp
// Date Created: 11-12-2021
// Purpose: homework

#include <iostream>

using namespace std;

class clockType
{
    // public:
    //     void setTime(int, int, int);
    //     void getTime(int &, int &, int &) const;
    //     void printTime() const;
    //     void incrementSeconds();
    //     void incrementMinutes();
    //     void incrementHours();
    //     bool equalTime(const clockType &) const;

public:
    int hr;
    int min;
    int sec;

    void setTime(int hours, int minutes, int seconds)
    {
        if (0 <= hours && hours < 24)
            hr = hours;
        else
            hr = 0;

        if (0 <= minutes && minutes < 60)
            min = minutes;
        else
            min = 0;

        if (0 <= seconds && seconds < 60)
            sec = seconds;
        else
            sec = 0;
    }

    void getTime(int &hours, int &minutes, int &seconds) const
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }

    void printTime() const
    {
        if (hr < 10)
            cout << "0";
        cout << hr << ":";

        if (min < 10)
            cout << "0";
        cout << min << ":";

        if (sec < 10)
            cout << "0";
        cout << sec;
    }

    void incrementHours()
    {
        hr++;
        if (hr > 23)
        {
            hr = 0;
        }
    }

    void incrementMinutes()
    {
        min++;
        if (min > 59)
        {
            min = 0;
            incrementHours();
        }
    }

    void incrementSeconds()
    {
        sec++;
        if (sec > 59)
        {
            sec = 0;
            incrementMinutes();
        }
    }

    bool equalTime(const clockType &otherClock)
    {
        return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
    }
};

class extClockType : public clockType
{
public:
    string timeZone;

    string findTimeZone()
    {
        cout << "Enter the time zone:  " << endl;
        cout << ">> ";
        cin >> timeZone;
        return timeZone;
    }
};

int main()
{
    clockType myClock;
    clockType yourClock;
    extClockType extendedClock;

    int hours;
    int minutes;
    int seconds;
    string timeZone;

    myClock.setTime(5, 4, 30);

    cout << "\nmyClock: ";
    myClock.printTime();
    cout << endl;

    cout << "before setting yourClock: ";
    yourClock.printTime();
    cout << endl;

    yourClock.setTime(5, 45, 16);

    cout << "After setting yourClock: ";
    yourClock.printTime();
    cout << endl;

    if (myClock.equalTime(yourClock))
        cout << "Both times are equal."
             << endl;

    else
        cout << "Both times are not equal."
             << endl;

    cout << "Enter the hours, minutes, and seconds: " << endl;
    cout << "hours: ";
    cin >> hours;
    cout << "minutes: ";
    cin >> minutes;
    cout << "seconds: ";
    cin >> seconds;
    cout << endl;

    extendedClock.findTimeZone();

    myClock.setTime(hours, minutes, seconds);

    cout << "\nNew myClock: ";
    myClock.printTime();
    cout << " " << extendedClock.timeZone << endl;

    myClock.incrementSeconds();

    cout << "After incrementing myClock by one second, myClock: ";
    myClock.printTime();
    cout << " " << extendedClock.timeZone << endl;

    myClock.getTime(hours, minutes, seconds);

    cout << "hours = " << hours
         << ", minutes = " << minutes
         << ", seconds = " << seconds
         << timeZone << endl;

    return 0;
}
