#include<iostream>
using namespace std;
/*
Friend of class:
1) Birbirlerinin private kısımlarına erişebilirler
2) fonksiyonlar veya sınıflar friend olabilir.
*/


/*
//Örnek 1
class myClass{
	private:
		friend void friend_func();//bu aslında member function degil (sınıfın üye fonks degil)
		//friend keyword ' ü ile friend_func(); fonksiyonunun friend fonksiyon olduğunu belirttik
		//artık friend_func() ;  myClass sınıfından türetilen nesnelerin private üyelerine erişebilecek
		friend void friend_func2(myClass& m);
	int mx,my;
	public:
	    myClass(int mx, int my):mx(mx),my(my){
            cout<<"constructor cagirildi"<<endl;
	    }
};

void func(){
	myClass m1(0,0);
//	m1.mx;//ulaşamaz çünkü private data member;
}
void friend_func(){
	myClass m1(5,7);
	cout<<"friend_func: m1.mx = "<<m1.mx<<" m1.my = "<<m1.my<<endl;
}
void friend_func2(myClass& m1){
	m1.mx;
	m1.my;
	cout<<"friend_func2: m1.mx = "<<m1.mx<<" m1.my = "<<m1.my<<endl;
}
int main(){
    friend_func();
    myClass m2(15,27);
    friend_func2(m2);
}

*/

/*
Not: Emin sınıfı Emreye friend verdi ama Emre sınıfı Emine
friendlik vermedi bundan dolayı Emin nesnesi Emrenin nesnesinin private ine erişemez;

*/
/*
//Örnek 2
class Emin{
	private:
		friend class Emre;
		int mx,my;
	public:
		void func(){
			Emre e;
			e.pub_a;
			e.foo();
		}
};

class Emre{
	private:
		int a,b;
	public:
		int pub_a;
		void foo(Emin& other){
			Emin emin;
			a = other.mx;
			b = other.my;
		}
};
int main(){

}
*/

/*

Not2: Bir sınıfın private fonksiyonuna friend lik verilemez.
*/
/*
//Örnek 3
class A;
class B;

class B{
	public:
		void foo(A& other);

		//yanlış bir tanımlama şekli
		//void foo(A& other){
		//  other.mx;
		//}
};

class A{
	private:
		friend void B::foo(A& other);
		int mx,my;
	public:
	    void show_hello(){
            cout<<"hello"<<endl;
	    }


};
void B::foo(A& other){
			other.mx = 7;
			other.my = 66;
			other.show_hello();
}

int main(){

}
*/
