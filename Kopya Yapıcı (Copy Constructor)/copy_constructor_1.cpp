#include<iostream>
using namespace std;
/*
Bir sınıf nesnesi hayata gelirken başka bir sınıf nesnesinden
kopyalanarak hayata geliyorsa copy constructor çağırılır
atama işleminden bahsetmiyoruz!!!
*/
int sayac;
class sinif{


	public:
		int x =10;
	int mevcut_nesne_numarasi;
		sinif(){
		cout<<"sinif default costructor cagirildi this = "<<this<<endl;
		++x;
		}
		~sinif(){
		mevcut_nesne_numarasi=++sayac;
		//mevcut_nesne_numarasi=sayac;
		cout<<"sinif default destructor cagirildi this = "<<this<<endl;
		++x;
		}
		void get()const{
		cout<<"x = "<<x<<endl;
	}
};

int main(){
sinif s1;//s1 nesnesini oluşturduk
s1.get();
sinif s2(s1);//Copy Constructor çağırıldı s2 nesnesi oluşturulurken s1 deki veriler s2' ye aynen kopyalandı
s2.get();
cout<<endl<<endl;
s1.get();
cout<<endl<<endl;
s2.get();
//sinif s1(); bu nesne çağırma degil fonksiyon oluyor hiç bir sik anlamadım
}
