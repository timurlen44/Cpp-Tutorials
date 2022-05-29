
/*
R value and L value
lvalue -> cpp de bir değer hafızada head ya da stack' te tutuluyor ve adresi alınabiliyor.
rvalue -> sol taraf değeri olmayan herşeye rvalue diyoruz (non modifiable, temporary)

bir ifadenin adresini alıp kullanabiliyorsak lvalue' dir.

Bunların kullanım amacı bir değer geçici ise hafızadan ayrıca hafıza aayırıp gereksiz yere zaman ve kaynak tüketiminin önüne geçilir.
*/
/*
//örnek 1
#include<iostream>
using namepsace std;
int main(){
    int i = 16;// i : lvalue (kalıcı bir nesne) , 16 : rvalue (geçici bir nesne)
    int *iPtr = &i;//lvalue
    i = 5;
    int k = i+55;// k : l value, (i+55) : rvalue (adresini alamıyoruz)
    //12 = k; // 12 non modifiable olduğu için atanamaz
    return 0;
}
*/
/*
//Örnek 2
#include<iostream>
using namepsace std;
int main(){
    int x = 5; // x : lvalue , 5 : rvalue
    int &r1 = x;//r1: lvalue, x: lvalue
    r1++;
    r1++;
    cout<<"R1: " << r1 << endl;

    int &r2 = 7;// bir ifadenin referansını almak istediğimizde olmuyor
    //r2 : lvalue , 7: rvalue
    //referans adrese ihtiyaç duyar

    cont int &r3 = 9;//r3 için bir adres bölgesi oluşturuyor ve 9 ' u gidip oraya koyuyor.
    cout << "R3: "<< r3<<endl;
    //r3++;///değiştiremessin // r3 read only object
}
*/
/*
//Örnek 2
#include<iostream>
using namepsace std;
int main(){
    int x = 5; // x : lvalue , 5 : rvalue
    int &r1 = x;//r1: lvalue, x: lvalue
    r1++;
    r1++;
    cout<<"R1: " << r1 << endl;

    int &r2 = 7;// bir ifadenin referansını almak istediğimizde olmuyor
    //r2 : lvalue , 7: rvalue
    //referans adrese ihtiyaç duyar

    cont int &r3 = 9;//r3 için bir adres bölgesi oluşturuyor ve 9 ' u gidip oraya koyuyor.
    cout << "R3: "<< r3<<endl;
    //r3++;///değiştiremessin // r3 read only object
}
*/
/*
//Örnek 3
#include<iostream>
using namespace std;
int callFunc(int &a){
    return a;
}
int main(){
    int i = 15;
    callFunc(i);
    //callFunc(25);//lvalue' ye r value atayamayız
    return 0;
}
*/
/*

//Örnek 4
#include<iostream>
using namespace std;
int callFunc(int &a){
    return a;
}
int main(){
    int &&r1 = 222;//r value reference
    r1++;
    cout<<"r1 = "<<r1<<endl;

    int x = 15;
    int &r_temp = x;
    //int &&r2 =x; // syntax hatası
    //int &&r3 = r_temp; // syntax hatası
    //int &&r4 = r1; // syntax hatası
}
*/
/*
//Örnek 5
#include<iostream>
using namespace std;
void func(int &r){
    cout<<"lvalue reference : "<<r<<endl;

}

void func(int &&r){
    cout<<"rvalue reference : "<<r<<endl;

}
int main(){
    int a = 5;

    func(a);
    func(25);

    return 0;
}
*/

//Örnek 6
#include<iostream>
using namespace std;
int sum(int a, int b){
    int result = a+b;
    return result; // call by value (rvalue)
}
int main(){
    int a = 5,b = 25;

    cout<<"Rvalue is : "<<sum(a,b)<<endl;

    a = 2, b = 3;

    int result = sum(a,b); // return rvalue

    cout<<"Rvalue is : "<<sum(a,b)<<endl;

    //int &result2 = sum(a,b);//yanlış
    int &&result3 = sum(a,b);
    const int &result4 = sum(a,b);
    const int &&result5 = sum(a,b);


    return 0;
}
