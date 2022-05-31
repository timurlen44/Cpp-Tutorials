
//Örnek 1
#include<iostream>
using namespace std;
class sinif{
	public:
	int x,y;//data member  and non static member // bu sınıftan üretilen her bir obje için  x ve y değişkenlerine özel hafızadan yer ayırılıyor bir obje diğer objenin data memberine ulaşamıyor
	static int z1,z2,z3;//static member // sinif türünden oluşturulan tüm objeler arasında paylaştırılan bir data üyesi
	//static int z4 = 60; //hatalı bir tanımlama
	//function member -> void fun();  int func2();
	//type member  typedef i int;
	//static data member static int x;
};
int sinif::z1 = 30;
int sinif::z2 = 40;
int sinif::z3 = 50;
int main(){
	sinif o1,o2;

	cout<<"sizeof(sinif) = "<<sizeof(sinif)<<endl;
	cout<<"sinif::z3= "<<sinif::z3<<endl;
}


/*
//Örnek 2
#include<iostream>
using namespace std;



class sinif{
	public:
	int a,b;//data member  and non static member // ibu sýnýftan üretilen her bir objhe için  x ve y deðiþkenlerine özel hafýzadan yer alýnýyor bir obje diðer objenin data memberine ulaþamýyor
	static int c;
	const int i1{20};
	const static int i2{50};
};
int sinif::c = 30;

int main(){
	sinif o1,o2;
	//o1.c++;//syntax hatası değil ama kodu okuyanı yanıltabilir.
	//sinif::c++;//daha doğru kullanım bu

}
*/
/*
//Örnek 3

*/
/*
//Örnek 3
#include<iostream>
using namespace std;

class myClass{
	int x,y;
	const static int counter{5};
	public:
		void non_static_foo();
		static void static_foo();
};
void myClass::non_static_foo(){//gizli bir paremetre ile this pointeri bu fonksiyona veriliyor
	x{20};
	this->y{30};
	x{myClass::counter};
}
void myClass::static_foo(){
	//x{20}; // bu değişken nesnenin x' i static_foo bu static foo bu elemana erişemez ancak parametre olarak nesnenin adresini(this pointer) verirsen erişebilir (this->x{20})
	myClass::counter++;//nesneye ait değil sınıfa ait bundan dolayı buna erişebiliriz.
	//bu fonksiyona this paremetresi dönmez
	myClass* p = new myClass();
	p->x{30};

;}
*/
/*
//Örnek 4
#include<iostream>
using namespace std;


class Student{
	private:
	string Name;//nesneden nesneye değişiyor
	string SurName;//non static data member
	static int student_counter;//static data member
	public:
	Student();
	Student(const string _name,const string _surname);
	~Student();
	string getName()const;
	string getSurname()const;//Non static member func
	static int get_student_counter();//static member func. no this
	//static member func: sınıf ile ilgili bir işlem yapıyor intance ile ilgili bir iþ yapıyor.
	//sınıf nesnesi ile ilgili bir işlem yapmadığı için this pointerine ihtiyaç yok.
};
int Student::get_student_counter(){
	return student_counter;
}
Student::Student(){
	++Student::student_counter;
}
Student::~Student(){
	--Student::student_counter;
}

int main(){
	myClass n1;
	n1.static_foo();//yanlýþ kullaným deðil ama okuyucunun kodlarý okurken yanýlmamasý için
	myClass::static_foo();//bu kullaným daha doðru bir kullanýmdýr

}


*/

/*
//Örnek 5
#include<stdio.h>
class matematik{
	public:
		static void square(int x){
			printf("%d\n",x*x);
		}
		void cube(int x){
			printf("%d\n",x*x*x);
		}
};
int main(){
	matematik::square(2);
	matematik::square(2);
	//matematik::cube(2); olmuyor static void kullanman gerek
}


*/
