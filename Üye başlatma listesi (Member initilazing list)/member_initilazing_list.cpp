#include<iostream>
using namespace std;
/*
Bu durumun iki adi bulunmakta:
    1) Constructor initializer list
    2) Member initializer list(MIL)

Kisaca kullanilma amacini anlatmak istiyorum:
	+ bir nesnenin elemanlarinin tamamina veya bir kismina ilk deger atamasi yapmaya saðlayan yapidir.

*/

class myClass{
	int x,y;
	const int zorunlu_ilk_deger_atamasi;//eger const ise zorunlu olarak ilk deðer atamasi yapman gerekiyor!!!
	//int &r;//referanslarada ilk deger atamasi yapmak zorundasin
	public:
		myClass();
		void display()const;
};
/*
///1
myClass::myClass():x(10),y(20),zorunlu_ilk_deger_atamasi(80){

}
*/
//2
myClass::myClass()
:x{10},y{20},zorunlu_ilk_deger_atamasi{80}{

}

void myClass::display()const{
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
cout<<"const int zorunlu_ilk_deger_atamasi = "<<zorunlu_ilk_deger_atamasi<<endl;
}
myClass sinif;
int main(){
	sinif.display();

}
