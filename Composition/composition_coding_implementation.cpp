#include<iostream>
using namespace std;
//Bir s�n�f�n elemanlar�n�n ba�ka bir s�n�f�n t�r�nden olmas�d�r.
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
