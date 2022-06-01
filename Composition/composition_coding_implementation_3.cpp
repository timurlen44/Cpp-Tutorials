#include <iostream>
#include <string>
using namespace std;


class Person{
private:
    int age;
    string name;
public:
    Person():age(20),name("Emin"){

    }
    Person(const char* p, int age):age(age),name(p){

    }
    ~Person(){

    }
    void display()const{
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    Person p1;
    p1.display();

    Person p2("Muhammed",23);
    p2.display();
    return 0;
}
