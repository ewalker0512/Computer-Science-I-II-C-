#include <iostream>

using namespace std;

int main()
{
    const int SZ = 5; //Question 1
	int numbers[SZ] = {12, 22, 45, 76, 88};
	cout << "The numbers of the array are: ";
	for(int i = 0; i < SZ; i++){
	cout << *(numbers + i) << " ";
    }
    cout << endl;

    int userNum; //Question 2
    int totalNum = 0;
    cout << "Enter a number, or -999 to quit: " << endl;
    cin >> userNum;
    do{
        totalNum = totalNum + userNum;
        cout << "Enter a number, or -999 to quit: " << endl;  // I do not understand why my program is not returning an
        cin >> userNum;                                       // accurate total.
    }
    while(userNum != -999);
    cout << "Your total is " << totalNum + 999 << endl;

  /*  int userGrade; //Question 3
    cout << "Enter your total grade score: ";
    cin >> userGrade;
    switch(userGrade){
        case 90-100: cout << "You received an A!";
        case 80-89: cout << "You received a B!";  //I am not certain how to use a switch statement to solve this
        case 70-79: cout << "Your received a C!"; //specific problem
        case 60-69: cout << "Your received a D!";
        case 50-59: cout << "Your received an F!";
        default:
    } */

    int userGra;
    cout << "Please enter your grade: ";
    cin >> userGra;
    (userGra < 80) ? userGra += 10 : userGra += 5;
    cout << "Your new grade is " << userGra << endl;
    return 0;
}

/*
1. Write a program that uses pointer arithmetic to traverse the contents of an array.
2. Write a do while loop that sums several numbers together, using -999 as a sentinel value
3. Write a program that uses a switch statement to assign a letter grade to a numeric score from 0 to 100.
4. Write a program that uses the conditional operator to curve a grade. If the grade is less than 80, add 10 to the grade, otherwise add 5 to the grade
*/
