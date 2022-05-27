#include<iostream>
using namespace std;
//bir fonksiyonu delete etmek
void foo(double) = delete;
//artık bu fonksiyonu çağırırsak syntax hatası olacak!!!
int main(){
	//foo(1.5);//bu fonksiyon delete edildi çağırılırsa hata olacak
}
