#include<iostream>
using namespace std;
class Base{
    private:
        int pri;
    public:
    protected:
        int pt;
};

class Der: public Base{
    private:
        int a;
    public:
        void func(){
            a++;
            //pri++;//Base ' de private section' da olduğu için erişilemez
            pt = 0; // base ' in protected içinde kullanılan her değer türetilen sınıfta kullanılabilir.
        }
};

int main(){
    Der d;
    d.func();
    //d.pt = 5;//global fonksiyonuun içinde ya da main içerisinde protected içinde yazılan elemanı kullanamassın
    return 0;
}
