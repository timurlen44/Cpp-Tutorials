#include<iostream>
using namespace std;
//
/*
(1) interface => Base
(2) implementation => Der

virtual keywordunu kullanacağız !!!

class airPlane{//polymorphism
    public:
        virtual void fly();
}

class Jet:airPlane{
    void fly(){
        cout<<"override fly"<<endl;
    }
}


*/
/*
BMW -> ARABA (ORTAK ÖZELLİKLER MOTOR 4 TEKERLEK)
AUDI -> ARABA

class araba{
    class BMW-> based on car
    class AUDI -> based on car
    class FERRARI -> based on car

    //derived class -> bizim özelleştirdiğimiz class (BMW , AUDI, FERRARI)
    //base class -> ortak özellikler olan class yani burada araba class' ı base class oluyor

    class A{
        // ... kodlar
    }
    class B{
        A a;//inheritence değil sadece A sınıfından bir member' e sahip oluyor.
        // ...kodlar
    }

    inheritence' da bir class' ı başka bir class' dan türetiyoruz ama türettiğimiz class bizim türetmek için kulandığımız base class' ın tüm fonksiyonlarına ve özelliklerine sahip olacak
}
*/
class Base{
    public:
        void baseFunc1();
        void baseFunc2();
        void baseFunc3();


};

class Derived:Base{//hiç bir şey yapmadığımız için private oldu


};

class Derived1:private Base{// Kısıtlı erişim

};

class Derived2:public Base{//
    public:
        void Derived2Func1();
        void Derived2Func2();
        void Derived2Func3();
};

class Derived3:protected Base{//
    public:
        void Derived3Func1();
        void Derived3Func2();
        void Derived3Func3();
};
int main(){
    Derived myder;
    Derived1 myder1;
    Derived2 myder2;
    Derived3 myder3;
    Base mybase;

    //Her BMW bir arabadır ama her araba bir BMW değildir.
    mybase = myder2;
    Base *myBase_ptr = &myder2;
    Base &myBase_ref = myder2;
    //myder2  = mybase;//Yanlış

    return 0;
}
