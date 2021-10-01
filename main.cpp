#include <iostream>
#include <string>

using namespace std;

class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time(){ //Default constructor
        hour = 00;
        minute = 00;
        second = 00;
        cout << "Default time reads " << hour << ":"
             << minute << ":" << second << endl;
    }
    Time(int h, int m, int s){ //Constructor using hours, minutes, and seconds
        hour = h;
        minute = m;
        second = s;
        cout << "This constructor uses hours, minutes, and seconds." << endl;
        cout << "The time is " << hour << ":" << minute << ":" << second << endl;
        cout << endl;
    }
    Time(int h, int m){ //Constructor using hours and minutes
        hour = h;
        minute = m;
        second = 0;
        cout << "This constructor only uses hours and minutes." << endl;
        cout << endl;
        cout << "The time is " << hour << ":" << minute << endl;
        cout << "The seconds default is " << second << endl;
        cout << hour << ":" << minute << ":" << second << endl;
    }
    int getHour(){return hour;} //Getters and setters for all member variables
    int getMinute(){return minute;}
    int getSecond(){return second;}
    void setHour(int h){
        hour = h;
    }
    void setMinute(int m){
        minute = m;
    }
    void setSecond(int s){
        second = s;
    }
   /* string toString(){ //Still trying to work out the standard hh:mm:ss
        (hour )
        return "0" + to_string(hour) + ":" + to_string(minute) + ":" to_string(second) +
    } */


};
int main()
{
    Time firstTime;
    Time secondTime(8,30,15);
    Time thirdTime (7,45);
    cout << endl;
    cout << "The hour of the first constructor is " << secondTime.getHour() << endl;
    cout << endl;
    cout << "The minutes of the second constructor are " << thirdTime.getMinute() << endl;
    return 0;
}

/* Create a Time class. Follow these instructions:

1. Declare three member variables: hour, minute, second.
2. Create 3 constructors: a default constructor, Time(hour, minute, second), and Time(hour, minute).
3. Create getters and setters for all member variables.
4. Add a to_string member function that displays the time in hh:mm:ss format.

Write a program to test all aspects of your class definition. */
