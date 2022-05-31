#include<iostream>
using namespace std;
//converting constructor' un olmasını istemediğimiz durumlarda kullanırız.
//Diğer manası explicit keyword' ü tür dönüşümüne izin vermiyor
class myClass{
	public:
	myClass();
	~myClass();
	explicit myClass(int x);//converting constructor
	myClass(const myClass& other);
	myClass& operator = (const myClass& other);//copy assigment function
	//Tek parametreli olması gerekiyor
	//Eðer myClass(int x); satırını çıkarırsan there is no acceptable conversion hatasını alırsın.
};
myClass::myClass(int x){
	cout<<"converting constructor  x = "<<x<<endl;
}
myClass::myClass(){
	cout<<"constructor without parameter"<<endl;
}
myClass::~myClass(){
	cout<<"detructor"<<endl;
}
myClass& myClass::operator =(const myClass& other){
	cout<<"copy assigment function"<<endl;
	return *this;
}
myClass::myClass(const myClass& other){
	cout<<"copy constructor"<<endl;
}
void foo(myClass x){

}
int main(){
myClass x;
//x = 15;//hata vercek eğer hata vermesini istemiyorsansa explicit ifadesini sil
x = (myClass)15;//tür dönüştürme operatörü sayesinde converting constructor ' u çağırabiliyoruz.
x = static_cast<myClass>(16);//tür dönüştürme operatörü sayesinde converting constructor ' u çağırabiliyoruz.
}
