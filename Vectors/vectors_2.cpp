#include<iostream>
#include<vector>
using namespace std;

class Students
{
    string name;
    int id;
public:
    static int StudentCounter;
    void HowManyStudents()
    {
        cout<<"StudentCounter: "<<StudentCounter<<endl;
    }
    void ShowStudentID()
    {
        StudentCounter++;
        cout<<name<<"'s ID: "<<id<<endl;
    }
    Students(string n, int i):name(n),id(i)
    {
        cout<<"Name: "<<name<<", ID: "<<id<<endl;
    }
};
int Students::StudentCounter = 0;
int main(){
    vector<Students> StudentsList;
    StudentsList.push_back(Students("Mehmet",1));
    StudentsList.push_back({"Emin",2});//converting consuctor
    StudentsList.push_back({"Tanik",3});//converting consuctor
    cout<<endl<<endl;
    StudentsList[0].ShowStudentID();
    StudentsList.at(1).ShowStudentID();
    (StudentsList.at(2)).ShowStudentID();
    cout<<endl<<endl;
    StudentsList[0].HowManyStudents();
    return 0;
}

