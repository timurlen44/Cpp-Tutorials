#include<iostream>
using namespace std;

class Myclass{
public:
	Myclass();

	~Myclass();
	/*
	Destructor özellikleri
	1) Parametre alamaz
	2) Static olamaz non static bir member function' dýr.
	3) Const olamaz.
	4) Private, protected ya da public  eriþim bölgelerinde yer alabilir.
	4) ismiyle cagirilabilir.
	5) Destructor çagirilmasini derleyiciye birakabilir ama bazi durumlarda kendimiz yazmamiz gerekebilir
        Örnek Durumlar:
            *Mermory allocation yapmýþýzdýr geri bellekten silerken silme kýsmýný destructor kýsmýnda yaparýz
            *Dosya açmisizdir dosya kapama kismini destructor fonsiyonunda yapariz
            *Soket açmýþýzdýr soket kapama kismini destructor fonsiyonunda yapariz
            *veri baglantisi açmisizdir kapama kismini destructor fonsiyonunda yapariz
	6)
	*/
};

Myclass::Myclass(){
	cout<<"constructor cagirildi"<<endl;
	cout<<this<<endl;
}
Myclass::~Myclass(){
	cout<<"Destructor cagirildi"<<endl;
	cout<<this<<endl;
}
Myclass sinif[3];
//LIFO = LAST IN FIRST OUT = ILK GIREN SON ÇIKAR ==> STACK VERI YAPISI
int main(){

}
