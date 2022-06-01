#include<iostream>
using namespace std;
//Bir sýnýfýn elemanlarýnýn baþka bir sýnýfýn türünden olmasýdýr.
class A;
class B;

class A{
private:
    int a;
public:
    A(){
        cout<<"A Constructor"<<endl;
    }
    ~A(){
        cout<<"A Destructor"<<endl;
    }
};

class B{
private:
    int b;
    A Aclass;
public:
    B(){
        cout<<"B Constructor"<<endl;
    }
    ~B(){
        cout<<"B Destructor"<<endl;
    }
};
int main(){
    B b;
    return 0;
}
