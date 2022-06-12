#include<iostream>
using namespace std;
class Car{
    public:
    void start();
    void speedup();
    void stop();
    void brake();
};

void Car::start(){
    cout<<"Start"<<endl;
    return;
}

void Car::speedup(){
    cout<<"Speed Up"<<endl;
    return;
}
void Car::stop(){
    cout<<"Stop"<<endl;
    return;
}
void Car::brake(){
    cout<<"Brake"<<endl;
    return;
}

void CarGame(Car &r){
    r.start();
    r.speedup();
    r.brake();
    r.stop();
    return;
}

class BMW: public Car{

};

class Nissan: public Car{

};
int main(){
    BMW bmw;
    Nissan nissan;
    CarGame(bmw);
    CarGame(nissan);
    bmw.stop();
    return 0;
}
