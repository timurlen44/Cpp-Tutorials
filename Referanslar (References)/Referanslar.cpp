#include<iostream>
using namespace std;
int x=75,y=40;
int &foo(){
	return ++x;
}
int main(){
	
	cout<<"x = "<<x<<endl;
	cout<<"foo(); = "<<foo()<<endl;
	cout<<"++foo(); = "<<++foo()<<endl;
	cout<<"x = "<<x<<endl;
	//------------------------------//
	const int& referans=y;
	//referans = x; hata verecek çünkü yukarýda const int& yani deðperi deðiþtirilemez olarak ayarlandý
	
	//referans to referans yok int &r1;int &&r2 =r1; ama pointer to pointer var
	//elemanlarý referans olan bir dizi yokk ama elemanlarý pointer olan bir dizi var
	
	int x=20,y=30,z=40;
	int *pa[]={&x,&y,&z};
	//int &r[] ={x,y,z};
	
	
	//null pointer yok ama null referance var
	//void referance yok
	//funciton referenca var
	//bir pointeride referans alabiliriz
	
	/*
	int x=20,y=45;
	int *ptr =&x;
	int* &r = ptr;
	r=&y;//pointer referance
	*y = x;
	
	*/
	//referanslar scope'u boyunca ayný nesneyi göstermedk zorunda
	/*
	
	{
	
	scope kavramý
	
	}
	
	*/
	
}
