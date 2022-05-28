#include <iostream>
#include <cstdlib>
using namespace std;
/*
	Copy constructor kullanırken dikkatli olmamızı gerektiren bazı durumlar var.
	içinde pointer bulunan bir sınıftan nesne oluşturdun  diyelim gerekli ayarlamaları yaptın data members ' e atamaları yaptın diyelim.
	Oluşturduğun nesnen ve copy constructor:
	sinif nesne1;
	sinif nesne2{nesne1};
	şimdi nesne1 deki pointer 500. bloktaki integer bir değerin adresini tutuorsa nesne2 deki pointerde aynı adresteki değeri tutacak bu istenmeyen bir durum meydana getirir
	bu duruma "shalow copy" denir bu durum genellikle içinde pointer bulunan ve copy constructor un derleyici tarafından yazılmasına izin verildiği durumlarda meydana gelir
	eğer biz bu durumun olacağını biliyorsak ve copy constructor' umuzu kendimiz yazarsak bu türde bir copy constructor çağırılma olayına "deep copy"  denir.

------------
//Shalow copy örneği
class sinif{
private:
int* pi;
public:
	sinif(){
		pi = (int*)malloc(sizeof(int)*4);
	}

	~sinif(){
		free(pi);
	}

}
------------

Shalow Constructor Sorunları:
1) 	İki nesnenin pointerleri aynı yeri işaret edecek
2) 	Eğer biz bu pointerlere başlangıçta bir memory allocation işlemi yapmış isek Destructor da bizim aldığımız belleği geri vermemiz gerekiyor
    örnek veriyorum nesne1  nesnesinin ömrü bitti Destructor fonksiyonu çağırılacak o zaman problem olmadı ama nesne2 'nin pointeride ram' da aynı yeri işaret ediyor
    ve tekrar aynı yeri free etmeye çalışıyorsa o zaman runtime hatası olur.

*/





class Line {
private:
	int* mptr;

public:
	int x;
	Line(int len);
	Line(const Line& other);
	~Line();
	size_t getLength();
};
Line::Line(int len):mptr{nullptr}{
	cout<<"Constructor cagirildi Address: "<<this<<endl;
	mptr = static_cast<int*>(malloc(sizeof(int)));
	if(mptr == nullptr){
		cout<<"Bellek alani yetersiz!!!"<<endl;
		exit(EXIT_FAILURE);
	}

	*mptr = len;
}
Line::Line(const Line& other){
	cout<<"Copy constructor cagirildi Address: "<<this<<endl;
	mptr = static_cast<int*>(malloc(sizeof(int)));
	if(mptr == nullptr){
		cout<<"Bellek alani yetersiz!!!"<<endl;
		exit(EXIT_FAILURE);
	}

	*mptr = *(other.mptr) + 5;//*mptr = *other.mptr + 5;//iki kullanımda aynı!!!

}
Line::~Line(){
	if(mptr != nullptr)
		free(mptr);
	cout<<"Destructor cagirildi Address: "<<this<<endl;
}
size_t Line::getLength(){
	return *mptr;
}

void display(Line obj){
	cout<<"Lenght of line is: "<<obj.getLength()<<endl;
}
void display2(Line* obj2){
	cout<<"Lenght of line is: "<<obj2->getLength()<<endl;

}

int main(){
//Constructor
cout<<"L1 olusturuluyor"<<endl;
cout<<"-------------"<<endl;
Line L1{10};
cout<<"-------------"<<endl<<endl;

//Copy Constructor
cout<<"L2 olusturuluyor"<<endl;
cout<<"-------------"<<endl;
Line L2{L1};
cout<<"-------------"<<endl<<endl;


//Call by value => Copy Constructor
cout<<"display(L1)"<<endl;
cout<<"-------------"<<endl;
display(L1);
cout<<"-------------"<<endl<<endl;

//Call by value => Copy Constructor
cout<<"display(L2)"<<endl;
cout<<"-------------"<<endl;
display(L2);
cout<<"-------------"<<endl<<endl;

//call by reference
cout<<"display2(L1)"<<endl;
cout<<"-------------"<<endl;
display2(&L1);
cout<<"-------------"<<endl<<endl;

//call by reference
cout<<"display2(L2)"<<endl;
cout<<"-------------"<<endl;
display2(&L2);
cout<<"-------------"<<endl<<endl;

}



























