#include<iostream>
using namespace std;
class Data{
	public://her yerden ulasabilirsin
	int public_data;
	private://sadece class içinden erisebiliyorsun
	int private_data;//sadece
	protected://inheritince de kullaniyorsun
	int protected_data1 = private_data;
	int protected_data2 = public_data;
	int protected_data3;
};
//.
//->
//:: resoltion operatörü

//1) Name Lookup
//2) Contex Control
//3) Access Control

int main(){
	Data myData;
	Data *PmyData = &myData;

	myData.public_data = 30;
	PmyData->public_data = 15;
	cout<<PmyData->public_data<<endl;

}
