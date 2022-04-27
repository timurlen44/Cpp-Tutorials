#include<iostream>
using namespace std;
int g =100;
int foo(int x=40,int y =50,const char* name="Emin",int & r=g ){//default arguman

	cout<<"ad = "<<name<<" , toplam="<<x+y+r<<endl;
	return 1;
}
int arg(int& r){
	cout<<"referans = "<<r<<endl;
	return 0;
}
int main(){
	foo();
	foo(2);
	foo(10,20);
	foo(10,20,"Deneme");
	int g2 =300;
	foo(10,20,"Deneme2",g2);
	int sayi =55;
	int &r1 = sayi;
	arg(r1);
}
