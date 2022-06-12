#include<iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Base default Constructor"<<endl;
        }
        Base(int x){
            cout<<"Base int Constructor"<<endl;
        }
        ~Base(){
            cout<<"Base Destructor"<<endl;
        }
        Base(const Base &r){
            cout<<"Base Copy Constructor"<<endl;
        }
};
class Der:Base{
    public:
        Der(){
            cout<<"Der Constructor"<<endl;
        }
        Der(int x):Base(x){
            cout<<"Der int Constructor"<<endl;
        }
        ~Der(){
            cout<<"Der Destructor"<<endl;
        }
        Der(const Der &r):Base(r){
            cout<<"Der Copy Constructor"<<endl;
        }
};

int main(){
    cout<<"d ===>"<<endl;
    cout<<"----------------------------"<<endl;
    Der d;
    cout<<"----------------------------"<<endl<<endl;


    cout<<"d2(20) ===>"<<endl;
    cout<<"----------------------------"<<endl;
    Der d2(20);
    cout<<"----------------------------"<<endl<<endl;

    cout<<"d3(const Der &r) ===>"<<endl;
    cout<<"----------------------------"<<endl;
    Der d3(d2);
    cout<<"----------------------------"<<endl<<endl;


}
