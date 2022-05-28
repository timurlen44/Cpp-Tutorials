#include<iostream>
using namespace std;

/*
Bir sınıf nesnesi hayata gelirken başka bir sınıf nesnesinden
kopyalanarak hayata geliyorsa copy constructor çağırılır
atama işleminden bahsetmiyoruz!!!
1) bir nesneye açık açık ilk değer verirlirse
2) bir nesneye sınıf türünden parametre verirse copy constructor çağırılır (Call by value durumu meydana gelir)
3) fonksiyonun geri gönüş değeri sınıf türünden ise copy constructor çağırılır.//adresini döndermeyecek int x; int dondur(){return x;} tarzında bir fonksiyon yani değerini döndüren bir fonksiyon olacak
*/
int x =10;
class sinif{

	public:

		sinif(){
		cout<<"sinif default costructor cagirildi this = "<<this<<endl;
		x++;
		}
		~sinif(){
		cout<<"sinif default destructor cagirildi this = "<<this<<endl;
		x++;
		}
		void get()const{
		cout<<"x = "<<x<<endl;
	}
};

void func(sinif p){//copy constructor cagirildi!!!!
	cout<<"func(sinif p) cagirildi.."<<endl;
}


sinif obj;
sinif func_sinif(){//copy constructor cagirildi!!!!
	cout<<"func_sinif(sinif p) cagirildi.."<<endl;
	return obj;
}



sinif s1();// bu nesne çağırma degil sinif türünden bir nesneyi döndürebilen fonksiyonm oluyor fonksiyon oluyor
sinif s1(){
	cout<<"a objesi return edilecek"<<endl;
	sinif a;
	return a;
}

int main(){
cout<<"main basladi!!!"<<endl<<endl<<endl;
sinif a;
/*
//Örnek 1
cout<<"Ornek 1: "<<endl<<"-----------"<<endl;
sinif s1;
func(s1);
func_sinif();
cout<<endl<<"-----------"<<endl;
*/

/*
//Örnek 2
cout<<"Ornek 2: "<<endl<<"-----------"<<endl;
sinif s7{func_sinif()};
s7.get();
cout<<endl<<"-----------"<<endl;
*/

/*
//Örnek 3
cout<<"Ornek 3: "<<endl<<"-----------"<<endl;
sinif s1;
sinif s2(s1);
sinif s3(s2);
cout<<endl<<"-----------"<<endl;
*/

cout<<"main bitiyor!!!"<<endl<<endl<<endl;
}
