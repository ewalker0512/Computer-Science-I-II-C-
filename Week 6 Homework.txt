#include <iostream>

using namespace std;

int main(){

//Question 1
string runnerOne;
string runnerTwo;
string runnerThree;
double oneTime;
double twoTime;
double threeTime;
cout << "Welcome to the 100-yard dash World Championship!" << endl;
cout << endl;
cout << "Please enter the first runner's name: ";
cin >> runnerOne;
cout << "And their finishing time to the nearest tenth of a second (Example: 24.7): ";
cin >> oneTime;
cout << endl;
cout << "Please enter the second runner's name: ";
cin >> runnerTwo;
cout << "And their finishing time to the nearest tenth of a second (Example: 13.8): ";
cin >> twoTime;
cout << endl;
cout << "Please enter the three runner's name: ";
cin >> runnerThree;
cout << "And their finishing time to the nearest tenth of a second (Example: 45.2): ";
cin >> threeTime;
cout << endl;

    if (oneTime == twoTime || twoTime == threeTime){
        cout << "There was a tie, please reenter your runner's times." << endl;
    }
    if (oneTime < twoTime && twoTime < threeTime ){
        cout << runnerOne << " came in first with a time of: " << oneTime << " seconds." <<  endl;
        cout << runnerTwo << " came in second with a time of: " << twoTime << " seconds." << endl;
        cout << runnerThree << " came in third with a time of: " << threeTime << " seconds." << endl;
    }
    if (oneTime < twoTime && twoTime > threeTime ){
        cout << runnerOne << " came in first with a time of: " << oneTime << " seconds." << endl;
        cout << runnerThree << " came in second with a time of: " << threeTime << " seconds." << endl;
        cout << runnerTwo << " came in third with a time of: " << twoTime << " seconds." << endl;
    }
    if (twoTime < threeTime && threeTime < oneTime){
        cout << runnerTwo << " came in first with a time of: " << twoTime << " seconds." << endl;
        cout << runnerThree << " came in second with a time of: " << threeTime << " seconds." << endl;
        cout << runnerOne << " came in third with a time of: " << oneTime << " seconds." << endl;
    }
    if (twoTime < threeTime && threeTime > oneTime){
        cout << runnerTwo << " came in first with a time of: " << twoTime << " seconds." << endl;
        cout << runnerOne << " came in second with a time of: " << oneTime << " seconds." << endl;
        cout << runnerThree << " came in third with a time of: " << threeTime << " seconds." << endl;
    }
    if (threeTime < twoTime && oneTime < twoTime){
        cout << runnerThree << " came in first with a time of: " << threeTime << " seconds." << endl;
        cout << runnerOne << " came in second with a time of: " << oneTime << " seconds." << endl;
        cout << runnerTwo << " came in third with a time of: " << twoTime << " seconds." << endl;
    }
    if (threeTime < twoTime && oneTime > twoTime){
        cout << runnerThree << " came in first with a time of: " << threeTime << " seconds." << endl;
        cout << runnerTwo << " came in second with a time of: " << twoTime << " seconds." << endl;
        cout << runnerOne << " came in third with a time of: " << oneTime << " seconds." << endl;
    }

//Question 2
int total = 45;
int answer;
cout << "23 + 12 = ? : ";
cin >> answer;

    if (answer == total){
        cout << "Thats correct!" << endl;
    }
    else {
        cout << "Sorry, that is incorrect." << endl;
    }
cout << endl;

//Question 3
int dayOne;
int dayTwo;
int dayThree;

cout << "Please enter the high temperature for day 1: ";
cin >> dayOne;
cout << endl;
cout << "Please enter the high temperature for day 2: ";
cin >> dayTwo;
cout << endl;
cout << "Please enter the high temperature for day 3: ";
cin >> dayThree;
cout << endl;

    if (dayOne > dayTwo && dayTwo > dayThree){
        cout << dayOne << " is the highest." << endl;
        cout << dayTwo << " is the second highest." << endl;
        cout << dayThree << " is the lowest." << endl;
    }
    if (dayOne > dayThree && dayThree > dayTwo){
        cout << dayOne << " is the highest." << endl;
        cout << dayThree << " is the second highest." << endl;
        cout << dayTwo << " is the lowest." << endl;
    }
    if(dayTwo > dayOne && dayOne > dayThree){
        cout << dayTwo << " is the highest." << endl;
        cout << dayOne << " is the second highest." << endl;
        cout << dayThree << " is the lowest." << endl;
    }
    if (dayTwo > dayThree && dayThree > dayOne){
        cout << dayTwo << " is the highest." << endl;
        cout << dayThree << " is the second highest." << endl;
        cout << dayOne << " is the lowest." << endl;
    }
    if (dayThree > dayOne && dayOne > dayTwo){
        cout << dayThree<< " is the highest." << endl;
        cout << dayOne << " is the second highest." << endl;
        cout << dayTwo << " is the lowest." << endl;
    }
    if (dayThree > dayTwo && dayTwo > dayOne){
        cout << dayThree << " is the highest." << endl;
        cout << dayOne << " is the second highest." << endl;
        cout << dayThree << " is the lowest." << endl;
    }

return 0;
}
