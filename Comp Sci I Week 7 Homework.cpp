#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double grade;
    cout << "Please enter your grade numerically (example: 73.6): ";
    cin >> grade;
    cout << endl;

    if(grade >= 89.5 && grade <= 100){
        cout << "You received an A for the course." << endl;
    }
    if(grade >= 79.5 && grade <= 89.4){
        cout << "You received an B for the course." << endl;
    }
    if(grade >= 69.5 && grade <= 79.4){
        cout << "You received an C for the course." << endl;
    }
    if(grade >= 59.5 && grade <= 69.4){
        cout << "You received an D for the course." << endl;
    }
    if(grade >= 100 || grade <= 59.4){
        if(grade >= 100){
            cout << "An A wasn't good enough?" << endl;
        }
        else{
            cout << "Please contact your instructor." << endl;
        }
    }
return 0;
}
