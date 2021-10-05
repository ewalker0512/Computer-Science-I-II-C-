#include <iostream>
#include <vector>

using namespace std;

class Student{
private:
    int numGrades;
    int grade;
public:
    Student(){
    numGrades = 0;
    grade = 0;
    }
    Student(int nG, int g){
        numGrades = nG;
        grade = g;
    }
    Student(int g){
        grade = g;
    }
    getGrade(){return grade;}
    getNumGrades(){return numGrades;}
    void setGrade(int g){grade = g;}
    void setNumGrades(int nG){numGrades = nG;}

    /*int[] createArray(int numGrades){
        int gradeArr[numGrades];
        return gradeArr;
    }
    int highestNumber(int n)
    void storeNumber(int g){
        push_back(g);
    }*/

};

int main()
{
    int grades[0];
    Student s1 (3,95);
    cout << "Student 1's grade was " << s1.getGrade()<< endl;
    cout << "Student 1 has " << s1.getNumGrades() << " grades for the semester." << endl;


    return 0;
}
