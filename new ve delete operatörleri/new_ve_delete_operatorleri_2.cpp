#include <iostream>
using namespace std;
class myc{
	int mx, my ;
	public:
	void func();
	int foo();
	myc(){
		cout<<"ctor cagirildi adrr = "<<this<<endl;
	}
	~myc(){
		cout<<"desctor cagirildi adrr = "<<this<<endl;
	}

};

int main(){

	cout<<"sinifin boyutu = "<<sizeof(myc)<<endl;
    /*
	//1) delete etmediðimiz müddetçe destructor çağırılmayacak ve belleği meşgul etmeye devam edecek
	auto c1 = new myc;
    */
	/*
	//2)
	auto c1 = new myc;
	delete c1;
	*/

	/*
	//20 tane ctor çağırılacak
	auto p{new myc[20]};
	delete[]p;
	*/


}
