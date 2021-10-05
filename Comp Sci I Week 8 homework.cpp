#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
// Question 1

int userNumber;
int userPower;
cout << "Please enter a whole integer: ";
cin >> userNumber;
cout << "Please enter the power: ";
cin >> userPower;

for(int i = 1; i<= 1; i++){ //This line iterates the output 1 time.
    int answer = pow(userNumber, userPower); //This function takes the number and power entry and executes it correctly
    cout << answer << endl;
}
cout << endl;

//Question 2
/*
srand(time(0));
int userInput;
cout << "Pick a number 1 through 10 : ";
cin >> userInput;
int answer = rand() % 10+1;

    while(userInput != answer){// This while loop is a forever loop, I don't know where to put the sentinel value
        if(userInput > answer){
            cout << "Answer is too high, try again." << endl;
        }
        if(userInput < answer){
            cout << "Answer is too low, try again." << endl;
        }
        if(userInput == answer){
        cout << "Correct!" << endl;
        }
    } */
cout << endl;

// Question 3
int lineCount;
string value = "*";
cout << "Select a number: ";
cin >> lineCount;
    for(int i = 1; i <= 5; i++){ // This iterates 5 lines for the nested for loop.
        //for(i = 1; i <= lineCount; i++){ // I don't know a way to multiply strings by integers.
       // }
        cout << value << endl;
    }
cout << endl;


//Question 4
srand(time(0));
int numOne = rand() % 10+1; //Two randomly generated numbers and their answer.
int numTwo = rand() % 10+1;
int numThree = rand() % 10+1;
int numFour = rand() % 10+1;
int numFive = rand() % 10+1;
int numSix = rand() % 10+1;
int sumOne = numOne + numTwo;
int sumTwo = numThree + numFour;
int sumThree = numFive + numSix;
int answerOne;
int answerTwo;
int answerThree;

cout << numOne << " + " << numTwo << " = ?" << endl;
cin >> answerOne;
cout << numThree << " + " << numFour << " = ?" << endl;
cin >> answerTwo;
cout << numFive<< " + " << numSix << " = ?" << endl;
cin >> answerThree;
    while(answerOne != sumOne){
        cout << "That is incorrect, please try again." << endl;
    }
cout << endl;

//Question 5
for(int celsius = -10; celsius <= 10; celsius++){

   int farenheit = celsius * 9/5 + 32;
   cout << celsius << " degrees celsius is " << farenheit << " in farenheit." << endl;
}
return 0;
}
