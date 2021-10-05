//Problem 1
/*For the next problems, write just the code fragment as it would appear in the definition section of the class.
1. Write a constructor that can set all the member variables and a default constructor.
2. Write getters and setters for each member variable.
3. Overload the << operator to display all the member variables of the class.
4. Write the declaration section for a class called Population that stores the population, the number of births, and
the number of deaths for a period of time. Include declarations for one constructor and all possible getters and setters.
5. Explain why member variables should be private with no access from outside the class definition.
*/
//.5  Member variables must be private because if you were to make them public every function you write would be changing their
// name and or their value and would be incapable of compiling because of their non-static nature.
#include <iostream>

using namespace std;
class Population{ // 4.
private:
    int population;
    int numBirths;
    int numDeaths;
public:
    Population(int p, int nB, int numD){
        population = p;
        numBirths = nB;
        numDeaths = numD;
    }
    int getPopulation(){return population;}
    int getNumBirths(){return numBirths;}
    int getNumDeaths(){return numDeaths;}
    void setPopulation(int p){
        population = p;
    };
    void setNumBirths(int nB){
        numBirths = nB;
    }
    void setNumDeaths(int numD){
        numDeaths = numD;
    }
    friend ostream &operator<<(ostream &, const Population &);
};
    ostream &operator<<(ostream &strm, const Population &p){
        strm << "The population of Arkansas is " << p.population << endl
        << "There are " << p.numBirths << " births per 1,000 woman annually" << endl
        << "In the year 2018 there were " << p.numDeaths << " DUI related fatalities." << endl;
    }
class Car {
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int yM, string m, int s){ // 1.
        yearModel = yM;
        make = m;
        speed = s;
    }
    Car(){
        yearModel = 0;
        make = "";
        speed = 0;
    }
    int getYearModel(){return yearModel;} // 2.
    string getMake(){return make;}
    int getSpeed(){return speed;}
    void setYearModel(int yM){
        yearModel = yM;
    }
    void setMake(string m){
        make = m;
    }
    void setSpeed(int s){
        speed = s;
    }
    friend ostream &operator<<(ostream &, const Car &);
    friend ostream &operator<<(ostream &, const Population &);
};
    ostream &operator<<(ostream &strm, const Car &c){ // 3.
        strm << "Model year: " << c.yearModel << endl
        << "Model: " << c.make << endl
        << "Top Speed: " << c.speed << endl;
        return strm;
    }
int main()
{
    Population Arkansas {3017804, 63, 134};
    Car chevy (2011, "Silverado", 125);
    cout << chevy << endl;
    cout << Arkansas << endl;
    return 0;
}
