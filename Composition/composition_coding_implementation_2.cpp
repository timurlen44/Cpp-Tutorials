#include<iostream>
using namespace std;
class A;
class B;

class A{
private:
    int a;
public:
    A(){
        cout<<"A Constructor"<<endl;
    }
    A(int x){
        cout<<"A Constructor int"<<endl;
        a = x;
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
    B():b(20),Aclass(30){
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
