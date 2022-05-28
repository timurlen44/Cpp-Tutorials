#include <iostream>
#include <cstdlib>
//https://www.geeksforgeeks.org/operator-overloading-c/
//https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
using namespace std;
class Line {
private:
	int* mptr;

public:
	int x;
	Line()=default;
	Line(int len);
	Line& operator = (const Line& right);
	Line(const Line& other);
	~Line();
	size_t getLength();
};


Line& Line::operator = (const Line& other){
	mptr = static_cast<int*>(malloc(sizeof(other.mptr)));
	if(mptr == nullptr){
		cout<<"Bellek alani yetersiz"<<endl;
		exit(EXIT_FAILURE);
	}
	*mptr = *other.mptr;
	return *this;
}

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

Line L1{10};


{
	Line L3{20};
	L1 = L3;
}
L1.getLength();




}
