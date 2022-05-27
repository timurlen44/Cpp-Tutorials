#include<iostream>
using namespace std;
class Myclass{
	public:
	Myclass(){//overload mevzusu geçirli geri dönüs deðeri yok, const olamaz private bölümünde olursa cllient kodlari tarafindan olusturulmasi hta olur
		cout<<"class meydana geldi"<<endl;
	}
};

class Myclass2{
	public:
	Myclass2() = default;//default constructor üretmesini istediðimizi compiler' e söylüyoruz....
	//Myclass2() = delete;//fonksiyonu sildik.
};


int main(){
//1
Myclass m1;
Myclass* p = &m1;//consustor tekrar cagirilmadi
Myclass& r =  m1;//consustor tekrar çagirilmadi(nesnenin yerine geçen mekanizma nesne deðil)

//2
//Myclass m2[4];// 4 defa çagirildi
}

