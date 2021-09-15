#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
srand(time(0));
//Problem 1
int dice1 = rand() % 6 + 1;
int dice2 = rand() % 6 + 1;
int dice3 = rand() % 6 + 1;
int dice4 = rand() % 6 + 1;
int dice5 = rand() % 6 + 1;
int diceSum = dice1 + dice2 + dice3 + dice4 + dice5;

cout << "First die reads: " << dice1 << endl;
cout << "Second die reads: " << dice2 << endl;
cout << "Third die reads: " << dice3 << endl;
cout << "Fourth die reads: " << dice4 << endl;
cout << "Fifth die reads: " << dice5 << endl;
cout << "The sum of the dice is: " << diceSum << endl;
cout << endl;

//Problem 2
int d1 = rand() % 6 + 1;
int d2 = rand() % 6 + 1;
int d3 = rand() % 6 + 1;
int dSum = d1 + d2 + d3;
int dDiff = d1 - d2 - d3;
int dProd = d1 * d2 * d3;
cout << "First die reads: " << d1 << endl;
cout << "Second die reads: " << d2 << endl;
cout << "Third die reads: " << d3 << endl;
cout << "The sum of the dice is: " << dSum << endl;
cout << "The difference of the dice is :" << dDiff << endl;
cout << "The product of the dice is : " << dProd << endl;
cout << endl;

//Problem 3
int die1 = rand() % 6 + 1;
int die2 = rand() % 6 + 1;
int dieSum = die1 + die2;

cout << "Die 1 has a value of " << die1 << endl;
cout << "Die 2 has a value of " << die2 << endl;
cout << "The sum of the dice rolls is " << dieSum << endl;
cout << endl;

//Problem 4
double roll1 = rand() % 6 + 1;
double roll2 = rand() % 6 + 1;
double roll3 = rand() % 6 + 1;
double roll4 = rand() % 6 + 1;
double roll5 = rand() % 6 + 1;
double rAverage = (roll1 + roll2 + roll3 + roll4 + roll5)/ 5;

cout << "First die reads: " << roll1<< endl;
cout << "Second die reads: " << roll2 << endl;
cout << "Third die reads: " << roll3 << endl;
cout << "Fourth die reads: " << roll4 << endl;
cout << "Fifth die reads: " << roll5 << endl;
cout << "The average of the dice rolls is: " << rAverage << endl;
cout << endl;

return 0;
}
