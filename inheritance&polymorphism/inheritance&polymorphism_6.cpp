#include<iostream>
using namespace std;
class Base{
    public:
    void operator=(const Base &r){
        cout<<"Base Copy Assignment"<<endl;
    }
};


class Der:Base{
    public:
    void operator=(const Der &r){
        Base::operator=(r);//bunu kullanmassak Base kısmı Move assignment olmaz ve sıkıntı olur.
        //*(Base *)this = r;//Yukardaki yerine bunuda kullanabiliriz.
        //(Base *)this->operator=(r)//Yukardaki yerine bunuda kullanabiliriz.
        cout<<"Der Copy Assignment"<<endl;
    }
};
using namespace std;
int main(){
    Der d1,d2;
    d1 = d2;

    return 0;
}
