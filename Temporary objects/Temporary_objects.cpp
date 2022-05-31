#include<iostream>
using namespace std;
/*
Geçici nesneler:
1) bu nesnelerin isimleri yoktur
2) Kaynak kodda olmayıp derleyici tarafından durumdan vazife çıkarılıp  yapolan nesnenelerdir
3) Temporary object 1 kere kullandıktan sonra bir daha aynı nesneyi kullanmamıza gerek kalmayan uygulamalarda kullanılır.
*/
/*
//Örnek 1
class n{
	private:
	static int s;
	public:
	n(){
		s++;
		cout<<"default ctor"<<endl<<"sayac = "<<s<<endl;
	}
	~n(){
		cout<<"desctor"<<endl;
	}
	void goster(){
		cout<<"sayaci goster = "<<n::s<<endl;
	}
};
int n::s = 0;
int main(){
	n n1;//isimlendirilmiş nesne
	n1.goster();
	n();//temporary object
}
*/
/*
//Örnek 2
class n{

	public:
	n(){
		cout<<"default ctor"<<endl;
	}
	~n(){
		cout<<"desctor"<<endl;
	}
};

void foo(const n& param){//SOL REFERANSI
	cout<<"const x& param"<<endl;
}
void foo(const n&& param){//SAÐ TARAF REFERANSI
	cout<<"const x&& param"<<endl;
}
int main(){
	n n1;
	foo(n1);//L value expression
	foo(n());//R value expression
}

*/
