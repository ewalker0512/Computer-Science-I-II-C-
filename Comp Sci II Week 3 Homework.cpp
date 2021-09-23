#include <iostream>

using namespace std;
    struct Temperature{ //Question 1
        string month;
        string day;
        int dayOfMonth;
        int dailyHigh;
        int dailyLow;
    };
    int averageHighTemp(Temperature structureArray[]){ //Question 4
        int averageHigh = 0;
        for(int i = 0; i < 7; i++){
            averageHigh += structureArray[i].dailyHigh;
        }
        averageHigh = averageHigh/7;
        cout << "The average high for last week was " << averageHigh << " degrees." << endl;
        return averageHigh;
    }
    int averageLowTemp(Temperature structureArray[]){ //Question 5
        int averageLow = 0;
        for(int i = 0; i < 7; i++){
            averageLow += structureArray[i].dailyLow;
        }
        averageLow = averageLow/7;
        cout << "The average low for last week was " << averageLow << " degrees." << endl;
        return averageLow;
    }
int main()
{
    Temperature dayOne {"September","Thursday",2,90,73}; //Question 2
    Temperature dayTwo {"September","Friday",3,88,73};
    Temperature dayThree {"September","Saturday",4,97,81};
    Temperature dayFour {"September","Sunday",5,81,70};
    Temperature dayFive {"September","Monday",6,88,68};
    Temperature daySix {"September","Tuesday",7,90,73};
    Temperature daySeven {"September","Wednesday",8,90,69};
    cout << dayOne.month << endl; //Test output, runs correctly

    Temperature dailyTemps[7] = {dayOne,dayTwo,dayThree,dayFour,dayFive,daySix,daySeven}; //Question 3

    cout << dailyTemps[4].dailyHigh << endl; //Test output, runs correctly

    double averageHigh = averageHighTemp(dailyTemps);

    double averageLow = averageLowTemp(dailyTemps);
    return 0;
}

/* 1. Define a structure that stores the daily high and low temperature for a date.
   2. Create a week's worth of temperature recordings using the structure.
   3. Create an array to store a week's worth of temperature structures.
   4. Write a function that takes the array of structures and returns the average high temperature for the week.
   5. Write a function that takes the array of structures and returns the low temperature for the week. */
