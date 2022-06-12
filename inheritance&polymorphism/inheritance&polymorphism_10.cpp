#include<iostream>
using namespace std;
class Employee{
public:
    virtual void work(){
        cout<<"Employee is working! \n";
    }
};

class Driver: public Employee{
public:
    void work(){
        cout<<"Driver is driving! \n";
    }
};

class Programmer: public Employee{
public:
    void work(){
        cout<<"Programmer is Programming! \n";
    }
};

void func(Employee *ptr){
    ptr->work();
    return;
}
int main(){
    Programmer programmer;
    func(&programmer);
    return 0;
}
