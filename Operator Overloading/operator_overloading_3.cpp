#include<iostream>
using namespace std;
class myClass{
private:

public:
    void operator()(){
        cout<<"operator() is calling"<<endl;
    }
    void operator()(int a, int b){
        cout<<"operator(int a, int b) is calling"<<endl;
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
};


int main(){
    myClass m;
    m();
    m.operator()();

    m(5,5);
    m.operator()(25,25);

    return 0;
}
