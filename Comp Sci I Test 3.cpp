#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

double findAverage(double average, int ar[], int arSize){
    average = 0;
    for(int i = 0; i < arSize; i++){ //Problem 4: function to return average with indexed for loop.
        ar[i] = rand() % 100 + 1;
        average += ar[i];
    }
   /* for(int n : ar){
        cout << "These are the elements of the array: " << n << " "; // This won't initialize and I don't know why. It says 'begin' was not declared in this scope.
    } */
    average = average/arSize;
    cout << "The average of the array is " << average << endl;
}

vector <int> newVector(vector <int> vec, int vecSize){ //Problem 6: Function that initializes the vector with 20 random numbers
    for(int i = 0; i < vecSize; i++){                  //and returns the vector back to the calling program.
        vec.push_back(rand() % 100 + 1);
    }
    cout << "Problem 6's values are: "; //Problem 7: Use an indexed for loop to display the vector's values.
    for(int n : vec){
        cout << n << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Problem 6's values modified: "; //Problems 8 and 9: Returns the problem 6 vector with the vector incremented in a range for loop
    for(int n : vec){
        cout << n+5 << " ";
    }
}

void betterNumber(int num, int outcome){ //Problem 10:
    for(int i = 0; i < 5; i++){
        num += i;                        //If my logic is correct this should take a starting number and add 15 to it but it is void so it doesn't return a value
        outcome = num;                   //the starting number being num and the new version outcome.
    }
    cout << outcome;
}

int main(){

srand(time(0));
const int arrSize = 10;
int arr[arrSize]; //Problem 1: Declare an array of 10 numbers
double arrAverage = 0;
    for(int i = 0; i < arrSize; i++){ //Problem 2: Initialize the array with 10 random numbers.
        arr[i] = rand() % 100 + 1;
    }
    cout << "The first array's values are: ";
    for(int n : arr) { //Problem 3: Use a range for loop to display the contents of the array.
        cout << n << " ";
    }
    cout << endl;

    findAverage(arrAverage, arr, arrSize); //Problem 4: Function in the global space.
    cout << endl;

int vecCount = 20;
vector <int> numbers; //Problem 5: Declare an integer vector.
newVector(numbers,vecCount); //Problem 6: Function in the global space.
cout << endl;

int test = 10;  //Problem 10 use of the void function in the global space
int total = 0;
betterNumber(test,total);
cout << "The number is " << test << endl;
cout << "The new number is " << total << endl;

return 0;
}
