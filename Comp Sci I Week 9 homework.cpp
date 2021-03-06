#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int rowsOften(int arr[], const int arrSize){ //Problem 2 function
    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 10; i < 20; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 20; i < 30; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
     for(int i = 30; i < 40; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 40; i < 50; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 50; i < 60; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 60; i < 70; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 70; i < 80; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 80; i < 90; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 90; i < arrSize; i++){
        arr[i] = rand() % 18 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
}

static const char stringArray[] = //Problem 3 string generator
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(stringArray) - 1;

char genRandom(){
    return stringArray[rand() % stringLength];
}

int weightMedian(int arr[], const int arrSize){ //Problem 4 function
    double totalWeight = 0;
    for(int i = 0; i < arrSize; i++){
        arr[i] = rand() % 300 + 1;
        totalWeight += arr[i];
    }
    cout << "Total weight of students: " << totalWeight << endl;
    cout << "The median weight of students: " << totalWeight/arrSize << endl;
}

int main(){

srand(time(0));

// Problem 1
const int arraySize = 20;
int numArray[arraySize] = {rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1,
                           rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1,
                           rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1,
                           rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1};

    for(int position : numArray){
        cout << position << " ";
    }
    cout << endl;
    cout << endl;

//Problem 2
const int arrSize = 100; //The function is in the global space.
int thisArray[arrSize];
rowsOften(thisArray, arrSize);// Displays the array in rows of ten

//Problem 3

    std::string Str;
    for(int i = 0; i < arraySize; ++i){ // Randomly generates 20 random strings from the global space.
        Str += genRandom();
    }
    cout << Str << endl;
    cout << endl;

//Problem 4
const int students = 100;
int age [students];
cout << "These are the ages of the students in attendance" << endl;
rowsOften(age,students);

const int weightSize = 100;
int weightArray[weightSize];
weightMedian(weightArray, weightSize);

//Problem 5
const int rows = 5;
const int columns = 5;
double gradeAvgs[rows][columns] = {{75.3, 83.9, 96.1, 85.4, 97.3},
                                  {64.7, 72.5, 81.7, 62.9, 73.8},
                                  {78.2, 53.8, 91.4, 85.6, 76.7},
                                  {82.1, 94.3, 76.5, 63.4, 93.2},
                                  {53.1, 61.5, 66.7, 88.3, 90.4}};
double arrayMin(gradeAvgs, rows, columns);

return 0;
}
