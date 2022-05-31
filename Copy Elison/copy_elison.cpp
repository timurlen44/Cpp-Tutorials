#include<iostream>
using namespace std;
/*
Copy elison  Nedir?
1) Bir optimizasyon teknigidir.
2) Gereksiz nesnelerin kopyalanmasını engelleyip performans artışı sağlar.
3) Bu işlemi derleyici yapar.

Optimizasyon c++17 ile standart hale gelmiştir. bu standartla gelen optimizasyon çeşitleri:
+return value optimization
+fonksiyon çağırılarında fonksiyonlara geçici nesne ile çağırı yapılıyor
*/

class myClass{
	public:
	myClass(){
		cout<<"default constructor"<<endl;
	}
	myClass(int){
		cout<<"default constructor(int)"<<endl;
	}

	myClass(const myClass& other){//copy constructor
		cout<<"copy constructor"<<endl;
	}
    myClass& operator = (const myClass& other){//copy assignment
        cout<<"copy assignment"<<endl;
        return *this;
    }
    myClass& operator = (myClass && other){
        cout<<"move assignment"<<endl;
        return *this;
    }
    myClass(myClass&& other){
        cout<<"move constructor"<<endl;
    }
    ~myClass(){
		cout<<"desctor"<<endl;
	}

};

void foo(myClass x){// copy constructor

}
myClass foo2(){// copy constructor
	cout<<"foo2 ";
	myClass x;
	return x;
	//return myClass();//return value optimization durumu meydana gelirdi.
}

vector<int> return_vector(){
	vector<int> ivec(100000);
	return ivec;
}
int main(){
	myClass m1;
	myClass m2{m1};//copy constructor
	myClass m3 = foo2();//named return value optimization // copy ellision
	myClass m4(foo2());//named return value optimization // copy ellision
	//copy elision durumu oluyor gereksiz yere copy costructor çağırılmıyor
	//foo2 de oluşturulan nesnenin scope adı artık x degil m3 oluyor daha önceden oluşturulmuş nesne kullanılıyor

	vector<int> x = return_vector();//copy elison named value return optimizitaon// Eğer copy elison durumu olmasaydı 100 000 uzunluğunda vektörün tekrar kopyası alınacaktı ve büyük bir zaman kaybı olacaktı

}










