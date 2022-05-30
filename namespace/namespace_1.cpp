#include<iostream>
using namespace std;

/*
global scope daki isim çakışmalarını engellemek için kullanılan bir yöntemdir
//ali.h
int counter = 30;
//veli.h
double counter = 34.7;

şeklinde 2 kütüphanede farklı şekillerde benzer isimler tanomlanmış olabilir o zaman ne yapman gerekiyor?
namespace kullanıp çakışmayı engelleyeceksin
*/

namespace veli{
	int counter = 30;
	void foo_veli(){
		cout<<"foo_veli();"<<endl;
		return;
	}
	namespace veli2{
        void foo_veli2(){
            cout<<"foo_veli2();"<<endl;;
            return;
        }
	}
}
//using veli::foo_veli;
//using veli::counter;
//using namespace veli;
int counter = 50;
int main(){
    //foo_veli();////using namespace veli;
	cout<<"global namespace counter = "<<::counter<<endl;
	cout<<"veli namespace counter = "<<veli::counter<<endl;
    veli::foo_veli();
    veli::veli2::foo_veli2();

}







