#include<iostream>
using namespace std;

/*
    1) interface ve implementation

    interface: bizim airplane den t�retti�imiz t�m s�n�flara ait nesneler u�abilir

    implementation: bizim airplane den t�retti�imiz t�m s�n�flara ait nesneler u�abilir ve bunun yan�nda farkl� �zelliklerede sahip olabilir mesela daha h�zl� u�ar daha y�ksek irtifaya ��kar daha h�zl� manevra yapar gibi

    3) Virtual keyword

*/

class AirPlane {
public:
    virtual void fly(){ // poliformizm deniyor
        cout<<"airplane fly function"<<endl;
        return;
    }
};

class AirPlane2 : public AirPlane{
public:
    void fly(){
        cout<<"Airplane2 fly function"<<endl;
        return;
    }
};

class AirPlane3 : public AirPlane{
public:
    void fly() override{
        cout<<"Airplane3 override fly function"<<endl;
        return;
    }
};
int main(){
    AirPlane a1;
    AirPlane2 a2;
    a1.fly();
    a2.fly();

    AirPlane3 a3;
    AirPlane a4;
    a3.fly();
    a4.fly();

    return 0;
}
