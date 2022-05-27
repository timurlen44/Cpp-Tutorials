#include<iostream>
using namespace std;

//1
//Bazi fonksiyonlarin geri donus degeri sinifin üye fonksiyonunu döndürmek istiyor
//yani hangi nesne çagirilmissa o nesnenin adresini geri dönecek

class Myclass{
public:
    int my;
	Myclass& func();
};
Myclass& Myclass::func(){

	return *this;//this hangi nesne için çaðýrýlmýþsa o nesnenin adresini veriyor *this o nesnenin kendisini veriyor!!
}

//2
//Glocal bir fonksiyonu, this pointerinin deðeri olan adresle, *this nesnesiyle
//ya da referans sematiðiyle çaðýrmak
/*
class Myclass2{
	int my;

public:
	int a;
	void func();
	void get_int_value();
};

void foo(Myclass2* myc){
	myc->a = 15;
	cout<<myc->a<<endl;
}

void Myclass2::func(){
	foo(this);
}

void  Myclass2::get_int_value(){
	cout<<"int a == "<<a<<endl;
}
*/
/*
//3
//Bazi az karsilasilan bir durum olsada nesnenin adresini dondurulmesi gerekebilir
class Myclass3{
	public:
		int i;
		Myclass3* foo();//bu class in adresini dönecegi için Myclass* yaptik!!!

};

Myclass3* Myclass3::foo(){
	return this;
}
*/

int main(){

	//1
	Myclass obj;
	obj.my =  55;
	obj.func();
	cout<<"my = "<<(obj.func()).my<<endl;

	Myclass *obj2 = new Myclass;
	obj2->my = 25;
	cout<<"(with arrow operator) my = "<<obj2->my<<endl;
	cout<<"(with dot operator) my = "<<(obj2->func()).my<<endl;



    /*
	//2
	Myclass2 obj;
	obj.func();
	obj.get_int_value();
    */


    /*
	//3
	Myclass3 obj;
	(obj.foo())->i = 20;//(obj.foo()) bir nesneni adresi arrow operatörü ile i yi iþaret ettik ve ona 20 deðerini atadik
	cout<<"obj.i = "<<obj.i<<endl;
    */




}
