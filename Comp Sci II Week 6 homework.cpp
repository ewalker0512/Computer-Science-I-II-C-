#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

class Die{ //Class die with an int member variable for face.
private:
    int face; //Member variable with name face.
public:
    Die(int f);
    friend void print(const Die &f);
    friend ostream &operator<<(ostream &, const Die &);
    friend istream &operator>>(istream&, Die &);
};
    Die::Die(int f){
        face = f;
    }
    ostream &operator<<(ostream &strm, const Die &d) { //Overload of the << operator.
    strm << "This die face value is " << d.face;
    return strm;
    }
    istream &operator>>(istream &strm, Die &f){ //Overload of the >> operator.
    cout << "What was the value of this die : ";
    strm >> f.face;
    return strm;
    }
    void print(const Die &d){//Friend function that prints the value of a Die object.
        cout << d.face << endl;
    }
int main(){
srand(time(0));
Die dieOne(rand() % 6 + 1); //The member variable face with the value between 1 and 6.
Die dieTwo(rand() % 6 + 1);
Die dieThree(rand() % 6 + 1);
print(dieOne); //Test of the print friend function
print(dieTwo);
cout << dieOne << endl; //Test of the overloaded << operator.
cout << dieTwo << endl;
cout << dieThree << endl;
cin >> dieThree;
cout << "The third die face now reads : " << dieThree<< endl;
return 0;
}

/*
Create a Die class that represents one dice.
The only member variable is face which can have a value between 1 and 6.
Create a constructor where the parameter is assigned to face.
Create a friend function that prints the value of a Die object.
Overload the <<, >>, and = operators for the Die class and demonstrate all these functions in a program.
*/
