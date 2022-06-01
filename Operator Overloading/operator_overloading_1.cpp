#include <iostream>
using namespace std;

//Var olmayan operat�rler overload edilemez
//T�m operat�rler overload edilemez ( :: , sizeof , .)
//Baz� operat�rler �ye fonksiyonu olarak overload edilebilir ama global scope da overload edilemez
//operat�r �nceliklerini de�i�tiremessiniz (c + a*b)
//operat�rlerden birisi hari� geri kalan�n�n geri d�n�� de�erini ayarlayabiliriz
class complex_numbers{
    private:
    double r;
    double i;
    public:
    complex_numbers(double r = 0, double i = 0):r(r),i(i){//r = reel, i = imaginer

    }

    void display()const{
        if(i<0){
            cout<<r<<"-i"<<-i<<endl;
        }
        else{
            cout<<r<<"+i"<<i<<endl;
        }
    }

    complex_numbers& operator=(const complex_numbers& other){
        this->i = other.i;
        this->r = other.r;
        return *this;
    }

    complex_numbers& operator+(const complex_numbers& other){
        this->i += other.i;
        this->r += other.r;
        return *this;
    }

    complex_numbers& operator-(const complex_numbers& other){
        this->i -= other.i;
        this->r -= other.r;
        return *this;
    }

    complex_numbers& operator/(const complex_numbers& other){
        this->i /= other.i;
        this->r /= other.r;
        return *this;
    }
    complex_numbers& operator*(const complex_numbers& other){
        this->i *= other.i;
        this->r *= other.r;
        return *this;
    }

};

int main(){
    complex_numbers cn1 = {1,5};
    complex_numbers cn2 = {5,-3};
    complex_numbers cn3 = {0,0};

    cout<<"Complex Numbers 1: "<<endl;
    cout<<"cn1 = ";cn1.display();
    cout<<"cn2 = ";cn2.display();
    cout<<"cn3 = ";cn3.display();
    cout<<"-----------------"<<endl;

    cn3 = cn2+cn1;
    //cn3.operator=(cn2.operator+(cn1))

    cout<<"Complex Numbers 2: "<<endl;
    cout<<"cn1 = ";cn1.display();
    cout<<"cn2 = ";cn2.display();
    cout<<"cn3 = ";cn3.display();
    cout<<"-----------------"<<endl;

    cn3 = cn2-cn1;
    //cn3.operator=(cn2.operator-(cn1))
    cout<<"Complex Numbers 3: "<<endl;
    cout<<"cn1 = ";cn1.display();
    cout<<"cn2 = ";cn2.display();
    cout<<"cn3 = ";cn3.display();
    cout<<"-----------------"<<endl;


    cn3 = cn2*cn1;
    //cn3.operator=(cn2.operator*(cn1))
    cout<<"Complex Numbers 4: "<<endl;
    cout<<"cn1 = ";cn1.display();
    cout<<"cn2 = ";cn2.display();
    cout<<"cn3 = ";cn3.display();
    cout<<"-----------------"<<endl;

    cn3 = cn2/cn1;
    //cn3.operator=(cn2.operator/(cn1))
    cout<<"Complex Numbers 5: "<<endl;
    cout<<"cn1 = ";cn1.display();
    cout<<"cn2 = ";cn2.display();
    cout<<"cn3 = ";cn3.display();
    cout<<"-----------------"<<endl;



    return 0;
}
