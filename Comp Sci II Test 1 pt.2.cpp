/*
Problem 2:
1. Write a class named Employee that has the following member variables:
    name - a string that holds the employee's name
    idNumber - a string that holds the employee's id number
    department - a string that holds the name of the department where the employee works
    position - a string that holds the employee's job title
2. The class should have the following constructors:
    A constructor that has parameters for all the member variables of the class.
    A constructor that has parameters for the name and id number.The department and position should be assigned the empty string.
    A default constructor.
3. Write getter and setter member functions for all the member variables.
4. Create a program that creates three Employee objects to hold the following data:
    Name: Susan Meyers
    Id number: 47899
    Department: Accounting
    Position: Vice President
5. Overload the output operator so that a statement like cout << emp1; will output data in the format above.
   Overload the input operator so that cin >> emp1 works.
   */
#include <iostream>

using namespace std;

class Employee{             //1.
private:
    string name;
    string idNumber;
    string department;
    string position;
public:
    Employee(){             // 2.
        name = "";
        idNumber = "";
        department = "";
        position = "";
    }
    Employee(string n, string idN, string d, string p){
        name = n;
        idNumber = idN;
        department = d;
        position = p;
    }
    Employee(string n, string idN){
        name = n;
        idNumber = idN;
        department = "";
        position = "";
    }
    string getName(){return name;}          // 3.
    string getidNumber(){return idNumber;}
    string getDepartment(){return department;}
    string getPosition(){return position;}
    void setName(string n){
        name = n;
    }
    void setidNumber(string idN){
        idNumber = idN;
    }
    void setDepartment(string d){
        department = d;
    }
    void getPosition(string p){
        position = p;
    }
    friend ostream &operator<<(ostream &, const Employee &);
    friend istream &operator>>(istream &, Employee &);

};
    istream &operator>>(istream &strm, Employee &e){
        cout << "Enter first name: ";
        strm >> e.name;
        cout << "Enter 5 digit I.D.: ";
        strm >> e.idNumber;
        cout << "Enter department: ";
        strm >> e.department;
        cout << "Enter position: ";
        strm >> e.position;
        cout << endl;
        return strm;
    }
    ostream &operator<<(ostream &strm, const Employee &e){
        strm << "Name: " << e.name << endl
        << "I.D. Number: " << e.idNumber << endl
        << "Department: " << e.department << endl
        << "Position: " << e.position << endl;
        return strm;
    }
int main()
{
    Employee Eric {"Eric Walker", "69725", "Shipping", "Specialist"};   // 4.
    Employee Mike {"Mike McMillan", "75298", "Education", "Sensei"};
    Employee Don {"Don Walker", "32463", "Workforce Training", "Director"};
    Employee empOne;
    cout << Eric << endl;
    cout << Mike << endl;       // 5.
    cout << Don << endl;
    cin >> empOne;
    cout << empOne << endl;
    return 0;
}
