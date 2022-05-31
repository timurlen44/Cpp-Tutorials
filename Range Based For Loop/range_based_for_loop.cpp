#include<iostream>
using namespace std;
#define SIZE 5
int main(){
	int A[SIZE] = {2,4,6,8,10};
	for (int i = 0; i< SIZE; i++)
		cout<<A[i]<<" ";
    cout<<endl;

	//Bu sektansı kullanmanın amacı
	//1) Daha kolay bir kullanım
	//2) Daha güvenli bir kullanım yani diziyi taşırma gibi bir hata yok
	for (auto x : A){
        cout<<x<<" ";
	}
    cout<<endl;

    char str[20] = "Emin TANIK";
    for(auto c : str){
        cout<<c<<" ";
    }

}
