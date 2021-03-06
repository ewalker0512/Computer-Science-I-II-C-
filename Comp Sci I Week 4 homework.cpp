#include <iostream>
#include <cmath>

using namespace std;

int main()
{

//Ex 1
int number;
cout << "Please enter your number to determine if it is even or odd: ";
cin >> number;

    if (number%2 == 0){
        cout << "Your number is even." << endl;
    }
    if (number%2 == 1){
        cout << "Your number is odd." << endl;
    }
cout << endl;

//Ex 2
int first;
int second;
int third;
int fourth;

cout << "Please enter the first number in your ID sequence: ";
cin >> first;
cout << "Please enter the second number in your ID sequence: ";
cin >> second;
cout << "Please enter the third number in your ID sequence: ";
cin >> third;
cout << "Please enter the fourth number in your ID sequence: ";
cin >> fourth;

    if(first + second + third == fourth){
        cout << "ID parameters accepted, access granted." << endl;
    }
    else{
        cout << "ID parameters failed, access denied." << endl;
    }
cout << endl;

//Ex 3
int firstN;
int secondN;
cout << "Please enter your first number: ";
cin >> firstN;
cout << "Please enter your second number: ";
cin >> secondN;

    if (firstN > secondN){
        cout << firstN << " is the maximum and " << secondN
        << " is the minimum." << endl;
    }
    else{
        cout << secondN << " is the maximum and " << firstN
        << " is the minimum." << endl;
    }
cout << endl;

//Ex 4
int quantity;
double discount;
int price = 49;
int oTotal;
int dTotal;
cout << "Please enter the amount of tickets you are purchasing today: ";
cin >> quantity;
oTotal = quantity * 49;

    if(quantity <=9){
        cout <<"Your total is: " << oTotal << endl;
    }
    if(quantity >= 10 && quantity <= 19){
        discount = .2;
        cout << "You qualify for a 20% discount today!" << endl;
    }
    if(quantity >= 20 && quantity <= 49){
        discount = .3;
        cout << "You qualify for a 30% discount today!" << endl;
    }
    if(quantity >= 50 && quantity <= 99){
        discount = .4;
        cout << "You qualify for a 40% discount today!" << endl;
    }
    if(quantity >= 100){
        discount = .5;
        cout << "You qualify for a 50% discount today!" << endl;
    }
    dTotal = oTotal * discount;

cout <<"Your total is: " << "$" << oTotal - dTotal << ".00" << endl;
cout << endl;

//Ex 5
int age;
int work;
bool qualify;
cout << "Please enter your age: ";
cin >> age;
cout << "Please enter how long you have been employed in whole month increments: ";
cin >> work;

    if(age >= 21 && work >=3){
        qualify = true;

        if(qualify == true){
            cout << "You have been approved! Please look for further information in your e-mail." << endl;
        }
    }
    else {
        cout << "We regret to inform you that the criteria for this loan was not met.";
    }

return 0;
}
