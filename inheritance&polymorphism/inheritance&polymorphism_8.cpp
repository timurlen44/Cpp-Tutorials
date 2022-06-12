#include<iostream>
using namespace std;

/*
Virtual keyword:

virtual -> abstract class ya da  abstract function oluşturmak oluşturmak için kullanılıyor.

inheritance yaparken

virtual function -> base class' ın member function' u oluyor
virtual function' ları türetilen sınıfta tekrardan implemente edebiliriz

Virtual keyword' ünün kuralları:

1) Biç bir zaman static olamaz ve friend olarak başka bir class' a veremeyiz.
2) Virtual function' lara pointerler ya da refarasnlar ile erişebiliriz buna runtime polymorphism denir
3) Virtual fonksiyonu base' de ve türetilmiş sınıfta tanımlamalıyız.
4) Türetilen class' daki fonksiyonu override edebiliriz ama override etmek zorunda değiliz.
5) virtual destructor denen bir yapıya sahibiz.

*/

#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout<<"Print base class \n";
    }
    void show()
    {
        cout<<"Show base class \n";
    }
};

class Der : public Base
{
public:
    void print()
    {
        cout<<"Print Der class \n";
    }
    void show()
    {
        cout<<"Show Der class \n";
    }
};

int main(){
    /*
    // 1
    Base b;
    b.print();
    b.show();
    */
    /*
    // 2
    Der d;
    d.print();
    d.show();
    */

    //3
    Base *bptr;

    Der d;

    bptr = &d;

    //virtual function, runtime' da bağlanıyor.
    bptr->print(); // der class' ı çağırıyor yukarıda yazan nedenden dolayı. // Eğer base class' dan virtual keywordünü kaldırırsak base class' dan çağıracak

    bptr->show(); // base class' ı çağırıyor

    return 0;
}
