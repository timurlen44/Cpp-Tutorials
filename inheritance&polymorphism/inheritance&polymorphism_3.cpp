#include <iostream>
using namespace std;
class Base{
    public:
        static void static_func(){
            cout<<"Base static_func()"<<endl;
            return;
        }
        void func(){
            cout<<"Base func()"<<endl;
            return;
        }
        void func2(){
            cout<<"Base func2()"<<endl;
            return;
        }
};

class Der: public Base{
    private:
        void func2(){
            cout<<"Der func2()"<<endl;
            return;
        }
    public:
        void func(){
            cout<<"Der func()"<<endl;
            return;
        }

};
Der d;
int main(){


    //public

    d.func();
    d.Base::func();


    //private

    //d.func2();//private olduğu eiçin erişemeyecek
    d.Base::func2();

    //static

    //d::static_func();//Der içinde böyle bir static fonksiyon yok
    Base::static_func();
    d.static_func();
    d.Base::static_func();

}
