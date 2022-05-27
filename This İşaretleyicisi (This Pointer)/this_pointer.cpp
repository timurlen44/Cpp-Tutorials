#include<iostream>
using namespace std;
//This bir pointerdir sadece non-static üye fonksiyonlarýnýn içinde kullanilabilir
//this pointerinin degeri, hangi nesnenin üye fonksiyonu için cagirilmissa o nesnenin adresi anlamina geliyor


class sinif{
	private:
		int i;
		void func();
	public:
		void foo();
		void show_i();

};

struct yapi{
	int i[20];

};
struct yapi y1,y2;
void sinif::foo(){
	cout<<"void sinif::foo() cagirildi"<<endl;
	cout<<"foo() function scope A objesinin adresi: "<<this<<endl;//this nedir  yani þu anda a nesnesinin adresidir!!!
	this->i = 30;//this operatörü class' in adresini barindiriyor -> operatörü soldaki nesnede sagda belirtilen i var mi yok mu diye bakiniyor (this bir pointer yani o nesneyi isaret ediyor)
}
void sinif::show_i(){
    cout<<"i = "<<i<<endl;
}
int main(){
	sinif A;
	cout<<"main scope A objesinin adresi: "<<&A<<endl;
	A.foo();
	A.show_i();


}
