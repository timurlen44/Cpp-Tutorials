#include<iostream>
using namespace std;
/*
OOP de datalari temsil eden birimlere class denir. Her bir class
problem domainindeki varliklardan birini temsil ediyor. Temel amacimiz
görevimiz problem domainini bu claslar ile temsil etmek

class  ==> saat zamani gösteren bir araç bu bir class' tir

object(intance) ==> saatin ta kendisi

 */
 struct Naber{
 	void horse(){
 		cout<<"horse"<<endl;
	 }
 }horse_struct;

class myClass{//class scope begin
	public:
	//data member//static ya da nonstatic olabilir
	int i;
	//function member//static ya da nonstatic olabilir
	void foo(){
		cout<<"i = "<<i<<endl;
	}
	//type member -> structrue olabilir classs olabilir  enumaration olabilir  // typedef members her zaman nonstatic dir
	typedef int Word;
	//class member
	class newclass;
}c1;//class scope end
int main(){
horse_struct.horse();
c1.i = 55;
c1.foo();
}
