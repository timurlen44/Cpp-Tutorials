#include<iostream>
using namespace std;
//bir nesnenin meydana gelmesini saðlayan fonksiyon
/*
CONSTRUCTOR ÖZELLIKLERI
1) Geri dönüs degeri yok(void bile degil).
2) Overload yapilabilir.
3) Non static dir basina const keyword'u (niteleyicisi) gelemez.
4) Consuctor ".", "->" ve "::" operatörleriyle çagirilamaz çaðýrabilmek için nesneyi çagirmamiz gerek.
*/
class Myclass{
	public:
	Myclass();
	Myclass(int x);//overload yaptim!!!
};

Myclass::Myclass(){//overload mevzusu geçerli geri dönüs degeri yok, const olamaz private bölümünde olursa client kodlari tarafýndan oluþturulmasi hata olur
		cout<<"class meydana geldi"<<endl;
	}
Myclass::Myclass(int x){//geri dönüþ deðeri yok unutma!!!
	cout<<"class meydana geldi girilen sayi = "<<x<<endl;
}
Myclass obj;
Myclass obj2(2);//statik ömürlü nesne oldugu için main fonksiyonu meydana gelmeden önce Myclass constructor'u meydana gelir. otomatik ömürlülerde ise durum farkli kullanildigi satirda constructor çagirdi
//parametresi olmayan constructor  'a default constructor denir!!!
//derleyici default constructor yazar ama parametreli constructor yazmaz!!!!

class sinif{
	public:
		sinif() = default;//derleyici  default bir constructor oluþturdu
};
//constructor ne zaman çagiriliyor!!!

class Myclass2{
	public:
	Myclass2(){//overload mevzusu geçirli geri dönüþ deðeri yok, const olamaz private bölümünde olursa cllient kodlarý tarafýndan oluþturulmasý hata olur
		cout<<"class2 meydana geldi"<<endl;
	}
	~Myclass2(){
		cout<<"class2 destructor cagirildi"<<endl;
	}
	Myclass2(int x);//overload yaptým!!!
};
void Myclass2_Func(){
	static Myclass2 obj3;//fonksiyonu ne zaman çagirirsam  o zaman static degisken hayata geçecek.
}
int main(){
	cout<<"Myclass2_Func(); cagirildi"<<endl;
	Myclass2_Func();
	cout<<"Myclass2_Func(); 2. kez cagirildi"<<endl;
	Myclass2_Func();
	cout<<"Myclass2_Func(); 3. kez cagirildi"<<endl;
	Myclass2_Func();
}
