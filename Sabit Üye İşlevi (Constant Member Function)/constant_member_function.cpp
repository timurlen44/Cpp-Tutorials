#include<iostream>
using namespace std;
struct Data{
	int i;
};

//void struct_degistirme(Data*);//yapip elemanlarini degistirebilirim
//void struct_okuma(const Data*);//yapip elemanlarini salt okuma amacli aldik
class Sinif{
public:

	Sinif(int i = 0){
		this->	i = i;
	}

	void set_integer(){
		i+=5;
	}
	 void display()const{//sadece salt okuma amaçlý deðiþtirilemez!!!
		cout<<"i = "<<i<<endl;
	}
private:
	int i;
};
int main(){
    /*
    //1
	const Data myData{5};//const olarak tanimladim
	myData.i = 55;//bundan ötürü bu degisikligi yapamassin basta nasil tanimladýysan öyle kalir!!!
    */


    //2
	Data myData ={17};
	const Data* p_myData = &myData;
	p_myData->i;
	cout<<"i = "<<p_myData->i<<endl;
	//p_myData->i = 15;//p_myData' yi olustururken const olarak tanimladik yani salt okuma amacli olduðunu kastettik bundan dolayi bu satiri kullanamassin.

    /*
    //3
	Sinif myClass; //i = 0
	myClass.set_integer();
	myClass.set_integer();
	myClass.set_integer();//i = 15
	myClass.display();
    */
	return 0;
}
