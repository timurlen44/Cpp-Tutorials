#include<iostream>
#include<string>
using namespace std;
/*


*/
void foo(int x){
	cout<<"global foo cagirildi"<<endl;
}
class myClass{
private://bunu yazmasan bile buranin alti  public in üstüne yazdiklarin private olacak
int p;
public://eger sen buraya bir sey yazmassan otomatik olarak private olarak ayarlanir
	int i,y;
	void foo(int);
	int i_foo(void);
	int i_foo2(void){
		cout<<"integer myClass::FOO2"<<endl;
	}
	void goster(void){
		cout<<"class p = "<<p<<endl;
	}
};


struct myStruct{
public:
	int i,y;
	void foo(int);
	void goster(void){
		cout<<"struct i_p = "<<i_p<<endl;
	}
private://eðer sen buraya bir þey yazmassan otomatik olarak public olarak ayarlanýr
	int i_p=0,y_p=0;
	void foo_p(int x);
};

void myStruct::foo(int x){
	cout<<"myStruct::FOO"<<endl;
	i_p++;
	return;
}
void myClass::foo(int x){
	::foo(20);// global foo yu çagirdi
	i_foo2();//ayni sinif içerisindeki baþka fonksiyonu çagirildi
	cout<<"myClass::FOO"<<endl;
	p++;
	return;
}

int myClass::i_foo(void){//fonksiyonun geri donus deðeri int oldugu için int yazdýk
	cout<<"integer myClass::FOO"<<endl;
	p++;
	return 5;
}

int main(){

myClass sinif;
myStruct yapi;
sinif.foo(5);
sinif.i_foo();
yapi.foo(4);


yapi.goster();
sinif.goster();
}
