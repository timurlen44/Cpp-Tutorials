#include<iostream>
using namespace std;
int i = 20;
//Resolution operatörünün kullanilma durumlari:
/*

//1) Eðer bir local space de ve global space de ayný isimli degisken var ise  global degiskene erismek için kullanilir.
int X;
main(){
int X;
::X++;
}
*/
/*
//2) Class'in disinda class üyesi olan bir fonksiyon tanimlarken

#include<iostream>
using namespace std;
class A{
public:
void goster(void);
};

void A::goster(void){
cout<<"gosterdim"<<endl;
}
int main(){
A a;
a.goster();
}
*/
//3) Class'in static degiskenlerine erismek isterken kullanilir

#include<iostream>
using namespace std;

class Test
{
private:
    static int x;
public:
    static int y;

    // Local parameter 'a' hides class member
    // 'a', but we can access it using ::
    void func(int x)
    {
       // We can access class's static variable
       // even if there is a local variable
       cout << "Value of static x is " << Test::x<<endl;

       cout << "Value of local x is " << x<<endl;
    }
    void show_y(){
        cout <<"value of static y is "<<Test::y<<endl;
    }
};

// In C++, static members must be explicitly defined
// like this
int Test::x = 1;
int Test::y = 2;

int main()
{
    Test obj;
    int x = 3 ;
    obj.func(x);

    cout << "\nTest::y = " << Test::y<<endl;
    //cout << "\nTest::x = " << Test::x;//erisilemez çünkü private int Test::x is private within this contex

    return 0;
}

/*
6)Bir class içinde baska bir class tanimlanmiþ ise yeni tanimlanan class' in elemanlarina ulasabiliriz
// Use of scope resolution class inside another class.
#include<iostream>
using namespace std;

class outside
{
public:
      int x;
      class inside
      {
      public:
            int x;
            static int y;
            int foo();

      };
};
int outside::inside::y = 5;

int main(){
    outside A;
    outside::inside B;

}

*/

/*
//7 Example
int main(){
int i =30;
/////////////// main scope içindeki i///////////////////////////
++i;
cout << i<<endl;
/////////////// ---------------------///////////////////////////

/////////////// main scope içindeki i gösterildi globaldeki artýrýldý///////////////////////////
++::i;
cout << i<<endl;
/////////////// ---------------------///////////////////////////

/////////////// globaldeki artýrýldý ve gösterildi///////////////////////////
++::i;
cout << ::i<<endl;
/////////////// ---------------------///////////////////////////


//pekiya yukarda i yi bulamassa ? o zaman syntax hatasi olur
}
*/
