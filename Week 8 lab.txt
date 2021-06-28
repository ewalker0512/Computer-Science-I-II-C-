#include <iostream>
#include <cmath>

using namespace std;

int main()
{
//Lab 1
//Enter and run the following program:
int num1;
int num2;
cout << "Please enter an integer: ";
cin >> num1;
cout << "Please enter an integer: ";
cin >> num2;
cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

if (num1 == num2) { //Exercise 1: The = needs to be == to compare num1 and num2 values (code modified accordingly)
  cout << "The values are the same." << endl;
  cout << "Hey, that's a coincidence!" << endl;
}
else{
  cout << "The values are not the same." << endl;
}
// Exercise 2: (modified code accordingly)
// Exercise 3: (modified code accordingly)
// Exercise 4: (modified code accordingly)
cout << endl;

//Lab 2
//Enter the following program:
double average;
cout << "Input your average: ";
cin >> average;
if (average > 100){
    cout << "Invalid data" << endl;
}
if (average >= 90 && average <= 100){
    cout << "You got a A" << endl;
}
if (average >= 80 && average <= 89){
    cout << "You got a B" << endl;
}
if (average >= 60 && average <= 79) {
  cout << "You pass" << endl;
}
if (average >= 0 && average <= 59){
  cout << "You fail" << endl;
}
//Exercise 1: An input of 60 for the average fails you. (code modified accordingly)
// Exercise 2: (code modified accordingly)
// Exercise 3: If I enter -12 it just ends the program. (code modified accordingly)
cout << endl;

//Lab 3
double gpa;
int year;
cout << "Enter your GPA: ";
cin >> gpa;
cout << "Enter your year of school (1-freshman, 2-sophomore, 3-junior, 4-senior) : ";
cin >> year;

if(gpa >= 2.0 && year == 4){
    cout << "You are about to graduate soon." << endl;
}
else {
    cout << "You need more schooling." << endl;
}
cout << endl;

//Lab 4
double price = 10.00;
int shirts;
cout << "How many shirts are you buying? ";
cin >> shirts;
double total = price * shirts;

if (shirts >= 1 && shirts <= 4){
    cout << "Your total is " << total << " dollars." <<  endl;
}
if (shirts >= 5 && shirts <= 10){
    cout << "Your total is " << total * .9 << " dollars." <<  endl;
}
if (shirts >= 11 && shirts <= 20){
    cout << "Your total is " << total * .85 << " dollars." << endl;
}
if (shirts >= 21 && shirts <= 30){
    cout << "Your total is " << total * .8 << " dollars." << endl;
}
if (shirts >= 31){
    cout << "Your total is " << total * .75 << " dollars." << endl;
}
//If an entry for a negative number is made the program ends with no output.
return 0;
}
