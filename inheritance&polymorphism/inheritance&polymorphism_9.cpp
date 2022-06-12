
/*
//Early binding -> compile time (operator overloading)
//Late binding -> run time (pointer, reference)

//virtual keyword varsa bunun bir de virtual pointeri yaratýlýyor.

//virtual pointer denen bir yapý var daha detaylý araþtýr:  https://www.geeksforgeeks.org/virtual-function-cpp/

*/

#include<iostream>

using namespace std;
class Base{
public:
    void f1(){
        cout<<"Base f1 \n";
        return;
    }
    virtual void f2(){
        cout<<"Base f2 \n";
        return;
    }
    virtual void f3(){
        cout<<"Base f3 \n";
        return;
    }
    virtual void f4(){
        cout<<"Base f4 \n";
        return;
    }
};

class Der: public Base
{
public:
    void f1(){
        cout<<"Der f1 \n";
        return;
    }
    void f2(){
        cout<<"Der f2 \n";
        return;
    }

    void f3(double d){
        cout<<"Der f3 \n";
    }

};
int main(){
    Base *p1;

    Der d1;

    p1 = &d1;

    p1->f1();// Early binding // compile time

    p1->f2();

    p1->f3();

    p1->f3();

    //p1->f3(4.3); //hata veriyor Base class dada double parametre alacak þekilkde tasarlamalasýn

    return 0;
}
